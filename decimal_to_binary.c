
#include<stdio.h>

int dec_to_bin(int n)
{
	int rem =0  , bin =0 , i = 1;
	while(n != 0)
	{
		rem = n %2;
		bin += rem * i  ;
		n = n/2 ;
		i = i * 10 ;
	}

	return bin ;
}

int main()
{
	int dec ;
	scanf("%d",&dec);
	printf("%d",dec_to_bin(dec));
}


