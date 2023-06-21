#include <stdio.h>





int main(){
	
	
	/*
	
	6= 1+2+3
	Sayýnýn bolenleri toplamý kendisine eþitse sayý mukemmel sayýdýr
	
	
	*/
	
	int asalMi=0;
	
	int i,j;
	int sayi;
	int k;
	/*
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	*/
	printf("1-1000 arasindaki asal sayilari bulan program\n\n");
	
	
	for(i=2; i<=1000; i++)
	{
		asalMi=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				
				asalMi=1;
			}
			
			
		}
		
		if(asalMi!=1)
		{
						printf("%d   ",i);

		  
		}
		
			
	}
	
	
	
	
	
	return 0;
}
