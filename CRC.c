// CRC ( Cyclic Redundancy Check) is a technique used to detect errors in digital data. It is a type of hash function that produces a fixed-size check value from a block of data. The primary purpose of CRC is to ensure the integrity of data during transmission or storage. By detecting changes or errors, CRC helps in identifying corrupted data.


// Implement the calculation of CRC for the data word 110010101011 using the polynomial 1101 using a C Program.
// CRC Calculation Steps
// 1. Append Zeros: Append the length of the polynomial minus one zeros to the end of the data word.
// 2. Division Using XOR: Perform the division of the data word by the polynomial using XOR operations instead of subtraction.
// 3. Get the Remainder: The remainder after the division is the CRC code.

// Example

// Given:
// - Data word: `110010101011`
// - Polynomial: `1101`

// 1. Append three zeros (since the polynomial length is 4, and 4-1 = 3):
//    - Data word becomes: `110010101011000`

// 2. Perform binary division using XOR and keep the remainder.

// C Code Implementation

#include <stdio.h>
#include <string.h>

void xorDivision(char *dividend, char *divisor, int dividendLength, int divisorLength) {
    for (int i = 0; i <= dividendLength - divisorLength; i++) {
        if (dividend[i] == '1') {
            for (int j = 0; j < divisorLength; j++) {
                dividend[i + j] = (dividend[i + j] == divisor[j]) ? '0' : '1';
            }
        }
    }
}

int main() {
    char data[] = "110010101011";
    char polynomial[] = "1101";
    int dataLength = strlen(data);
    int polyLength = strlen(polynomial);
    
    // Append zeros to the data word
    char dividend[dataLength + polyLength];
    strcpy(dividend, data);
    for (int i = 0; i < polyLength - 1; i++) {
        dividend[dataLength + i] = '0';
    }
    dividend[dataLength + polyLength - 1] = '\0';

    // Perform the division
    xorDivision(dividend, polynomial, dataLength + polyLength - 1, polyLength);

    // The remainder is the CRC code
    printf("CRC: ");
    for (int i = dataLength; i < dataLength + polyLength - 1; i++) {
        printf("%c", dividend[i]);
    }
    printf("\n");
    return 0;
}
Output

CRC: 100
