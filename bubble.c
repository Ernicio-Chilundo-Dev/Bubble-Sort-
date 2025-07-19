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