#include <stdio.h>
int main(int argc, char const *argv[])
{
int C, D;
printf("Enter C, D values respectively:\n");
scanf("%d,%d",&C,&D);
printf("Before swaping C=%d, D=%d",C,D);
C = C + D;	
D = C - D;	 
C = C - D;		
printf("After swaping C=%d, D=%d",C,D);
return 0;
}
