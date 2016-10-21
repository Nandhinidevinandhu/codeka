#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
clrscr();
printf("\n Enter the string:");
scanf("%s",&a);
strrev(a);
printf("\n Reversed string:%s",a);
getch();
}
