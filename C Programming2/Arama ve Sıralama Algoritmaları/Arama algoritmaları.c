#include <stdio.h>
#include <time.h>


int main(){
	
	
	/*
	DOÐRUSAL ARAMA ALGORÝTMASI

	
	int dizi[10],i,arananDeger,bulunduMu=0;
	srand(time(NULL));
	
	for(i=0; i<10; i++)
	{
		dizi[i]=rand()%100;
        printf("%d  ",dizi[i]);
	}
	
	printf("\nLutfen aranacak olan degeri giriniz:");
	scanf("%d",&arananDeger);
	
	
	for(i=0; i<10; i++)
	{
		if(dizi[i]==arananDeger)
		{
			bulunduMu=1;
			break;
		}
		
	}
	
	if(bulunduMu)
	printf("Degerimiz bulundu");
	else
	printf("Bulunamadi");	
	
	*/
	
	
	//ARAYA SOKMA ALGORÝTMASI
	
	/*	

   int i,j;
   int eleman;
   int dizi[10];
   
   srand(time(NULL));
   printf("Dizi:\n");
   
   for(i=0; i<10; i++)
   {
   	dizi[i]=rand()%100;
   	printf("%d  ",dizi[i]);
   	}
   	
   	printf("\nSirali Dizi:\n");
   	
   	
   	for(i=1; i<10; i++)
   	{
   	 eleman=dizi[i];
   	 for(j=i-1; j>=0 && eleman<=dizi[j]; j--)
			{
				dizi[j+1]=dizi[j];				
				
			}
   		
   		dizi[j+1]=eleman;
   		
	}


    
for(i=0; i<10; i++)
   {
   
   	printf("%d  ",dizi[i]);
   	}

*/


//BUBBLE SORT ALGORITHM



 int dizi[10];
 int gecici;
 int i,j;
 
 // bubble sort baþlýyor hazýrlannnn....
 
 
 // önce dizi oluþturualým
 srand(time(NULL));
 
 printf("Dizimiz:\n");
 for(i=0; i<10; i++ )
  {
  	
  	dizi[i]=rand()%100;
  	printf("%d ",dizi[i]);
}


  printf("\nSiralanmis hali:\n");
  
  
  for(i=0; i<9; i++)
  {
  	
  	for(j=0; j<9-i; j++)
  	  {
  	    if(dizi[j]>dizi[j+1])
  	  	{
  	  			gecici=dizi[j];
  	  	dizi[j]=dizi[j+1];
  	  	dizi[j+1]=gecici;
  	  		
			}
	  }
  	
  }


for(i=0; i<10; i++)
{
	printf("%d ",dizi[i]);
}








	
	
	
	return 0;
}
