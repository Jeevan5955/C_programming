#include<stdio.h>
int main()
{
int x=5;
int *y;
y=&x;
printf("%d\n",x);
printf("%d\n",&x);
printf("%d\n",y);
printf("%d\n",*y);
printf("%d\n",&y);
}
