#include <vector>
#include <print>

#include "renderer.h"
#include "chip8.h"

int main(int argc, char *argv[])
{

    unsigned char bit[200];

    bit[0] = 0b11111000;
    
    // TODO: Feed argv to loadRom for release
    loadRom("IBM_Logo.ch8");
    std::println("Rom Loaded into memory!");
    chip8();
    render();
    
	return 0;
    
}