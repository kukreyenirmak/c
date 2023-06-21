#include <stdio.h>
#include <time.h>
#include <string.h>


/*

Selection Sort Algoritmasý

ve

Binary Search Algoritmasý



*/

//Selection Sort






int main(){
	
/*
7  3  5  8  2  9  4  15  6
2  3  5  8  7  9  4  15  6  -->>2 ile 7 yer degisti
2  3  4  8  7  9  5  15  6  -->>5 ile 4 yer degisti
2  3  4  5  7  9  8  15  6  -->>5 ile 8 yer degisti
2  3  4  5  6  9  8  15  7  -->>6 ile 7 yer degisti
2  3  4  5  6  7  8  15  9  -->>7 ile 9 yer degisti
2  3  4  5  6  7  8  9  15  -->>9 ile 15 yer degisti
2  3  4  5  6  7  8  9  15  -->son hali 
*/

int dizi[10],i,j,indexKucukSayi,enKucukSayi;

srand(time(NULL));
printf("Sirasiz dizi:\n");
for(i=0; i<10; i++)
	{
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	
	printf("\n");
	
	for(i=0; i<9; i++)
	{
		enKucukSayi=dizi[9];
		indexKucukSayi=9;
		
		for(j=i;j<9; j++)
		{
			if(dizi[j]<enKucukSayi)
			{
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}
			
			
		}
		printf("%d sayisi ile %d sayisi yer degistirildi.\n",enKucukSayi,dizi[i]);
		
		
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
		
	}
	
	
	
	printf("\nSirali Dizi\n");
	for(i=0; i<10; i++)
	{
		
		printf("%d ",dizi[i]);
	}
	
	
	
	printf("\n\n\n");
	
	/*
	
	1  3  8  24  35  46  57  68  79  90  110 ==>arananSayý 57
   sol             ortanca               sag
	               sol        ortanca    sag
	                sol ort sag
	*/
	
	int ortanca,sol,sag;
	int aradiginizSayi;
	int bulunduMu=0;
	
	printf("Lutfen aradiginiz sayiyi giriniz:");
	scanf("%d",&aradiginizSayi);
	
	sol=0; // index numaralarý
	sag=9;// index numaralarý
	
	while(sol<=sag)
	{
		ortanca=(sag+sol)/2;
		
		if(aradiginizSayi==dizi[ortanca]){
			
		    bulunduMu=1;
			break;
		}
		
		else if(aradiginizSayi>dizi[ortanca])
		{
			sol=ortanca+1;
			
		}
		
		else if(aradiginizSayi<dizi[ortanca])
		{
			sag=ortanca-1;
		}
		
	}
	
	if(bulunduMu)
	{
	printf("%d sayisi dizie bulunmustur",aradiginizSayi);	
		
	}
	else{
		printf("%d sayisi dizide bulunmamistir",aradiginizSayi);
	}
	
	
	
	
	return 0;
}
