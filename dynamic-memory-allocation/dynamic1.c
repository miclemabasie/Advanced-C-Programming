#include <stdio.h>
#include <stdlib.h>

int main()
{
    // print the user's name
    char *name;

    name = malloc(32);
    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("Hello, %s\n", name);

    return 0;
}