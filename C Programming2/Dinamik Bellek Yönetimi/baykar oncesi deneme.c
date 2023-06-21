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



void matrisToplami(int **ilkMatris,int **ikinciMatris,int **sonucMatrisi,int satirSayisi,int sutunSayisi)
{
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
	int i;
	birimMatris=(int **)calloc(satirSayisi,sizeof(int*));
	
	for(i=0; i<satirSayisi; i++)
	{
		birimMatris[i]=(int*)calloc(sutunSayisi,sizeof(int));
	}
	
	
	/*
	
	1  0  0
	0  1  0
	0  0  1
	
	*/
	
	
	
	
	
	
	
	
	
}






int main(){
	
int satirSayisi;
int sutunSayisi;
 int ** ilkMatris;
 int ** ikinciMatris;
 int **sonucMatrisi;
 int i;

printf("Satir sayisini giriniz:");
scanf("%d",&satirSayisi);
 

 
 
printf("Sutun sayisini giriniz:");
scanf("%d",&sutunSayisi);
 
 ilkMatris=(int**)malloc(sizeof(int*)*satirSayisi);
 ikinciMatris=(int**)malloc(sizeof(int*)*satirSayisi);	
sonucMatrisi= (int**)calloc(satirSayisi,sizeof(int*));
  
  for(i=0; i<satirSayisi; i++)
  {
  	ilkMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
  	ikinciMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
  	sonucMatrisi[i]=(int*)calloc(sutunSayisi,sizeof(int));
  }
  
  
  diziyiDoldur(ilkMatris,satirSayisi,sutunSayisi);
  diziyiDoldur(ikinciMatris,satirSayisi,sutunSayisi);
  printf("\n\nIlk Matrix:\n");
  diziyiYazdir(ilkMatris,satirSayisi,sutunSayisi);
  printf("\nIkinci Matrix:\n");	
  diziyiYazdir(ikinciMatris,satirSayisi,sutunSayisi);	
  puts("Toplam Matrisinin toplamadan onceki hali:");
  diziyiYazdir(sonucMatrisi,satirSayisi,sutunSayisi);
  matrisToplami(ilkMatris,ikinciMatris,sonucMatrisi,satirSayisi,sutunSayisi);	
  puts("Toplam Matrisinin toplamadan sonraki hali:");
  diziyiYazdir(sonucMatrisi,satirSayisi,sutunSayisi);	

  	
	for(i=0; i<satirSayisi; i++)
	{
		free(ilkMatris[i]);
		free(ikinciMatris[i]);
		free(sonucMatrisi[i]);
	}
	
	free(ilkMatris);
 	free(ikinciMatris);
 	free(sonucMatrisi);
 
 
 
 
 
 return 0;	
}




 
 
 
 
 
 
 
 
