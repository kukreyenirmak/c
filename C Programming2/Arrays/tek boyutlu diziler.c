#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>




int main(){
	
	
/*
ÝKÝ BOYUTLU DÝZÝLER
*/



/*

A00 A01 A02 A03 A04 .... A09
A10 A11 A12 A13 A14 .... A19
.
.
.
A90 A01 A92 A93 A94      A99

*/
/*
satir sayýsý boþ geçilebilir sütun sayýsý geçilemez
*/

int ikiBoyutluDizi[10][10]; // 10 satýr 10 sutun

printf("Hafizada kapladigi alan : %d byte",sizeof(ikiBoyutluDizi));

int i,j;
printf("\n");
for(i=0; i<10; i++)
{
	for(j=0; j<10; j++)
	{
 	
 	 if(j%2==0)
 	{
 		ikiBoyutluDizi[i][j]=1;
 		printf("%d  ",ikiBoyutluDizi[i][j]);
 		
	 }
 	
 	else{
 		ikiBoyutluDizi[i][j]=0;
	   	printf("%d  ",ikiBoyutluDizi[i][j]);
	 }
 	
 	
	 }
  printf("\n");
}


	
	/*
	0 1 1 1 1 
	0 0 1 1 1
	0 0 0 1 1 
	0 0 0 0 1
	0 0 0 0 0
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
