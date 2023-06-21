#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int fibonacciRecursive(int );

int main(){
	
	// 0 1 1 2 3 5 8 13 21 34
	
	int ustLimit,i;
	puts("Lutfen seri icin bir ust Limit giriniz:");
	scanf("%d",&ustLimit);
	
	for(i=0; i<ustLimit; i++)
	{
		printf("%d ",fibonacciRecursive(i));
		
	}
	return 0;
}

int fibonacciRecursive(int sayi){
	
	if(sayi==0 || sayi==1)
	{
		return sayi;
	}
	else{
		return fibonacciRecursive(sayi-1)+fibonacciRecursive(sayi-2);
	}
	
	
	
}
