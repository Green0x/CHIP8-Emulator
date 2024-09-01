#include <vector>
#include <print>
#include <iostream>
#include <algorithm>
#include <fstream>

// 4Kb of RAM
unsigned char memory[4096];

// Program counter
unsigned char pc{};

// Index Register
short I{};

// A Stack for 16 bit addresses
std::vector<short> stack;

// 8 bit Delay Timer
unsigned char dt{};

// 8 bit Sound Timer
unsigned char st{};

// Registers
unsigned char V[16] = {
	0x0, 0x1, 0x2, 0x3,
	0x4, 0x5, 0x6, 0x7,
	0x8, 0x9, 0xA, 0xB,
	0xC, 0xD, 0xE, 0xF
};

void loadRom(std::string romName) {
	std::ifstream romFile(romName, std::ios::binary);

	if (romFile.is_open())
	{
		romFile.seekg(0, std::ios::end);
		size_t length = romFile.tellg();
		romFile.seekg(0, std::ios::beg);		

		if (length > 0) {
			romFile.read(reinterpret_cast<char*>(memory), length);
		}

		romFile.close();
	}
	else
	{
		std::cout << "Unable to open file";
	}
}

int chip8() {
	
	std::print("yo");

	return 0;
}

