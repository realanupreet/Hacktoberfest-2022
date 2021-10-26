//program for making a 5 tier star pyramid

#include <stdio.h>
int main()
{
    int counter1, counter2;
    for (counter1 = 0; counter1 < 6; counter1++) //counter1 for different line
    {
        for (counter2 = 0; counter2 < counter1; counter2++) //counter2 for the amount of stars as the value of counter1
        {
            printf("*");
        }
        printf("\n");
    }
}