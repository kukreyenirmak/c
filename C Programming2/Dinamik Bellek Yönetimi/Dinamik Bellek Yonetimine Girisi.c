#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h> //malloc free sizeof gibi fonksiyonlar stdlib k�t�phanesinin icinde bulunur
/*

Dinamik Bellek Y�netimi

*/



int main(){
	
	/*
	int dizi[20]; //10 tane eleman*4=40 byte bo�a gider e�er sadece 10 eleman kullanacaksam
	printf("%d",sizeof(dizi));// kac byte 
	baslangic_adresi=malloc();// alan ay�rmak icin
	free();//alan� geri bosaltmak icin
	realloc
	calloc
	
	// malloc ==> memory allocation == baslangic adresi tutar
	
	*/
	
	
	int *ptr;//baslangic adresini tutabilmek i�in;
	
	ptr=(int *)malloc(sizeof(int));
	*ptr=15;
	int *ptr2;
    ptr2=(int *)malloc(sizeof(int));	
	*ptr2=350;
	*ptr=*ptr2;
	free(ptr2);
	printf("%#X\n",ptr);
	printf("%d\n",*ptr);
	printf("%#X\n",ptr2);
	printf("%d\n",*ptr2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
