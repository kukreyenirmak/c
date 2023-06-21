#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	
	int sayi;
	
	srand(time(NULL));
	
	sayi=1000+rand()%1500;
	
	printf("Rastgele uretilen sayi: %d\n",sayi);
	
	
	if(100000>sayi)
	{
		printf("%d 5 basamaklidir.",sayi);
		
		
	}
	
	
	else if(10000>sayi)
	{
		printf("%d 4 basamaklidir.",sayi);
		
		
	}
	
	
		
	else if(1000>sayi)
	{
		printf("%d 3 basamaklidir.",sayi);
		
		
	}
	
	
		else if(100>sayi)
	{
		printf("%d 2 basamaklidir.",sayi);
		
		
	}
	
	
		else if(10>sayi)
	{
		printf("%d 1 basamaklidir.",sayi);
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
