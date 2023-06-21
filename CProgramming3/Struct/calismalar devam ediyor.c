#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



typedef struct{
	
	char sembol[3];
	char tamAdi[20];
	int  atomNumarasi;
	
	
	
	
}element;





void bilgileriGoster(element elementListesi,char *sembol, int elemanSayisi){
	
	int i;
	int bulunduMu=0;
	
	for(i=0; i<5; i++)
	{
		if(strcmp(elementListesi[i].sembol,sembol)==0)
		{
			printf("Sembol:%s\n",elementListesi[i].sembol);
			printf("Tam Adi:%s\n",elementListesi[i].tamAdi);
			printf("Sembol:%d\n",elementListesi[i].atomNumarasi);
			bulunduMu=1;
			break;
			
		}
	}
	
	if(!bulunduMu)
	{
		printf("Girdiginiz sembol element listesinde bulunamamstir.\n");
	}
}









int main(){
	
	
	element elementListesi[]={ {"He","Helyum",2},{"H","Hidrojen",1},{"B","Bor",5}, {"F","Flor",9},{"N","Azot",7}};
	
	char kullaniciArama[5];
	
	
	while(1){
		
		printf("Lutfen aramak istediginiz elementin sembolunu giriniz(Cikmak icin 'Q' ya basiniz):");
		scanf("%s"&kullaniciArama);
		
		
		
		if(strcmp(elementListesi.sembol,"Q")==0)
		{
			break;
		}
		
		bilgileriGoster(elementListesi,kullaniciArama,5);		
	}
	
	return 0;
}
