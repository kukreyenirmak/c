#include <stdio.h>





int main(){
	
	
	/*
	iki adet matris olusturualým
	
	*/
	
	
	int i,j,k;
	int dizi1[3][3];
	int dizi2[3][3];
	int carpimMatris[3][3];
	int toplam=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&dizi1[i][j]);
		}
		
	}
	printf("--------------------------------\n1.Dizi\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d  ",dizi1[i][j]);
			
		}
		printf("\n");
	}
	
	
		
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&dizi2[i][j]);
		}
		
	}
	
	
	printf("--------------------------------\n2.Dizi\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d  ",dizi2[i][j]);
			
		}
		printf("\n");
	}	
	
	printf("\nCarpim Matris\n\n");
	
	
	for(i=0; i<3; i++)
	{
		
		for(j=0; j<3; j++)
		{
			toplam=0;
			for(k=0; k<3; k++)
			{
				toplam+=dizi1[i][k]*dizi2[k][j];
				
				
			}
			carpimMatris[i][j]=toplam;
			printf("%d  ",carpimMatris[i][j]);
		}
		
		printf("\n");
		
	}
	
	
	
	
	return 0;
}
