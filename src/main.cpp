#include <vector>
#include <print>

#include "renderer.h"
#include "./utils/romLoader.h"

int main(int argc, char *argv[])
{
    // TODO: Feed argv to loadRom for release
    std::vector<char> romBuffer = loadRom("IBM_Logo.ch8");
    std::print("Rom Loaded!");
    
	return 0;
}