#include <stdio.h>
#include <time.h>
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



void toplamMatris(int **ilkMatris,int **ikinciMatris,int **sonucMatris,int satirSayisi,int sutunSayisi)
{
	
	int i,j;
	for(i=0;i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
		sonucMatris[i][j]=ilkMatris[i][j]+ikinciMatris[i][j];	
		}
	}
}

void birimMatrisOlusturma(int satirSayisi,int sutunSayisi)
{

    int **birimMatris;
    int i,j;
    
    birimMatris=(int **)calloc(satirSayisi,sizeof(int*));
    
    for(i=0; i<satirSayisi; i++)
    {
    	
    	birimMatris[i]=(int*)calloc(sutunSayisi,sizeof(int));
    }

   printf("\nBirim matris olamadan onceki hali\n");
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


   printf("Birim Matrix olusturulmus hali:\n");
   diziyiYazdir(birimMatris,satirSayisi,sutunSayisi);







 for(i=0; i<satirSayisi; i++)
{
	free(birimMatris[i]);
}

free(birimMatris);
	
	
	
}

void transpozMatris(int **ikiBoyutluDizi,int satirSayisi,int sutunSayisi)
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
	
	
	
}



int main(){
	
	
	int satirSayisi;
	int sutunSayisi;
	int i;
	
	printf("Lutfen satir sayisini giriniz:");
	scanf("%d",&satirSayisi);
	
	printf("Lutfen sutun sayisini giriniz:");
	scanf("%d",&sutunSayisi);
	
	
	int **ilkMatris;
	int **ikinciMatris;
	int **sonucMatris;
	
	
	ilkMatris=(int**)malloc(sizeof(int*)*satirSayisi);
	ikinciMatris=(int**)malloc(sizeof(int*)*satirSayisi);
	sonucMatris=(int**)calloc(satirSayisi,sizeof(int*));
	
	for(i=0; i<satirSayisi; i++)
	{
		ilkMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
		ikinciMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
		sonucMatris[i]=(int*)calloc(satirSayisi,sizeof(int));
	}
	
	diziyiDoldur(ilkMatris,satirSayisi,sutunSayisi);
    diziyiDoldur(ikinciMatris,satirSayisi,sutunSayisi);	
	printf("Ilk MATRIX:\n");
	diziyiYazdir(ilkMatris,satirSayisi,sutunSayisi);
	printf("\nIkinci MATRIX:\n");
	diziyiYazdir(ikinciMatris,satirSayisi,sutunSayisi);
	printf("\nToplamdan Onceki Matrix:\n");
	diziyiYazdir(sonucMatris,satirSayisi,sutunSayisi);
	toplamMatris(ilkMatris,ikinciMatris,sonucMatris,satirSayisi,sutunSayisi);
	printf("\nToplamadan Sonraki Matrix:\n");
	diziyiYazdir(sonucMatris,satirSayisi,sutunSayisi);
	printf("\nTranspoz Matrix\n");
	transpozMatris(sonucMatris,satirSayisi,sutunSayisi);
	
	for(i=0;i<satirSayisi; i++)
	{
		free(ilkMatris[i]);
		free(ikinciMatris[i]);
		free(sonucMatris[i]);
	}
	
	free(ilkMatris);
	free(ikinciMatris);
	free(sonucMatris);
	
	printf("\nBirim Matrix\n");
	birimMatrisOlusturma(satirSayisi,sutunSayisi);
	
	
	return 0;
}
