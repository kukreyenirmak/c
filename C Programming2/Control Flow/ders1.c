#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	/*
	if(0) // 0 Dýþýndaki her þey doðru kabul edilir .
	{
		printf("If bloguna girdi\n");
	}
	
	else if(1){
		
		printf("Else if bloguna girdi.");
	}
	
	
	else{
		printf("Else bloguna girdi\n");
	}
	
	
	*/
	
	/*
	int sayi1,sayi2;
	srand(time(NULL));// her seferinde farklý deðerler üretecek
	sayi1=rand()%100;
	sayi2=rand()%100;
	
	printf("Birinci sayi: %d , ikinci sayi: %d\n",sayi1,sayi2);
	
	
	if(sayi1<sayi2)
	{
		printf("%d degeri %d degerinden kucuktur",sayi1,sayi2);
	}
	
	
	else if(sayi1==sayi2)
	{
	printf("%d degeri %d degerine eþittir",sayi1,sayi2);

	}
	
	else{
			printf("%d degeri %d degerinden buyuktur",sayi1,sayi2);

	}
	
	*/
	
	
	/*
	int sayi;
	srand(time(NULL));
	sayi=rand()%100;
	printf("Olusturulan sayi: %d\n",sayi);
	if(sayi%2==0)
	{
		printf("%d Sayisi 2'ye bolunebilen bir sayidir.",sayi);
	}
	else{
				printf("%d Sayisi 2'ye bolunebilen bir sayi degildir.",sayi);

	}
	
	*/
	
	/*
	int sayi1,sayi2;
	float sonuc;
	char ch;
	
	
	
	printf("Lutfen sirasiyla iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	fflush(stdin); // bufferi temizlemek icin.f
	
	printf("Lutfen yapmak istediginiz islemi giriniz(+,-,*,/): ");
	scanf("%c",&ch);
	
	
	if(ch=='+')
	{
		sonuc=sayi1+sayi2;
		printf("Toplama sonucu: %.2f",sonuc);
		
	}
	
	
		
	else if(ch=='-')
	{
		sonuc=sayi1-sayi2;
		printf("Cýkarma sonucu: %.2f",sonuc);
		
	}
	
			
	else if(ch=='*')
	{
		sonuc=sayi1*sayi2;
		printf("Carpma sonucu: %.2f",sonuc);
		
	}
	
		else if(ch=='/')
	{
		sonuc=sayi1/sayi2;
		printf("Bolme sonucu: %.2f",sonuc);
		
	}
	
	else{
		printf("Yanlis birtuslama yaptiniz.");
	}
	
	
	*/
	
	float kullaniciBakiyesi=1250.0;
	float kullaniciMiktar;
	float gunlukLimit=500.0;
	
	int islem;
	printf("\t Merhabalar Hosgeldiniz\n");
	printf("\t Para yatirmak icin 1, para cekmek icin 2, hesap bakiyesi goruntulemek icin 3'e basiniz:");
	scanf("%d",&islem);
	
	
	if(islem==1){
		printf("Yatirmak istediginiz miktari giriniz:");
		scanf("%f",&kullaniciMiktar);
		if(kullaniciMiktar==0){
			printf("\tLutfen belirtilen surede bir para girisi yapiniz.");
			sleep(3); // 3 saniye boyunca program duracak.
			scanf("%f",&kullaniciMiktar);
		}
	
	  kullaniciBakiyesi+=kullaniciMiktar;
	  printf("\t Isleminiz basariyla gerceklesti.Tesekkur Ederiz\n");
	  printf("\t Yeni Bakiyeniz: %.2f\n",kullaniciBakiyesi);
	}
	
	else if(islem==2){
		
	    printf("Cekmek istediginiz miktari giriniz:");
        scanf("%f",&kullaniciMiktar);
        
        if(kullaniciMiktar>kullaniciBakiyesi){
                printf("Hesabinizda o kadar para bulunmamaktadir.Islem gerceklesemiyor");        	
        }
        
        else if(kullaniciMiktar>gunlukLimit)
		{
			printf("Gunluk para cekme limitini astiniz.Islem gerceklesemiyor");
		}
		
		else{
			kullaniciBakiyesi-=kullaniciMiktar;
			printf("Isleminiz basariyla gerceklesmistir.Tesekkurler");
			printf("\t Yeni Bakiyeniz: %.2f\n",kullaniciBakiyesi);
		}
		
	}
	
	
	
	else if(islem==3){
	    
	printf("\t Bakiyeniz: %.2f\n",kullaniciBakiyesi);

		
			
	}
	else{
		printf("Yanlis bir islem girdiniz.\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
