#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // If number of arguments does not equal 2, then generate reminder
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // If key does not equal 26 characters, then generate reminder
    int key_length = strlen(argv[1]);
    if (key_length != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // If key does not use letters, then generate reminder
    for (int i = 0; i < 26; i++)
    {
        // Turn key into a string
        string key = argv[1];
        if (isalpha(key[i]))
        {
            // Do nothing
        }
        else
        {
            printf("Key must contain letters only.\n");
            return 1;
        }
    }

    // If key repeats letters, then generate reminder
    for (int i = 0; i < 26; i++)
    {
        int h = 1;
        do
        {
            for (h += i; h < 26; h++)
            {
                // Turn key into a string
                string key = argv[1];
                // Use of variables i and h to represent letters within key for comparing
                if (tolower(key[i]) == tolower(key[h]))
                {
                    printf("Key must not repeat letters.\n");
                    printf("Repeated key: %c\n", key[i]);
                    return 1;
                }
            }
        }
        while (h < 25);
    }

    // Get plaintext input
    string text = get_string("plaintext: ");

    // Turn key into a string
    string key = argv[1];

    // Cipher key map
    char cipher_key[] = {key[0], key[1], key[2], key[3], key[4], key[5], key[6], key[7], key[8], key[9], key[10], key[11], key[12], key[13], key[14], key[15], key[16], key[17], key[18], key[19], key[20], key[21], key[22], key[23], key[24], key[25]};

    // Print ciphertext output
    printf("ciphertext: ");

    // Function for converting plaintext
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isupper(text[i]))
        {
            printf("%c", toupper(cipher_key[text[i] - 'A']));
        }
        else if (islower(text[i]))
        {
            printf("%c", tolower(cipher_key[text[i] - 'a']));
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}