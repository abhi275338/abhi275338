#include <stdio.h>

unsigned int reverseBits(unsigned int num) {
    unsigned int numOfBits = sizeof(num) * 8;
    unsigned int reverseNum = 0;
    int i;
   
    for (i = 0; i < numOfBits; i++) {
        if((num & (1 << i)))
           reverseNum |= 1 << ((numOfBits - 1) - i);  
    }
   
    return reverseNum;
}

int main() {
    unsigned int x = 1; // Binary: 1111 0011
    printf("%u", reverseBits(x));
    return 0;
}