#include <stdio.h>

void hexToDecimal(char hex[], long* decimal) 
{
    *decimal = 0;
    for (int i = 0; hex[i] != '\0'; i++) 
    {
        *decimal *= 16;
        if (hex[i] >= '0' && hex[i] <= '9') 
        {
            *decimal += hex[i] - '0';
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') 
        {
            *decimal += hex[i] - 'A' + 10;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') 
        {
            *decimal += hex[i] - 'a' + 10;
        }
    }
}

void decimalToOctal(long decimal, char octal[]) 
{
    int index = 0;
    while (decimal != 0) 
    {
        octal[index++] = (decimal % 8) + '0';
        decimal /= 8;
    }
    octal[index] = '\0';

    // Reverse the octal string
    for (int i = 0; i < index / 2; i++) 
    {
        char temp = octal[i];
        octal[i] = octal[index - i - 1];
        octal[index - i - 1] = temp;
    }
}

int main() 
{
    char hex[20];
    long decimal;
    char octal[20];

    // Input hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf_s("%s", &hex);

    // Convert hexadecimal to decimal
    hexToDecimal(hex, &decimal);

    // Convert decimal to octal
    decimalToOctal(decimal, octal);

    // Output the result
    printf("Octal equivalent: %s\n", octal);
    return 0;
}