#include <stdio.h>


int main(){
	
	
	int sayi;
	
	
	
	int piramitLimit,i,j;
	
	
	printf("Lutfen piramit limitini giriniz:");
	scanf("%d",&piramitLimit);
	
	
	for(i=1; i<=piramitLimit; i++)
	{
		
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	
	printf("\n\n\n");
	
	for(i=1; i<=piramitLimit; i++)
	{
		
		for(j=piramitLimit; j>=i; j--)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	
	printf("\n\n\n");
	
	for(i=1; i<=piramitLimit; i+=2)
	{
		
		for(j=piramitLimit; j>=i; j--)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	
	printf("\n\n\n\n\n");
	
	for(i=1; i<=piramitLimit; i+=2)
	{
		
		for(j=0; j<(piramitLimit-i)/2; j++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf("*");
		}
			for(j=0; j<(piramitLimit-i)/2; j++)
		{
			printf(" ");
		}
		
		printf("\n");
		
	}
	
	
	
	
	return 0;
}
