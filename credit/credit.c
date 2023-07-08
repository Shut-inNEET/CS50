#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for credit card number
    long credit_number = get_long("Credit card number: ");

    // If card number falls within parameters
    if (340000000000000 <= credit_number && credit_number < 350000000000000)
    {
        // Digits multiplied by 2
        long credit_15 = (credit_number % 100 / 10 * 2);
        long a = (credit_15 % 100 / 10 + credit_15 % 10);

        long credit_13 = (credit_number % 10000 / 1000 * 2);
        long b = (credit_13 % 100 / 10 + credit_13 % 10);

        long credit_11 = (credit_number % 1000000 / 100000 * 2);
        long c = (credit_11 % 100 / 10 + credit_11 % 10);

        long credit_9 = (credit_number % 100000000 / 10000000 * 2);
        long d = (credit_9 % 100 / 10 + credit_9 % 10);

        long credit_7 = (credit_number % 10000000000 / 1000000000 * 2);
        long e = (credit_7 % 100 / 10 + credit_7 % 10);

        long credit_5 = (credit_number % 1000000000000 / 100000000000 * 2);
        long f = (credit_5 % 100 / 10 + credit_5 % 10);

        long credit_3 = (credit_number % 100000000000000 / 10000000000000 * 2);
        long g = (credit_3 % 100 / 10 + credit_3 % 10);

        long credit_1 = (credit_number % 10000000000000000 / 1000000000000000 * 2);
        long h = (credit_1 % 100 / 10 + credit_1 % 10);

        // Digits not multiplied by 2
        long i = (credit_number % 10);
        long j = (credit_number % 1000 / 100);
        long k = (credit_number % 100000 / 10000);
        long l = (credit_number % 10000000 / 1000000);
        long m = (credit_number % 1000000000 / 100000000);
        long n = (credit_number % 100000000000 / 10000000000);
        long o = (credit_number % 10000000000000 / 1000000000000);
        long p = (credit_number % 1000000000000000 / 100000000000000);

        // Add multiplied digits and non-multiplied digits
        long q = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p);

        // If sum ends with 0
        if (q % 10 == 0)
        {
            printf("AMEX\n");
        }

        // If sum does not end with 0
        else
        {
            printf("INVALID\n");
        }
    }

    // If card number falls within parameters
    else if (370000000000000 <= credit_number && credit_number < 380000000000000)
    {
        // Digits multiplied by 2
        long credit_15 = (credit_number % 100 / 10 * 2);
        long a = (credit_15 % 100 / 10 + credit_15 % 10);

        long credit_13 = (credit_number % 10000 / 1000 * 2);
        long b = (credit_13 % 100 / 10 + credit_13 % 10);

        long credit_11 = (credit_number % 1000000 / 100000 * 2);
        long c = (credit_11 % 100 / 10 + credit_11 % 10);

        long credit_9 = (credit_number % 100000000 / 10000000 * 2);
        long d = (credit_9 % 100 / 10 + credit_9 % 10);

        long credit_7 = (credit_number % 10000000000 / 1000000000 * 2);
        long e = (credit_7 % 100 / 10 + credit_7 % 10);

        long credit_5 = (credit_number % 1000000000000 / 100000000000 * 2);
        long f = (credit_5 % 100 / 10 + credit_5 % 10);

        long credit_3 = (credit_number % 100000000000000 / 10000000000000 * 2);
        long g = (credit_3 % 100 / 10 + credit_3 % 10);

        long credit_1 = (credit_number % 10000000000000000 / 1000000000000000 * 2);
        long h = (credit_1 % 100 / 10 + credit_1 % 10);

        // Digits not multiplied by 2
        long i = (credit_number % 10);
        long j = (credit_number % 1000 / 100);
        long k = (credit_number % 100000 / 10000);
        long l = (credit_number % 10000000 / 1000000);
        long m = (credit_number % 1000000000 / 100000000);
        long n = (credit_number % 100000000000 / 10000000000);
        long o = (credit_number % 10000000000000 / 1000000000000);
        long p = (credit_number % 1000000000000000 / 100000000000000);

        // Add multiplied digits and non-multiplied digits
        long q = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p);

        // If sum ends with 0
        if (q % 10 == 0)
        {
            printf("AMEX\n");
        }

        // If sum does not end with 0
        else
        {
            printf("INVALID\n");
        }
    }

    // If card number falls within parameters
    else if (5100000000000000 <= credit_number && credit_number < 5600000000000000)
    {
        // Digits multiplied by 2
        long credit_15 = (credit_number % 100 / 10 * 2);
        long a = (credit_15 % 100 / 10 + credit_15 % 10);

        long credit_13 = (credit_number % 10000 / 1000 * 2);
        long b = (credit_13 % 100 / 10 + credit_13 % 10);

        long credit_11 = (credit_number % 1000000 / 100000 * 2);
        long c = (credit_11 % 100 / 10 + credit_11 % 10);

        long credit_9 = (credit_number % 100000000 / 10000000 * 2);
        long d = (credit_9 % 100 / 10 + credit_9 % 10);

        long credit_7 = (credit_number % 10000000000 / 1000000000 * 2);
        long e = (credit_7 % 100 / 10 + credit_7 % 10);

        long credit_5 = (credit_number % 1000000000000 / 100000000000 * 2);
        long f = (credit_5 % 100 / 10 + credit_5 % 10);

        long credit_3 = (credit_number % 100000000000000 / 10000000000000 * 2);
        long g = (credit_3 % 100 / 10 + credit_3 % 10);

        long credit_1 = (credit_number % 10000000000000000 / 1000000000000000 * 2);
        long h = (credit_1 % 100 / 10 + credit_1 % 10);

        // Digits not multiplied by 2
        long i = (credit_number % 10);
        long j = (credit_number % 1000 / 100);
        long k = (credit_number % 100000 / 10000);
        long l = (credit_number % 10000000 / 1000000);
        long m = (credit_number % 1000000000 / 100000000);
        long n = (credit_number % 100000000000 / 10000000000);
        long o = (credit_number % 10000000000000 / 1000000000000);
        long p = (credit_number % 1000000000000000 / 100000000000000);

        // Add multiplied digits and non-multiplied digits
        long q = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p);

        // If sum ends with 0
        if (q % 10 == 0)
        {
            printf("MASTERCARD\n");
        }

        // If sum does not end with 0
        else
        {
            printf("INVALID\n");
        }
    }

    // If card number falls within parameters
    else if (4000000000000 <= credit_number && credit_number < 5000000000000)
    {
        // Digits multiplied by 2
        long credit_12 = (credit_number % 100 / 10 * 2);
        long a = (credit_12 % 100 / 10 + credit_12 % 10);

        long credit_10 = (credit_number % 10000 / 1000 * 2);
        long b = (credit_10 % 100 / 10 + credit_10 % 10);

        long credit_8 = (credit_number % 1000000 / 100000 * 2);
        long c = (credit_8 % 100 / 10 + credit_8 % 10);

        long credit_6 = (credit_number % 100000000 / 10000000 * 2);
        long d = (credit_6 % 100 / 10 + credit_6 % 10);

        long credit_4 = (credit_number % 10000000000 / 1000000000 * 2);
        long e = (credit_4 % 100 / 10 + credit_4 % 10);

        long credit_2 = (credit_number % 1000000000000 / 100000000000 * 2);
        long f = (credit_2 % 100 / 10 + credit_2 % 10);

        // Digits not multiplied by 2
        long g = (credit_number % 10);
        long h = (credit_number % 1000 / 100);
        long i = (credit_number % 100000 / 10000);
        long j = (credit_number % 10000000 / 1000000);
        long k = (credit_number % 1000000000 / 100000000);
        long l = (credit_number % 100000000000 / 10000000000);
        long m = (credit_number % 10000000000000 / 1000000000000);

        // Add multiplied digits and non-multiplied digits
        long n = (a + b + c + d + e + f + g + h + i + j + k + l + m);

        // If sum ends with 0
        if (n % 10 == 0)
        {
            printf("VISA\n");
        }

        // If sum does not end with 0
        else
        {
            printf("INVALID\n");
        }
    }

    // If card number falls within parameters
    else if (4000000000000000 <= credit_number && credit_number < 5000000000000000)
    {
        // Digits multiplied by 2
        long credit_15 = (credit_number % 100 / 10 * 2);
        long a = (credit_15 % 100 / 10 + credit_15 % 10);

        long credit_13 = (credit_number % 10000 / 1000 * 2);
        long b = (credit_13 % 100 / 10 + credit_13 % 10);

        long credit_11 = (credit_number % 1000000 / 100000 * 2);
        long c = (credit_11 % 100 / 10 + credit_11 % 10);

        long credit_9 = (credit_number % 100000000 / 10000000 * 2);
        long d = (credit_9 % 100 / 10 + credit_9 % 10);

        long credit_7 = (credit_number % 10000000000 / 1000000000 * 2);
        long e = (credit_7 % 100 / 10 + credit_7 % 10);

        long credit_5 = (credit_number % 1000000000000 / 100000000000 * 2);
        long f = (credit_5 % 100 / 10 + credit_5 % 10);

        long credit_3 = (credit_number % 100000000000000 / 10000000000000 * 2);
        long g = (credit_3 % 100 / 10 + credit_3 % 10);

        long credit_1 = (credit_number % 10000000000000000 / 1000000000000000 * 2);
        long h = (credit_1 % 100 / 10 + credit_1 % 10);

        // Digits not multiplied by 2
        long i = (credit_number % 10);
        long j = (credit_number % 1000 / 100);
        long k = (credit_number % 100000 / 10000);
        long l = (credit_number % 10000000 / 1000000);
        long m = (credit_number % 1000000000 / 100000000);
        long n = (credit_number % 100000000000 / 10000000000);
        long o = (credit_number % 10000000000000 / 1000000000000);
        long p = (credit_number % 1000000000000000 / 100000000000000);

        // Add multiplied digits and non-multiplied digits
        long q = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p);

        // If sum ends with 0
        if (q % 10 == 0)
        {
            printf("VISA\n");
        }

        // If sum does not end with 0
        else
        {
            printf("INVALID\n");
        }
    }

    // If card number does not fall within parameters
    else
    {
        printf("INVALID\n");
    }
}