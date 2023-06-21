#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


struct Ogrenci{
	
	char isim[20];
	char soyisim[20];
	float ortalama;
	
	
	
	
};// veri tipi tanýmý yaptým.




int main(){
	
	int x; // degisken olusturma(Veri tipi int , degisken tipi x)
	struct Ogrenci ogr1={ "Ogun","Birinci",3.74 };
	struct Ogrenci ogr2;
   
   strcpy(ogr2.isim,"Duygu");
   strcpy(ogr2.soyisim,"Keydal");
   ogr2.ortalama=3.70;
   	
// Kendimiz gireceksek strcpy fonksiyonunu kullanacagiz.



	
	printf("Ogr1 Degiskeninin ismi: %s\n",ogr1.isim);
	printf("Ogr1 Degiskeninin soyismi:%s\n",ogr1.soyisim);
	printf("Ogr1 Degiskeninin ortalamasi: %.2f\n",ogr1.ortalama);
	
	printf("\n");
		
	printf("Ogr2 Degiskeninin ismi: %s\n",ogr2.isim);
	printf("Ogr2 Degiskeninin soyismi:%s\n",ogr2.soyisim);
	printf("Ogr2 Degiskeninin ortalamasi: %.2f\n",ogr2.ortalama);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
