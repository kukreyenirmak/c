#include <stdio.h>


int main(){
	
	int ilkSayi=0;
	int ikinciSayi=1;
	int i;
	printf("%d %d ",ilkSayi,ikinciSayi);
	/*
	0 1 1 2 3 5 8 13 21 34
	*/
	
	for(i=2; i<10; i++)
	{
		int fibonacciSayisi;
		fibonacciSayisi=ilkSayi+ikinciSayi;
		printf("%d ",fibonacciSayisi);
		ilkSayi=ikinciSayi;
		ikinciSayi=fibonacciSayisi;
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


