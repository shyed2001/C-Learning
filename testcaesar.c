#include "cs50.h"
#include "cs50.c"
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>



int valid_key(string s);

int main (int argc, string argv[])


{

   if (argc!=2 || valid_key(argv[1]))   /// Check validity of the key.
    {
        printf("Usage: ./caesar key. Please enter a integer key in command line argument.\n");  /// Error message
        return 1; /// Error return
    }
    int key;
    int atoi();

    key = atoi(argv[1]);  /// Converting command line string output to integer.

///    string plaintext = get_string("Plaintext :  ");
    plaintext = get_string("Plaintext :  ");

    printf("Ciphertext: ");

    for (int i =0, len = strlen(plaintext); i < len; i++)

    {
        char j = plaintext[i];

        if (isalpha(j))
        {
            char s = 'A';
            if ( islower(j) )
            {
                s = 'a';

                printf(" %c", (j - s + key) % 26 + s );
            }
        }

        else
            printf(" %c", j);

    }

    printf(" \n" );
    printf(" %d\n", key );

}


int valid_key(string s)

{
    int len, i;

    string plaintext;

      for ( i =0, len = strlen(plaintext); i < len; i++)
     {
        if(!isdigit(s[i]))
        {
        return false; /// Error.
        }

     }

     return true; /// Ok

}

