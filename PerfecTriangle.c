#include<stdio.h>
int main()
{
	int n1,n2,n3,sn12,sn23,sn31;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	printf("Enter third number:");
	scanf("%d",&n3);
	printf("First number is %d\n",n1);
	printf("Second number is %d\n",n2);
	printf("Third number is %d\n",n3);
	sn12=n1+n2;
	sn23=n2+n3;
	sn31=n3+n1;
	printf("Sum of first and second number is:%d\n",sn12);
	printf("Sum of second and third number is:%d\n",sn23);
	printf("Sum of third and first number is %d\n",sn31);
	if(sn12>n3)
		printf("First, second and thrid numbers are a perfect triangle\n");
	else if(sn23>n1)
		printf("First, second and third numbers are a perfect triangle\n");
	else if(sn31>n2)
		printf("First, second and third numbers are a perfect triangle\n");
	else
		printf("First, second and third numbers are not a perfect triangle\n");
}