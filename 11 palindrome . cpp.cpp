// 11 palindrome number 

#include<stdio.h>
int main ( )
{
	int a, n , rem=0, digit=0;
	printf (" enter a number");
	scanf (" %d",&n);
	 a = n ; 
	while ( n!=0)
	{
		rem= n%10;
		digit = digit*10 + rem;
	}
	if (a == digit){
		printf ("%d is palindrome");
	}
	else {
		printf ("%d is not palindrome"); 
	}
}
