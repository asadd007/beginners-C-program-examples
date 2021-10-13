#include<stdio.h>
int main()
{
	int n;//take n=8;
	printf("Enter the number to check it is power of 2 or not :\n");
	scanf("%d",&n);
	if((n&(n-1))==0)//8=1000,7=0111 when we take and of (8 & 7)=0;
	printf("%d is power of 2",n);
	else
	printf("%d is not power of 2",n);
}
