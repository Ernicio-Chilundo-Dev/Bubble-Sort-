#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 20
#define MAX_LENGTH 20


// Function to swap two strings

void swap(char words[MAX_WORDS][MAX_LENGTH], int i, int j)
{
    char temp[MAX_LENGTH];
    strcpy(temp, words[i]);
    strcpy(words[i], words[j]);
    strcpy(words[j], temp);
}

// Function to apply Bubble sort

void bubble_sort(char words[MAX_WORDS][MAX_LENGTH], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (strcmp(words[j], words[j + 1]) > 0)
            {
                swap(words, j, j + 1);

                // Show sorting steps
                printf("-> ");`
                for (int k = 0; k < n; k++)
                {
                    printf("%s", words[k]);
                }
                printf("\n");
            }
        }
    }
}

// Functtion to check iif ti's sorted

bool is_sorted(char words[MAX_WORDS][MAX_LENGTH], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (strcmp(words[i], words[i = 1]) > 0)
        {
            return false;
        }
    }

    return true;
}