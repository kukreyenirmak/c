#include <stdio.h>

/*

SORULAR

*/




int main(){
	
	//ASAL SAYI SORGULAMA
	int sorgulanacakSayi;
	int i;
	int asalMi=0;
	/*
	Kendisine ve 1 dýþýndaki sayýlara bolunemeyen sayýlara asal sayý denir.
	*/
	/*
	printf("Sorgulanacak Sayiyi giriniz:");
	scanf("%d",&sorgulanacakSayi);
	
	printf("\n\n");
	
	for(i=2; i<sorgulanacakSayi; i++)
	{
		if(sorgulanacakSayi%i==0)
		{
			asalMi=1;
			break;
		}
		
		
		asalMi=0;
	}
	
	
	if(asalMi==1)
	{
		printf("%d asal sayi degildir.",sorgulanacakSayi);
	}
	
	if(asalMi==0)
	{
		printf("%d asal sayidir.",sorgulanacakSayi);
	}
	
	*/
	
	
	
	//EBOB - EKOK HESAPLAMA
	
	
	
	int sayi1,sayi2;
	int ebob,ekok;
    int buyukSayi,kucukSayi;
	int sayac;
		
	printf("Lutfen iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);

   if(sayi1>sayi2)
	{
		buyukSayi=sayi1;
		kucukSayi=sayi2;
	}
	else{
		buyukSayi=sayi2;
		kucukSayi=sayi1;
	}
	
	sayac=buyukSayi;
	while(1)
	{
		
		if(sayac%buyukSayi==0 & sayac%kucukSayi==0)
		{
			ekok=sayac;
			break;
			
			
		}
		
		
		sayac++;
		
		
		
	}
	
	sayac=kucukSayi;
	while(1)
	{
	 if(kucukSayi%sayac==0 && buyukSayi%sayac==0)
	   {
	   	ebob=sayac;
	   	break;
	   }
	 

	
	  	sayac--;

     }
	
	printf("Girilen sayilar %d ve %d dir",sayi1,sayi2);
	printf("\nGirilen sayilarin\nEBOB: %d\nEKOK:%d\n Iyi calismalar",ebob,ekok);
	
	
	
	
	//Cumlede kaç adet bosluk olduðunu bulan program
	
	/*
	printf("Bir cumle giriniz:\n");
	char ch;
	int boslukSayisi=0;
	do{
		
		ch=getchar(); // karakter alma
		if(ch==' ')
		{
			boslukSayisi++;
		}
		
		
		
	}while(ch!='\n');
	
	printf("Girilen cumledeki bosluk sayisi %d'dir",boslukSayisi);
	
	*/
	
	
	
	
	return 0;
}
