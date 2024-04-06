// #include <stdio.h>

// unsigned int circularRightRotate(unsigned int num, int shift) {
//     int numBits = sizeof(num) * 8; // Calculate number of bits in unsigned int
//     shift %= numBits; // Ensure shift value is within range

//     if (shift == 0) return num; // If shift is zero, return the number as is

//     return (num >> shift) | (num << (numBits - shift));
// }

// int main() {
//     unsigned int num;
//     int shift;

//     printf("Enter a number: ");
//     scanf("%u", &num);

//     printf("Enter the number of bits to rotate: ");
//     scanf("%d", &shift);

//     unsigned int result = circularRightRotate(num, shift);
//     printf("Result after circular right rotation: %u\n", result);

//     return 0;
// }
#include <stdio.h>

unsigned int swapPairs(unsigned int num) {

    unsigned int evenMask = 0xAAAAAAAA; // 1010 1010 1010 1010
    // Mask to extract odd bits
    unsigned int oddMask = 0x55555555;  // 0101 0101 0101 0101

    // Extract even and odd bits
    unsigned int evenBits = num & evenMask;
    unsigned int oddBits = num & oddMask;

    // Right shift even bits and left shift odd bits to swap them
    evenBits >>= 1;
    oddBits <<= 1;

    // Combine even and odd bits to get the result
    return evenBits | oddBits;
}

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int result = swapPairs(num);
    printf("Result after swapping each pair of bits: %u\n", result);

    return 0;
}