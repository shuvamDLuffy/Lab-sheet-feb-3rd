

#include <stdio.h>
#include <stdlib.h>

int contains_number(char password[]);
int contains_symbol(char password[]);
int a;

int main()
{
    char password[25];

    printf("Enter the password :\n");
    gets(password);

    if (contains_number(password) && contains_symbol(password) && strlen(password) >= 6)
        printf("The password is valid.\n");
    else
        printf("The password is not valid.\n");

    return 0;
}

int contains_number(char password[])

{
    for (a = 0; a < strlen(password); a++)
    {
        if(password[a] >= '1' && password[a] <= '9')
        {
            return 1;
        }
    }

    return  0;
}

int contains_symbol(char password[])
{
    for (a = 0; a < strlen(password); a++)
    {
        password[a] = tolower(password[a]);
        if (!((password[a] >= '1' && password[a] <= '9') || (password[a] >= 'a' && password[a] <= 'z')))
        {
            return 1;
        }
    }

    return 0;
}

