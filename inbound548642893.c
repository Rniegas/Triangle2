#include<stdio.h>

void main()
{

    int a, b, c;
    clrscr();

for(a = 1; a <= 24; a++)
     {
     for(b = 24-1; b >= a; b--)
          {
           printf(" ");
           }
     for(c = 1; c <= a; c++)
           printf("*");
     printf("\n");
     }

getch();
}