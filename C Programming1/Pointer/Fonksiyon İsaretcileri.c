#include <stdio.h>
#include <string.h>
#include <time.h>

void merhabaDunya(int a){
	printf("Merhaba Dunya");
	printf("\n%d",a);
}


void sonucHesapla(int a,int b)
{
	printf("Sonuc:%d\n",a*2+b*3);
}

void sonucHesapla2(int a,int b)
{
	printf("Sonuc:%d\n",(a+2)+(b-5) );
}



void sonucHesapla3(int a,int b)
{
	printf("Sonuc:%d\n",a*3+b*2);
}




int main(){
	
    void (*fonkPtr[3])(int,int);
    fonkPtr[0]=sonucHesapla3;
    fonkPtr[1]=sonucHesapla2;
    fonkPtr[2]=sonucHesapla;
	
	(*fonkPtr[0])(3,5);
	(*fonkPtr[1])(2,12);
	(*fonkPtr[2])(2,8);
	
	
	
	
	
	
	
	
	
	return 0;
}
