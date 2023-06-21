#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int main(){
	
	
	// pointer to pointer
	int kullaniciSayisi=123;
	int *ptr=&kullaniciSayisi;
	int **ptr2ptr=&ptr;
    
	printf("%#X\n",&kullaniciSayisi);
	printf("%#X\n",ptr);	
   	printf("%#X\n",*ptr2ptr);
	   
	 	
   	printf("%d\n",kullaniciSayisi);
	printf("%d\n",*ptr);	
   	printf("%d\n",**ptr2ptr);
	   






	/*
	
	
	      ptr2ptr ------------>>    ptr  -------->>     kullaniciSayi
Deðerler:#A1234  	                #A1234                  123   
Adres:	#A123456                   #A123456               
	
	*/
	
	
	
	
	
	
	
	/*
	
martis-->	1  2  3  4  5
martis-->	6  7  8  9  10
martis-->	11 12 13 14 15
	
	*/
	
	int **ikiBoyutluDizi;
	int satirSayisi;
	int sutunSayisi;
	int i,j;
	srand(time(NULL));
	printf("Satir Sayisi:");
	scanf("%d",&satirSayisi);
	
	printf("Sutun Sayisi:");
	scanf("%d",&sutunSayisi);
	
	//Dinami sekilde dizi olusturma
	ikiBoyutluDizi=(int **)malloc(sizeof(int*)*satirSayisi);
	for(i=0; i<satirSayisi; i++)
	{
		ikiBoyutluDizi[i]=(int*)malloc(sizeof(int)*sutunSayisi);
	}
	
		
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
		   ikiBoyutluDizi[i][j]=rand()%100;
		}
		printf("\n");
	}
	
	
	
	
	
	
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
		   printf("%d ",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



