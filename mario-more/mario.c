#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = n; j > i + 1; j--)
        {
            // Print a space
            printf(" ");
        }

        // For each column
        for (int k = 0; k <= i; k++)
        {
            // Print a brick for left aligned pyramid
            printf("#");
        }

        // For each column
        for (int l = 0; l < 2; l++)
        {
            // Print a space in between both pyramids
            printf(" ");
        }

        // For each column
        for (int m = 0; m <= i; m++)
        {
            // Print a brick for right aligned pyramid
            printf("#");
        }

        // Move to next row
        printf("\n");
    }
}