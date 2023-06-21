#include <stdio.h>
#include <time.h>
#include <string.h>

void sayiDegistir(int,int);

void sayiDegisitrPointer(int *,int *);





int main(){
	int a=5;
	int b=12;
	
	printf("A sayisinin degeri: %d , B sayisinin degeri:%d\n",a,b);
	sayiDegistir(a,b);//isimleriyle çaðýrýyorum
	printf("A sayisinin degeri: %d , B sayisinin degeri:%d\n",a,b);
    sayiDegistirPointer(&a,&b);//adresleriyle çaðýrýyorum
    printf("A sayisinin degeri: %d , B sayisinin degeri:%d\n",a,b);
return 0;
}


void sayiDegistir(int fonkA,int fonkB)//fonkA=a degeri atanýyor
{
	int geciciSayi;
	
	geciciSayi=fonkB;
	fonkB=fonkA;
	fonkA=geciciSayi;
}
// sayý degistir fonksiyonu bittiði an fonkA ve fonkB kaybolur.

void sayiDegistirPointer(int *fonkA,int *fonkB)
{
	
	int geciciSayi;
    geciciSayi=*fonkB;
	*fonkB=*fonkA;
	*fonkA=geciciSayi;
	
	
	
}


