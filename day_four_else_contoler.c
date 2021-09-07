#include<stdio.h>
#include<conio.h>
int main()
{
int a; ///assing a interger
printf("enter a number :- ");
scanf("%d",&a);/// function ' scanf' is used for entring a value. You change  %d to %f, %c accoring to your needs, &a helps to store a inteder
if (a ==  1)/// this 'if' fuction will take  the value  and checks wheather it is apropriate number or not , if not  it will go to else fuction
{
    printf("Hi");
}
else 
{
   printf("HI, what are you doing?");
}


return 0;
}