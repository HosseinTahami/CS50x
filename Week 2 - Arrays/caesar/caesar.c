#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string key = argv[1];
    int L_KEY = strlen(key);
    for (int i = 0; i < L_KEY; i++)
    {
        if (isdigit(key[i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int my_key = atoi(key);
    while (my_key >= 26)
    {
        my_key -= 26;
    }

    string text = get_string("plaintext: ");
    const int N_text = strlen(text);
    for (int i = 0; i < N_text; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                text[i] = 'A' + (text[i] - 'A' + my_key) % 26;
            }
            else
            {
                text[i] = 'a' + (text[i] - 'a' + my_key) % 26;
            }
        }
    }
    printf("ciphertext: %s\n", text);
}
