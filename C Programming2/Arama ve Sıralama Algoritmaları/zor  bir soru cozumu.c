#include <stdio.h>
#include <time.h>


int main(){
	
	
	int i,j;
	int dizi[10];
	int enKucukSayi,indexKucukSayi;
	
	srand(time(NULL));
	
	for(i=0; i<10; i++)
	{
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	
	
	
	// selection sort algoritmasý
	
	
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
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	}
	
	
	printf("\n\n");
	
		for(i=0; i<10; i++)
	{
		
		printf("%d ",dizi[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
