#include <stdio.h>



int main(){
	
	
	/*
	
	YILDIZ PROGRAMI
	
	*/
	
	
	int i,j;
	int limitSayisi;
	
	printf("Lutfen bir limit degeri giriniz:"),
	scanf("%d",&limitSayisi);
	
	for(i=1; i<=limitSayisi; i+=2)
	{
		
		/*
		
		*
	   ***
	  *****	
     *******	
	*********	
		
		*/
		for(j=1; j<=(limitSayisi-i)/2; j++)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			
			printf("*");
		}
		
		for(j=1; j<=(limitSayisi-i)/2; j++)
		{
			printf(" ");
		}
		
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
