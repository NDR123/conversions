
#include<stdio.h>
#include<math.h>
int bin_to_dec(int n );
int main()
{
	int n ;
	scanf("%d",&n);
	printf("%d",bin_to_dec(n));
}
int bin_to_dec(int n)
{
	int dec = 0 , base  = 1 , lst  ;
	while(n >0)
	{
		lst = n % 10 ;
		dec += (lst * base);
	   base = base *2 ;
		n= n/10 ;
	}
	return dec ;
}

/*
int bin_to_dec(int n)
{
	int dec = 0 , i = 0, lst  ;
	while(n >0)
	{
		lst = n % 10 ;
		dec += (lst * pow(2,i));
	   i++;
		n= n/10 ;
	}
	return dec ;
*/

