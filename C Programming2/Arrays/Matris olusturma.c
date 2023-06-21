#include <stdio.h>
#include <time.h>



int main(){
	printf("Iki boyutlu Matris\n\n");
	
	int ilkMatris[5][5],i,j;
	int transpozMatris[5][5];
	srand(time(NULL));//her çalýþmada farklý deðer atamasý için
	
	for(i=0; i<5; i++)
	{
		
		for(j=0; j<5; j++)
		{
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
			
		}
		
		printf("\n\n");
		
	}
	
	printf("Transpoz Matris\n\n");
	
	
		
	for(i=0; i<5; i++)
	{
		
		for(j=0; j<5; j++)
		{
			transpozMatris[i][j]=ilkMatris[j][i];
		
			
		}
		
	
		
	}
			
	for(i=0; i<5; i++)
	{
		
		for(j=0; j<5; j++)
		{
			
			printf("%d\t",transpozMatris[i][j]);
			
		}
		
		printf("\n\n");
		
	}
	
	
	return 0;
}
