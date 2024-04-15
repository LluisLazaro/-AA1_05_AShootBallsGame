#pragma once
#include <iostream>
#include <string>

enum class Ball {

	GREEN,
	ORANGE,
	YELLOW,
	BLUE,
	RED
};

// Aqui estan els "codis" que canvien la consola en altres colors i aixi tenim valors constants dels colros

const std::string DEFAULT_COLOR = "\033[48;5;0m";
const std::string GREEN_COLOR = "\033[48;5;40m";
const std::string ORANGE_COLOR = "\033[48;5;208m";
const std::string YELLOW_COLOR = "\033[48;5;226m";
const std::string BLUE_COLOR = "\033[48;5;27m";
const std::string RED_COLOR = "\033[48;5;160m";


