#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



typedef struct{
	
	char kitapYazar[20];
	char kitapAdi[20];
	char yayinEvi[20];
	int sayfaSayisi;
}kitapBilgileri;



typedef enum{
ogrenci=1,calisan=2
}yetkiSeviyeleri;


void kitapEkle(kitapBilgileri *kitapDizisi,int kitapSayisi,yetkiSeviyeleri yetki){


    int i=0;
	if(yetki!=calisan)
	{
		puts("Uzgunum kitap ekleme yetkisine sahip degilsiniz.Kitap eklemesi yapamazsiniz.");
		return;
	}
	
	
	while(1)
	{
		
		if(i>kitapSayisi)
		{
			puts("Uzgunum. Daha fazla kitap eklenemez, kitaplik tamamen dolu.");
			return;
		}
		
		if(kitapDizisi[i].sayfaSayisi==0)//kitapliðin o indeksi boþ
		{
			printf("Kitap Ismini Giriniz:");
			scanf("%s",&kitapDizisi[i].kitapAdi);
			printf("Kitap Yazarini Giriniz:");
			scanf("%s",&kitapDizisi[i].kitapYazar);
			printf("Kitap YayinEvi Bilgisini Giriniz:");
			scanf("%s",&kitapDizisi[i].yayinEvi);
			printf("Kitap Sayfa Sayisi Bilgisini Giriniz:");
			scanf("%d",&kitapDizisi[i].sayfaSayisi);
		    return;	
		}
		
	 i++;// bir sonraki indeksten devam ediyoruz.
		
		
	}
}



void kitapGoruntule(kitapBilgileri *kitapDizisi,int kitapSayisi){
	
	int i;
	for(i=0; i<kitapSayisi;i++)
	{
		printf("Kitap Adi:%s\n",kitapDizisi[i].kitapAdi);
		printf("Kitap Yazari:%s\n",kitapDizisi[i].kitapYazar);
       	printf("Kitap Yayinevi:%s\n",kitapDizisi[i].yayinEvi);
     	printf("Kitap Sayfa Sayisi:%d\n",kitapDizisi[i].sayfaSayisi);
       printf("-----------------------------------------------------\n");
    }
}





int kitapAra(kitapBilgileri *kitapDizisi,char *kitapAdi,int kitapSayisi){
	
	int i;
	for(i=0; i<kitapSayisi; i++)
	{
		if(strcmp(kitapDizisi[i].kitapAdi,kitapAdi)==0)
		{
			return i;
		}
	}
	return -1;
}

int main(){
	
	
	int kitapSayisi;
	kitapBilgileri *kitaplik;//dinamik dizi olusturacagiz
	char kullaniciIstegi;
	char kitapAdi[20];
	yetkiSeviyeleri kullaniciYetki;
	
	puts("Lutfen kac adet kitap eklemek istediginizi giriniz:");
	scanf("%d",&kitapSayisi);
	
	kitaplik=(kitapBilgileri*)calloc(kitapSayisi,sizeof(kitapBilgileri));
	
	
	do{
		fflush(stdin);
		puts("Kitap eklemek istiyorsaniz 'E',tum kitaplari goruntulemek istiyorsaniz 'G',arama yapmak istiyorsaniz 'A',cikis yapmak istiyorsaniz 'Q'tuslayiniz.");
		kullaniciIstegi=getchar();
		
		switch(kullaniciIstegi){
			
			case 'E':
				puts("Lutfen ogrenciyseniz 1,calisansaniz 2 tuslayiniz");
				scanf("%d",&kullaniciYetki);
				kitapEkle(kitaplik,kitapSayisi,kullaniciYetki);
				break;
				
			case 'A':
				puts("Lutfen aramak istediginiz kitabin adini giriniz:");
				scanf("%s",&kitapAdi);
				int kitap_Index=kitapAra(kitaplik,kitapAdi,kitapSayisi);
				if(kitap_Index==-1)
				{
					printf("Kitap kutuphanede bulunamadi.");
				}
			    
			    else{
			    	printf("Aradiginiz kitap kitapligimizin %c-%d kisminda bulundu.\n",kitapAdi[0],kitap_Index+1);
			    }
			
			case 'G':
				kitapGoruntule(kitaplik,kitapSayisi);
				break;
				
				
			case 'Q':
				puts("Cikis yapiliyor...Tesekkur ederiz\n");
				break;
				
			default:
			puts("Yanlis bir tuslama yaptiniz.");
			break;	
			
		}
		
		}while(kullaniciIstegi!='Q');
	
	return 0;
}
