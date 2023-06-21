#include <stdio.h>




int main(){
	
	
	/*
	int i=0;
	
	while(i<10){
		
		
		printf("%i sayisi: d\n",i);
		i++;
	}
	*/
	
	
	int sayi;
	int basamakSayisi=0;
	int i;
	printf("Lutfen bir sayi girniz:");
	scanf("%d",&sayi);
	
	printf("*******************************\n");
	printf("Sayinin Tersi: ");
	for(i=sayi; i>0; i/=10)
	{
		printf("%d",i%10);
		basamakSayisi++;
		
		
		
	}
	printf("\n%d sayisi %d adet basamaklidir",sayi,basamakSayisi);
	
	
	
	
	
	
	
	
	return 0;
}
