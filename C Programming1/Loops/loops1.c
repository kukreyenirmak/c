#include <stdio.h>
/*
LOOPS
DONGULER
*/


int main(){
	
	
int i;
int sayi;
int fact=1;

printf("Lutfen faktoriyeli hesaplanacak sayiyi giririniz");
scanf("%d",&sayi);


for(i=1; i<=sayi; i++)
{
	fact*=i;
}


printf("%d! = %d",sayi,fact);



	
	
	
	
	
	
	
	
	
	return 0;
}
