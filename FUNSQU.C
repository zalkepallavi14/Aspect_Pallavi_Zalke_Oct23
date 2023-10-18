#include<stdio.h>
void square(){
int s, res;
clrscr();
printf("Enter value of side:");
scanf("%d",&s);
res = s*s;
printf("Area of Square: %d",res);
}
void main(){
square();
getch();
}