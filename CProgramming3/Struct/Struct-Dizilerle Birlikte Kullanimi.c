#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


struct Ogrenci{
	
	char isim[20];
	char soyisim[20];
	float ortalama;
	

};


int main(){
	
int i;

//struct Ogrenci ogrenciler[]={{"Ogun","Birinci",3.74 },{"Duygu","Keydal",3.72},{"Eda","Deniz",3.68}};///
/*
printf("Ogrencinin ismi:%s\n",ogrenciler[0].isim);
printf("Ogrencinin Soyadi:%s\n",ogrenciler[0].soyisim);
printf("Ogrencinin Ortalamsi:%.2f\n",ogrenciler[0].ortalama);

 
 
printf("Ogrencinin ismi:%s\n",ogrenciler[1].isim);
printf("Ogrencinin Soyadi:%s\n",ogrenciler[1].soyisim);
printf("Ogrencinin Ortalamsi:%.2f\n",ogrenciler[1].ortalama);



printf("Ogrencinin ismi:%s\n",ogrenciler[2].isim);
printf("Ogrencinin Soyadi:%s\n",ogrenciler[2].soyisim);
printf("Ogrencinin Ortalamsi:%.2f\n",ogrenciler[2].ortalama);

 */
 
 
 struct Ogrenci ogrenciler[3];
 
 for(i=0; i<3; i++) //Bilgi alma kýsmý
 {
 	puts("Lutfen ogrencinin adini giriniz:");
 	scanf("%s",&ogrenciler[i].isim);
 	
 	puts("Lutfen ogrencinin soyadini giriniz:");
 	scanf("%s",&ogrenciler[i].soyisim);
 	
 	puts("Lutfen ogrencinin ortalamasini giriniz:");
 	scanf("%f",&ogrenciler[i].ortalama);
}


for(i=0; i<3; i++)
{
	printf("%d. ogrencinin adi:%s-soyadi:%s ve ortalamasi:%.2f\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].ortalama);
}










	
	
	
	
	
	
	
	
	return 0;
}
