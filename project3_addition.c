#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    int b, c, d, f,e,h,i,j;
    printf("=====================================================\n");
    printf("\tWelcome to T.P links Calculator project :) \n");
    printf("=====================================================\n");
    printf("Entre a oprater for example '+' '-' '*' '/' :: ");
    scanf("%c", &a);
    if (a == '+')
    {
        printf("Entre a value for 1st value ::");
        scanf("%d", &b);
        printf("Entre a value for 2st value ::");
        scanf("%d", &c);
        printf("Your answer = %d", b + c);
    }

    else if (a == '-')
    {
        printf("Entre a value for 1st value ::");
        scanf("%d", &d);
        printf("Entre a value for 2st value ::");
        scanf("%d", &f);
        printf("Your answer = %d", d - f);
    }
    else if (a == '-')
    {
        printf("Entre a value for 1st value ::");
        scanf("%d", &d);
        printf("Entre a value for 2st value ::");
        scanf("%d", &f);
        printf("Your answer = %d", d - f);
    }
    else if (a == '*')
    {
        printf("Entre a value for 1st value ::");
        scanf("%d", &e);
        printf("Entre a value for 2st value ::");
        scanf("%d", &h);
        printf("Your answer = %d", e * h);
    }
    else if (a == '/')
    {
        printf("Entre a value for 1st value ::");
        scanf("%d", &i);
        printf("Entre a value for 2st value ::");
        scanf("%d", &j);
        printf("Your answer = %d", i / j);
    }

    else
    {
        printf("Error 404");
    }

    return 0;
}