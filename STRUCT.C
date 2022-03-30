#include<stdio.h>
#include<conio.h>
struct A
{
int x;
char y;
float z;
};
void main()
{
struct A p;
p.x=12;
p.y='M';
p.z=12.0000;
printf("%d %c %.2f",p.x,p.y,p.z);
getch();
}