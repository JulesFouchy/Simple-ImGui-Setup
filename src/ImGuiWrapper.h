#pragma once

#include <imgui/imgui.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

GLFWwindow* create_window(int width, int height, const char* title);
void        start_imgui_frame();
void        end_imgui_frame(GLFWwindow* window, ImVec4 background_color = {0.45f, 0.55f, 0.60f, 1.00f});
void        shutdown(GLFWwindow* window);