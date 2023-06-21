#include <stdio.h>
/*
puts
gets 
fonksiyonlarýný öðrenelim


*/


int main(){
	// char veri tipi 1 byte yer kaplar
  
  // char *isim=ogun;
  char isim[20];// 20 byte
  /*
  scanf("%s",isim);
  printf("%s\n",isim);
  */
  /* 'o' 'g' 'u' 'n' '\0'  */ // null karakter 
  
   //char isim2[20]={'e','m','i','r','h','a','n','\0'};
   //printf("%s",isim2);
	
	char isimler[4][10];
	char soyisimler[4][10];
	
	int i;
	
	
	for(i=0; i<4; i++)
	{
       printf("Lutfen %d. ogrencinin adini soyadini giriniz:",i+1);
	   scanf("%s%s",isimler[i],soyisimler[i]);		
	}
	
	
	for(i=0; i<4; i++)
	{
		printf("%d. Ogrencinin adi:%s soyadi:%s\n",i+1,isimler[i],soyisimler[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
