#include <stdio.h>

int hexToDecimal(char hex[]) 
{
    int decimal = 0;
    for (int i = 0; hex[i] != '\0'; i++) 
    {
        decimal <<= 4; 
        if (hex[i] >= '0' && hex[i] <= '9') 
        {
            decimal |= (hex[i] - '0'); 
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') 
        {
            decimal |= (hex[i] - 'A' + 10); 
        }
    }
    return decimal;
}

void decimalToOctal(int decimal) 
{
    int octal[20], i = 0;
    while (decimal != 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    char hex[20];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    int decimal = hexToDecimal(hex);
    decimalToOctal(decimal);
    return 0;
}
