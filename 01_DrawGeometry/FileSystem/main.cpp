#include <iostream>
#include "file_system.hpp"
int main()
{
	std::string  OutputPath = "E:\\OpenGLEnginer\\OpenGLEnginer\\01_DrawGeometry\\FileSystem\\qqq";
	bool res = stlplus::folder_create(OutputPath);

	return 0;
}