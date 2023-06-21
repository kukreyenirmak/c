#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int dosyalariKarsilastir(FILE *dosya,FILE *ikinciDosya)
{
	int karakterSayisi,karakterSayisi2;
	
	fseek(dosya,0,SEEK_END);
	fseek(ikinciDosya,0,SEEK_END);
	
	karakterSayisi=ftell(dosya);
	karakterSayisi2=ftell(ikinciDosya);
	
	printf("Ilk dosya %d adet karakter iceriyor.\n",karakterSayisi);
	printf("Ikinci dosya %d adet karakter iceriyor.\n",karakterSayisi2);
	
	if(karakterSayisi>karakterSayisi2)
	{
		printf("Ilk dosyanizin boyutu ikinci dosyanizdan daha buyuktur.\n");
		return;
		
	}
	
	else if(karakterSayisi<karakterSayisi2)
	{
		printf("Ikinci dosyanizin boyutu ilk dosyanizdan daha buyuktur");
		return;
		
		
	}
	
	else{
		
		rewind(dosya);
		rewind(ikinciDosya);
		int ch,ch2;
		
		while(1){
			ch=fgetc(dosya);
			ch2=fgetc(ikinciDosya);
			printf("Dosya1'in karakteri:%c\n",ch);
			printf("Dosya2'nin karakteri:%c\n",ch2);

			if(ch==EOF && ch2==EOF){
				break;
			}
			
			if(ch!=ch2)
			{
				return 0;
			}
			
			
			
			
		}
		
		
		
	}
    return 1;// tüm karakterler ayný.	
}







int main(){
	
	FILE *ilkDosya=fopen("Deneme.txt","r");
	FILE *ikinciDosya=fopen("Deneme2.txt","r");
	
	if(ilkDosya!=NULL && ikinciDosya!=NULL)
	{
		
		int sonuc=dosyalariKarsilastir(ilkDosya,ikinciDosya);
	   if(sonuc==1){
	   	printf("Iki dosya tamamen birbirinin aynisidir.");
	   	
	   }
	
	  else if(sonuc==0)
	{
		printf("Iki dosya birbirinden farklidir.");
	}
	
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
