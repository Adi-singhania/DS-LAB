// WAP in C to read two numbers and compare them using user defined function with call-by address mechanism.
#include<stdio.h>
 void compare(int *a, int *b)
 {
     if (*a > *b)
        printf("\nInteger %d is greater\n", *a);
     else if(*b > *a)
        printf("\nInteger %d is greater\n", *b);
     else
        printf("\nBoth are equal.\n");

 }
 int main()
 {
     int x,y;
     printf("Enter First Integer:");
     scanf("%d",&x);
     printf("Enter Second Integer:");
     scanf ("%d", &y);
     compare(&x,&y);
     return 0;
 }
