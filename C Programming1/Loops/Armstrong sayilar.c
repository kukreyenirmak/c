#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*


ARMSTRONG SAYISI SORGULAMA

*/

int main(){
	
	
	int i,j;
	int basamakSayisi=0;
	int toplam;
	int basamakDegeri;
	
	for(i=1; i<=10000; i++)
	{
		toplam=0;
		basamakSayisi=0;
		
		for(j=i; j>0; j/=10)
		{
			basamakSayisi++;
		}
		
	for(j=i; j>0; j/=10)
		{
			
			toplam+=pow((j%10),basamakSayisi);
		}
		
		
		if(toplam==i)
		{
			printf("%d\n",i);
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
