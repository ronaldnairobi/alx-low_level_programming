#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * generate_password - Generates a random password
 */
void generate_password()
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = 'a' + (rand() % 26);
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);
}

int main(void)
{
    generate_password();

    return 0;
}

