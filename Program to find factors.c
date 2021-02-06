// C program to find factors of a number using loops

#include <stdio.h>

int main()
{
int num;
printf(“\nEnter the number : “);
scanf(“%d”,&num);
int i,count = 0;
printf(“\nThe factors of %d are : “,num);
for(i = 1;i <= num; i++)
{
if(num % i == 0)
{
++count;
printf(“%d “,i);
}
}
printf(“\n\nTotal factors of %d : %d\n”,num,count);
}
