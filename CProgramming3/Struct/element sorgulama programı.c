#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



////ELEMENT SORGULAMA////////////


typedef struct{
	
	char sembol[3];
	char tamAdi[20];
	int atomNumarasi;
	
	
}element;


void bilgileriGoster(element elementListesi[],char *sembol,int elementSayisi)
{
	
	int i;
	int bulunduMu=0; //bulunursa 1 olacak
	
	for(i=0; i<elementSayisi; i++)
	{
		if(strcmp(elementListesi[i].sembol,sembol)==0)
		{
		printf("Sembol: %s\n",elementListesi[i].sembol);
		printf("Tam Adi: %s\n",elementListesi[i].tamAdi);	
		printf("Atom Numarasi: %d\n",elementListesi[i].atomNumarasi);
		bulunduMu=1;
		break;	
	}
}	
 if(!bulunduMu){
		printf("Aradiginiz element listede bulunamadi\n");		
	}

}
	
	
int main(){
	
	
	element elementListesi[]={{"He","Helyum",2},{"H","Hidrojen",1},{"B","Bor",5}, {"F","Flor",9},{"N","Azot",7}};
	
	char kullaniciArama[5];
	
	while(1){
			
		printf("Lutfen yazdirmak istediginiz elementin seMbolunu giriniz (Cikis icin 'Q' tuslayiniz):");
        scanf("%s",&kullaniciArama);
	
	   
	   if(strcmp(kullaniciArama,"Q")==0){
	   	
	   	 	break;
	   }		
		
		bilgileriGoster(elementListesi,kullaniciArama,5);
	}
	return 0;
}
