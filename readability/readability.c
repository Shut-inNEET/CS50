#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Get input
    string text = get_string("Text: ");

    // Store values from prototype functions
    int letter_count = count_letters(text);
    int word_count = count_words(text);
    int sentence_count = count_sentences(text);

    // Calculate average letters per 100 words
    float l = letter_count;
    float w = word_count;
    float L = l / w * 100;

    // Calculate average sentences per 100 words
    float s = sentence_count;
    float S = s / w * 100;

    // Calculate reading level
    int(index) = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}

// Function for getting letter count
int count_letters(string text)
{
    int letter_count = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count += 1;
        }
        else
        {
            letter_count += 0;
        }
    }
    return letter_count;
}

// Function for getting word count
int count_words(string text)
{
    int word_count = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if ((text[i] == ' '  && text[i + 1] != ' ') || text[i + 1] == '\0')
        {
            word_count += 1;
        }
        else
        {
            word_count += 0;
        }
    }
    return word_count;
}

// Function for getting sentence count
int count_sentences(string text)
{
    int sentence_count = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence_count += 1;
        }
        else
        {
            sentence_count += 0;
        }
    }
    return sentence_count;
}

