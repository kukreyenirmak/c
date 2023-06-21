#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>





///////NOKTALARDAN ALAN HESPLAMA////////////////////





typedef struct{
	
	int x,y;
	
  	
	
	

	
}Nokta;




typedef struct{
	
	Nokta koordinat[4];



}dikdortgen;



float alanHesapla(dikdortgen kullaniciGirisi){
	
	
	float x_kenar,y_kenar;
	x_kenar=kullaniciGirisi.koordinat[1].x-kullaniciGirisi.koordinat[0].x;
	y_kenar=kullaniciGirisi.koordinat[3].y-kullaniciGirisi.koordinat[0].y;
	
	return x_kenar*y_kenar;
	
	
}





int main(){
	
	
	dikdortgen hesaplanacakDortgen;// degiskeni olusturdum
	int i;// dongu icin
	
	for(i=0; i<4; i++)
	{
		printf("Lutfen sirasiyle N%d koordinati icin sirasiyla x ve y degerlerini giriniz:",i);
		scanf("%d%d",&hesaplanacakDortgen.koordinat[i].x,&hesaplanacakDortgen.koordinat[i].y);
	}
	
	float sonuc=alanHesapla(hesaplanacakDortgen);
	printf("Girdiginiz x-y degerlerine karsilik alan degeri: %.2f",sonuc);
	
	
	/*
	
	N3      N2
	N0      N1
	
	
	
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
