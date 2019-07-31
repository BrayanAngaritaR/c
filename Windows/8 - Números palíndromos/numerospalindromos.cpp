#include <stdio.h>
#include <stdlib.h>


int main() {

	int n,d,num,revnum;
	
	for(n=0;n<=1000000;n++)
	{
		revnum=0;
		num=n;
		
		while (num!=0)
		{
			d=num%10;
			revnum=revnum*10+d;
			num=num/10;
		}
		
		if(revnum==n)
		    printf("\n %d es un palindromo", n);
	}
	
	printf("\n ------------------------ \n ");
	
   
    system("pause");
	return 0;
}
