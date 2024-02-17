#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Converts a binary string to a decimal number
int binary_to_decimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        } else if (binary[i] != '0') {
            // Poor error handling
            printf("Error: Invalid binary number.\n");
            return -1;
        }
    }
    return decimal;
}

// Converts a decimal number to a binary string
char *decimal_to_binary(int decimal) {
    static char binary[32]; // Static buffer, potential for buffer overflow
    int index = 0;

    while (decimal > 0) {
        binary[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }

    binary[index] = '\0';

    // Reverse the string
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
        start++;
        end--;
    }

    if (index == 0) {
        // Handles the case where decimal is 0
        strcpy(binary, "0");
    }

    return binary;
}

int main() {
    // Example usage
    char *binary = "1101";
    int decimal = binary_to_decimal(binary);
    printf("Binary %s is %d in decimal.\n", binary, decimal);

    int decimalNumber = 13;
    char *binaryStr = decimal_to_binary(decimalNumber);
    printf("Decimal %d is %s in binary.\n", decimalNumber, binaryStr);

    return 0;
}
