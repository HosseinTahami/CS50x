#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    float char_number = 0;
    float word_number = 1;
    float sentence_number = 0;
    string text = get_string("Text: ");
    const int N = strlen(text);
    for (int i = 0; i < N; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence_number++;
        }
        else if (isblank(text[i]))
        {
            word_number++;
        }
        else if (isalpha(text[i]))
        {
            char_number++;
        }
    }

    float L = (char_number / word_number) * 100;
    float S = (sentence_number / word_number) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int final = round(index);
    printf("%i\n", final);
    if (final < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (final > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", final);
    }
}
