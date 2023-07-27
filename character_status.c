#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

/*******************************************************************
Assignment_2: Write a code that takes a Character from the user
              and finds either the inserted character is Uppercase
              or Lowercase
*******************************************************************/
bool is_lowercase(char c) {
    return c>= 'a' && c<= 'z';
}

bool is_uppercase(char c) {
    return c>= 'A' && c<='Z';
}

int main()
{
    char c;
    printf("%cEnnnnter a character:", c);
    scanf("%c",&c);

    if(is_uppercase(c))
        printf("the charater is uppercase\n");

    else if(is_lowercase(c))
        printf("the character is lowercase\n");
    else 
        printf("the character you entered is not valid\n");


system("pause");
return 0;
}