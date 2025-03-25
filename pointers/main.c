#include <stdio.h>

void addition(int *target, int a, int b)
{
    // recieves the address of the target variable

    *target = a + b; // derefrence the variable
}

int main()
{
    int x, y, answer;
    x = 5;
    y = 15;

    // pass in the address of answer
    addition(&answer, x, y);

    printf("Answer: %d\n", answer);
    return 0;
}