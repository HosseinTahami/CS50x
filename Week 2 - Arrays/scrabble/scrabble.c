#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calculate_score(string word);

int main(void)
{
    string a1 = get_string("Player 1: ");
    string a2 = get_string("Player 2: ");
    int s1 = calculate_score(a1);
    int s2 = calculate_score(a2);
    if (s1 > s2)
    {
        printf("Player 1 wins!\n");
    }
    else if (s2 > s1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int calculate_score(string word)
{

    const int word_length = strlen(word);
    int score = 0;

    for (int i = 0; i < word_length; i++)
    {
        word[i] = toupper(word[i]);
    }

    for (int i = 0; i < word_length; i++)
    {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'L' || word[i] == 'N' || word[i] == 'O' || word[i] == 'R' || word[i] == 'S' || word[i] == 'T' || word[i] == 'U')
        {
            score++;
        }
        else if (word[i] == 'D' || word[i] == 'G')
        {
            score += 2;
        }
        else if (word[i] == 'B' || word[i] == 'C' || word[i] == 'M' || word[i] == 'P')
        {
            score += 3;
        }
        else if (word[i] == 'F' || word[i] == 'H' || word[i] == 'V' || word[i] == 'W' || word[i] == 'Y')
        {
            score += 4;
        }
        else if (word[i] == 'K')
        {
            score += 5;
        }
        else if (word[i] == 'J' || word[i] == 'X')
        {
            score += 8;
        }
        else if (word[i] == 'Z' || word[i] == 'Q')
        {
            score += 10;
        }
    }

    return score;
}