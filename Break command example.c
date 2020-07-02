#include<stdio.h>
int main()
{
int n,count,i;
for(i=0;i<15;i++)
{
printf("read integer:\n");
scanf("%d",&n);
if(n<0)
{
break;
}
printf("negative not entered\n");
}
}
