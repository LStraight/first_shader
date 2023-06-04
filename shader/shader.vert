#version 410

layout (location = 0) in vec3 pos;
layout (location = 0) in vec4 color;

out vec4 fragcol

void main(){
    float x = (pos.x / 1024.0) * 2.0 - 1.0;
    float y = (pos.y / 768.0) * 2.0 - 1.0;
    gl_Position = vec4(x, y, 0.0, 1.0);

    fragCol = color;

}