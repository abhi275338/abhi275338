#include <stdio.h>

unsigned short swapBits(unsigned short num) {
    // Mask for the eight least significant bits
    unsigned short mask1 = 0x00FF; // 0000 0000 1111 1111 in binary

    // Mask for the eight most significant bits
    unsigned short mask2 = 0xFF00; // 1111 1111 0000 0000 in binary

    // Shift the eight least significant bits to the left and the eight most significant bits to the right
    return ((num & mask1) << 8) | ((num & mask2) >> 8);
}

int main() {
    unsigned short num = 0x92B9; // 1001 0010 1011 1001 in binary
    printf("Original number: %X\n", num);
    printf("Number after swapping bits: %X\n", swapBits(num));
    return 0;
}