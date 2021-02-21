#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int lowerabc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    //get key

    int key = 0;
    string plaintext;
    if(argc == 2)
    {
       key = atoi(argv[1]);
       printf("Success\n");
       plaintext = get_string("Plaintext: ");
       printf("Ciphertext: ");
    } else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (plaintext[i] >= 97 && plaintext[i] <= 122)
        {
            plaintext[i] = (plaintext[i] - 97 + key) % 26 + 97;
            printf("%c", plaintext[i]);
        } else if (plaintext[i] >= 65 && plaintext[i] <= 90)
        {
            plaintext[i] = (plaintext[i] - 65 + key) % 26 + 65;
            printf("%c", plaintext[i]);
        } else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");
}
