#include <stdint.h>
#include <stdio.h>

struct Chip8 {
    uint8_t     registers[16];  // The 16 CHIP-8 registers.
    uint8_t     memory[4096];   // 4k of memory
	uint16_t    index;          // the 16 bit index pointer, to store mem addrs for ops.
	uint16_t    pc;             // program counter, keeps track of which instruction is being run.
	uint16_t    stack[16];      // the call stack, for saving PC values for RETs.
	uint8_t     sp;             // the stack pointer, indicates which position in the stack is most recent.
	uint8_t     delayTimer;     // timer for CHIP-8 operations, 0 stays 0, values > 0 decr at 60hz
	uint8_t     soundTimer;     // sound timer for chip-8, 0 is off, above decr at 60hz, emits tone when != 0
	uint8_t     keypad[16];     // the input map.
	uint32_t    video[64 * 32]; // the video buffer, the display memory for our computer.
	uint16_t    opcode;         //  
};

const unsigned int START_ADDRESS = 0x200;

void loadRom(Chip8 chip8, char const* filename) {

}

int main() {
    return 0;
}
