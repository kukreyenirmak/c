#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void diziyiDoldur(int **ikiBoyutluDizi,int satirSayisi,int sutunSayisi)
{
	int i,j;
	srand(time(NULL));
	
	
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
			ikiBoyutluDizi[i][j]=rand()%5;
		}
	}
}




void diziyiYazdir(int **ikiBoyutluDizi,int satirSayisi,int sutunSayisi)
{
	int i,j;
	
	
	
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
			printf("%d ",ikiBoyutluDizi[i][j]);
		}
         printf("\n");	
	}
}



void matrisToplami(int **ilkMatris,int **ikinciMatris,int **sonucMatrisi,int satirSayisi,int sutunSayisi){
	
int i,j;
	  for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
		sonucMatrisi[i][j]=ilkMatris[i][j]+ikinciMatris[i][j];
		}
    }
}


void birimMatrisOlusturma(int satirSayisi,int sutunSayisi)
{
	
	int **birimMatris;
	/*
	1  0  0
	0  1  0
	0  0  1
	*/
	
	birimMatris=(int**)calloc(satirSayisi,sizeof(int*));
	int i,j;
	for(i=0; i<satirSayisi; i++)
	{
		birimMatris[i]=(int*)calloc(sutunSayisi,sizeof(int));
	}
	
	puts("Birim matris olmadan onceki hali");
	diziyiYazdir(birimMatris,satirSayisi,sutunSayisi);

	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
			if(i==j)
			{
			birimMatris[i][j]=1;
				
				
			}
		}
		
	
	
	}

  	puts("Birim Matris Olusturulmus Hali:");
		diziyiYazdir(birimMatris,satirSayisi,sutunSayisi);

	for(i=0; i<satirSayisi; i++)
	{
		free(birimMatris[i]);
	}
	free(birimMatris);
}


void transpozYazdirma(int **ikiBoyutluDizi,int satirSayisi,int sutunSayisi)
{
	
	int i,j;
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
			printf("%d ",ikiBoyutluDizi[j][i]);
		}
         printf("\n");	
	}
	
	/*
	1  2  3        1  4  7
	4  5  6 --->>  2  5  8
	7  8  9        3  6  9
	
	
	
	*/
	
	
	
	
}




int main(){
	
	//1. matris toplama
	//2. birim matris yazdýrma
	//3. kullanýcýnýn girdiði satir sutun sayisina göre dizi oluþturup transpoz oluþturma
	
	
	
	int satirSayisi;
	int sutunSayisi;
	int i;
	
	int **ilkMatris,**ikinciMatris,**sonucMatris;
	
	
	printf("Lutfen satir ve sutun sayisini sirayla giriniz:");
	scanf("%d%d",&satirSayisi,&sutunSayisi);
	birimMatrisOlusturma(satirSayisi,sutunSayisi);
	
	
	
	 
	 ilkMatris=(int**)malloc(sizeof(int*)*satirSayisi);
	 ikinciMatris=(int**)malloc(sizeof(int*)*satirSayisi);
     sonucMatris=(int **)calloc(satirSayisi,sizeof(int*));//hem dinamik hem sýfýr
     
     
     for(i=0; i<satirSayisi; i++)
     {
     	ilkMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
     	ikinciMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
	    sonucMatris[i]=(int*)calloc(sutunSayisi,sizeof(int));
	}
	
	
	 
	 diziyiDoldur(ilkMatris,satirSayisi,sutunSayisi);
	 diziyiDoldur(ikinciMatris,satirSayisi,sutunSayisi);
	 printf("Ilk Matris:\n");
	 diziyiYazdir(ilkMatris,satirSayisi,sutunSayisi);
	 printf("\nIkinci Matris:\n");
	 diziyiYazdir(ikinciMatris,satirSayisi,sutunSayisi);
	 printf("\nToplam Matrisinin toplamadan onceki hali:\n");
	 diziyiYazdir(sonucMatris,satirSayisi,sutunSayisi);
	 matrisToplami(ilkMatris,ikinciMatris,sonucMatris,satirSayisi,sutunSayisi);
	 printf("\nToplam Matrisinin toplamadan sonraki hali:\n");
	 diziyiYazdir(sonucMatris,satirSayisi,sutunSayisi);
	 printf("\nToplam Matrisin Transpoz Hali:\n");
	 transpozYazdirma(sonucMatris,satirSayisi,sutunSayisi);
	 
	 for(i=0; i<satirSayisi; i++)
	 {
	 	free(ilkMatris[i]);
	 	free(ikinciMatris[i]);
	 	free(sonucMatris[i]);
	 	
	 }
	 
	 
	 
	 
	
	
	
	
	
	
	
	return 0;
}
