#include <stdio.h>

int main(void)
{
    unsigned char char1, char2, char3, char4, char5, char6, char7, char8;

    printf("|-------------------------------------------------------------------------------------------------|\n");
    printf("|extended ASCII table - excluding control characters                                              |\n");
    printf("| Ch Dec  Hex | Ch Dec  Hex | Ch Dec  Hex | Ch Dec  Hex | Ch Dec  Hex | Ch Dec  Hex | Ch Dec  Hex |\n");
    printf("|-------------|-------------|-------------|-------------|-------------|-------------|-------------|\n");

    for (int i = 0; i < 32; i++)
    {
        char1 = i + 32;
        char2 = i + 64;
        char3 = i + 96;
        char4 = i + 128; // extended ASCII characters
        char5 = i + 160;
        char6 = i + 192;
        char7 = i + 224;

        // Print characters and their decimal and hexadecimal representations
        printf("|  %c %3d %#x ", char1, char1, char1);
        printf("|  %c %3d %#x ", char2, char2, char2);

        // Special case for DEL character
        if (char3 == 127)
        {
            printf("|%s %3d %#x |", "DEL", char3, char3);
        }
        else
        {
            printf("|  %c %3d %#x |", char3, char3, char3);
        }

        printf("  %c %3d %#x |  %c %3d %#x |  %c %3d %#x |  %c %3d %#x |\n",
               char4, char4, char4,
               char5, char5, char5,
               char6, char6, char6,
               char7, char7, char7);
    }

    return 0;
}