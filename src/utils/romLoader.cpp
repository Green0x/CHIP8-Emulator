#include <fstream>
#include <vector>
#include <iostream>

std::vector<char> loadRom(std::string romName) {
	std::ifstream romFile(romName, std::ios::binary);
	std::vector<char> buffer;
	if (romFile.is_open())
	{
		romFile.seekg(0, std::ios::end);
		size_t length = romFile.tellg();
		romFile.seekg(0, std::ios::beg);

		if (length > 0) {
			buffer.resize(length);
			romFile.read(&buffer[0], length);
		}

		romFile.close();
	}
	else
	{
		std::cout << "Unable to open file";
	}

	return buffer;
}