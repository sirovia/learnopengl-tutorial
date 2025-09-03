//
// Created by alimu on 8/25/2025.
//

#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>


class Shader {
public:
    unsigned int ID;

    explicit Shader(const std::filesystem::path& vertexPath, const std::filesystem::path& fragmentPath);

    void use();

    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

    void setFloat(const std::string &name, float value1, float value2, float value3) const;
    void setMat4(const std::string& name, const glm::mat4& value) const;
};



#endif //SHADER_H
