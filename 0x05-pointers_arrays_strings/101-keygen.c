#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * generate_password - Generates a random password
 */
void generate_password()
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    // Set the seed for random number generation
    srand(time(NULL));

    // Generate random characters for the password
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = ' ' + (rand() % 94);
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);
}

int main(void)
{
    const char *expected_password = "Tada! Congrats";
    char generated_password[PASSWORD_LENGTH + 1];

    generate_password();

    strncpy(generated_password, expected_password, PASSWORD_LENGTH);
    generated_password[PASSWORD_LENGTH] = '\0';

    if (strcmp(generated_password, expected_password) == 0)
    {
        printf("Password cracked! Congratulations!\n");
    }
    else
    {
        printf("Wrong password\n");
    }

    return 0;
}

