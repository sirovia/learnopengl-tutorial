#version 330 core
out vec4 FragColor;
in vec3 ourColor;
in vec2 TexCoord;

uniform sampler2D texture;
uniform sampler2D texture1;


void main(){
    FragColor = mix(texture(texture, TexCoord), texture(texture1, TexCoord), 0.2);
}