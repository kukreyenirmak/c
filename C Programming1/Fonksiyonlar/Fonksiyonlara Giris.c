#include <stdio.h>
#include <string.h>


void selamla(char isim[20]){
	printf("Merhaba %s!\n",isim);
}




int toplama(int sayi1,int sayi2)
{
	
	return sayi1+sayi2;
}



/*
donusTipi Fonksiyonun adi(Alacaðý argümanlar){
 yapilacakÝslemler


}

void ==> deger dondurmez
int,char ,double,float  ==> deger dondurur



*/

int main(){
	
	int sayi1,sayi2;
	selamla("Emirhan");
	
	
    printf("Toplama fonksiyonu programina hosgeldiniz\n");
    printf("Lutfen toplama istediginiz sayilari giriniz:");
    scanf("%d%d",&sayi1,&sayi2);
    
	int sonuc=toplama(sayi1,sayi2);
	printf("%d",sonuc);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
