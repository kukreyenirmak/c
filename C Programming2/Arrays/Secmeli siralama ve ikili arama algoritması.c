#include <stdio.h>
#include <time.h>



int main(){
	
	
	
	int dizi[10];
	int i,j;
	int indexKucukSayi,enKucukSayi;
	printf("Sirasiz Dizi\n");
	srand(time(NULL));
	for(i=0; i<10; i++)
	{
		
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
		
		
		
	}
	printf("\n\n");

	
		
	for(i=0; i<9; i++)
	{
		
		enKucukSayi=dizi[9];
		indexKucukSayi=9;
		for(j=i; j<9; j++)
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
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
