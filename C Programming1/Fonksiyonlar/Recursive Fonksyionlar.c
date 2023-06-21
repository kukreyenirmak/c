#include <stdio.h>
#include <string.h>

int faktoriyelHeapla(int);

int main(){
	
  printf("5! = %d",faktoriyelHesapla(5));
  return 0;
}


int faktoriyelHesapla(int sayi){
	
	if(sayi==1 || sayi==0)
	{
		return 1;
	}
	
	int sonuc=sayi*faktoriyelHesapla(sayi-1);
	return sonuc;
	
	
	
}



