#include <vector>
#include <print>

#include "renderer.h"
#include "chip8.h"

int main(int argc, char *argv[])
{
    // TODO: Feed argv to loadRom for release
    loadRom("IBM_Logo.ch8");
    std::print("Rom Loaded into memory!");
    chip8();
    
	return 0;
}