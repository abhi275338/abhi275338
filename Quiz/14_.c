#include <stdio.h>

unsigned char swapBits(unsigned char num) {
    // Mask for the four least significant bits
    unsigned char mask1 = 0x0F; // 0000 1111 in binary

    // Mask for the four most significant bits
    unsigned char mask2 = 0xF0; // 1111 0000 in binary

    // Shift the four least significant bits to the left and the four most significant bits to the right
    return ((num & mask1) << 4) | ((num & mask2) >> 4);
}

int main() {
    unsigned int num = 0xB9; // 1011 1001 in binary
    printf("Original number: %X\n", num);
    printf("Number after swapping bits: %X\n", swapBits(num));
    return 0;
}