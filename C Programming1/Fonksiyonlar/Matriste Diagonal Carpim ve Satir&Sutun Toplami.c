#include <stdio.h>
#include <string.h>
#include <time.h>




void diziyiDoldur(int fonkDizi[][5],int satirSayisi,int sutunSayisi){
	
	int i,j;
	
	
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
			fonkDizi[i][j]=rand()%4+1;
		}
	}
}


void diziyiYazdir(int fonkDizi[][5],int satirSayisi,int sutunSayisi)
{
	int i,j;
	srand(time(NULL));
	for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
			printf("%d ",fonkDizi[i][j]);
			
		}
		printf("\n");
	}
}


int diagonalCarpimi(int fonkDizi[][5],int satirSayisi,int sutunSayisi)
{
	
	int i,j;
	int carpimSonucu=1;
	
		for(i=0; i<satirSayisi; i++)
	{
		for(j=0; j<sutunSayisi; j++)
		{
					if(i+j==5-1)
					{
					carpimSonucu*=fonkDizi[i][j];

					}
						
		}
		
	}


return carpimSonucu;
}
	
	
	
	




int main(){


  int satirSayisi=5; 
  int sutunSayisi=5;
  int dizi[satirSayisi][sutunSayisi];
  diziyiDoldur(dizi,satirSayisi,sutunSayisi);	
  diziyiYazdir(dizi,satirSayisi,sutunSayisi);
  printf("Diagonal carpimlari: %d",diagonalCarpimi(dizi,satirSayisi,sutunSayisi));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
