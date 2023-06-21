#include <stdio.h>
#include <time.h>

void diziyiDoldur(int *dizi,int elemanSayisi){
	
	srand(time(NULL));
	
	int *ptr;
	
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		*ptr=rand()%100;
		
	}
}


void diziyiYazdir(int *dizi,int elemanSayisi){
	
	int *ptr;
	
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		printf("%d ",*ptr);
	}
	
	
}

void maxMinBul(int *dizi,int elemanSayisi,int *max,int *min)
{
	int *ptr=dizi;// ptr= 1. eleman
	
	*max=*ptr;
	*min=*ptr;
	ptr++;//2. elemana geç
	
		
	for(; ptr<dizi+elemanSayisi; ptr++)
	{
	  if(*ptr>*max)
	  {
	  	*max=*ptr; // max deðeri güncellendi
	  }
	
	else if(*ptr<*min)
	 {
	 	*min=*ptr;
	 }
	}
	
	
	
	
	
}



int main(){
	
	int dizi[10];
	int max,min;
	diziyiDoldur(dizi,10);
	diziyiYazdir(dizi,10);
    
    maxMinBul(dizi,10,&max,&min);
    printf("\nDizinin en buyuk elemani: %d\nDizinin en kucuk elemani:%d",max,min);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
