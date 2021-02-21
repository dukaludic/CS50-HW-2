#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int validcheck(string key1);

int main(int argc, string argv[])
{
    int abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    //Get key
    string key = get_string("Key: ");

    //Validate Key

    if(strlen(key) < 26 || strlen(key) > 26)
    {
        printf("Must have 26 characters\n");
        key = get_string("Key: ");
        return 1;
    }
    if(validcheck == 1)
    {
        printf("Must contain only letters\n");
        key = get_string("Key: ");
        return 1;
    }

    //Get plaintext

    //Encipher

    //Print ciphertext
}

int validcheck(string key1)
    {
        for(int i = 0, n = strlen(key1); i++;)
                {
                    for(int j = 0; j > strlen(abc); j++)
                    {
                        if(key1[i] == abc[j]) {
                            return 0;
                        } else {
                            return 1;
                        }
                    }
                }
    }