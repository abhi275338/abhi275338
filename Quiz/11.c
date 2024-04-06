#include <stdio.h>

unsigned int swap_closest_bits(unsigned int num) {
    unsigned int rightmost_set_bit = num & -num;  // Find the position of the rightmost set bit
    unsigned int closest_bits = rightmost_set_bit << 1;  // Find the positions of the two closest bits
    
    // Extract the two closest bits
    unsigned int closest_bits_mask = closest_bits | (closest_bits >> 2);
    
    // Swap the two closest bits
    unsigned int result = num ^ closest_bits_mask;
    
    return result;
}

int main() {
    unsigned int num = 500;  // Binary representation of the number 10111001
    unsigned int result = swap_closest_bits(num);
    printf("Result after swapping closest bits: %u\n", result);  // Output in hexadecimal format
    
    return 0;
}