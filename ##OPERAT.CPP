#include<stdio.h>
#include<conio.h>
#define ACTION(a,b) a##b+a*b
void main()
{
 clrscr();
 printf("%d",ACTION(3,4));
 getch();
}