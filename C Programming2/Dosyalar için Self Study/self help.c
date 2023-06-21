#include <stdio.h>
#include <stdlib.h>



int dosyalariKarsilastir(FILE *dosya,FILE *ikinciDosya){
	
	int karakterSayisi,karakterSayisi2;
	
	fseek(dosya,0,SEEK_END);
	fseek(ikinciDosya,0,SEEK_END);
	
	karakterSayisi=ftell(dosya);
	karakterSayisi2=ftell(ikinciDosya);
	
	printf("Ilk dosya %d adet karakter iceriyor.\n",karakterSayisi);
	printf("Ikinci dosya %d adet karakter iceriyor.\n",karakterSayisi2);
	
	
	
	if(karakterSayisi>karakterSayisi2){
		printf("Ilk dosya ikinci dosyadan buyuktur.\n");
		return ;
	}
	
	else if(karakterSayisi2>karakterSayisi){
		printf("Ikinci dosya ilk dosyadan buyuktur.\n");
		return ;
	}
	
	else{
		rewind(dosya);
		rewind(ikinciDosya);
		int ch,ch2;
		
		while(1){
			
		
			
			ch=fgetc(dosya);
			ch2=fgetc(ikinciDosya);
			printf("1.Dosya'nin karakteri:%c\n",ch);
			printf("2.Dosyanin karakteri:%c\n",ch2);
			
			if(ch==EOF && ch2==EOF){
				break;
			}
			
			if(ch!=ch2){
				return 0;
			}
		}
	}
	  return 1;	
}
	








int main(){
	
	
	FILE *dosya=fopen("deneme.txt","r");
	FILE *dosya2=fopen("deneme2.txt","r");
	
	if(dosya!=NULL && dosya2!=NULL)
	{
		int sonuc=dosyalariKarsilastir(dosya,dosya2);
		
		if(sonuc==1)
		{
			printf("Iki dosya birbirinin aynisidir.\n");
		}
		
		else{
			printf("Iki dosya birbirinden farklidir.\n");
		}
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	return 0;
}
