#include <stdio.h>


void merhabaDunya(){
	
	printf("Merhaba Dunya");
	
	
	
}




int main(){
	
	void (*fonkPtr)(void); //fonksiyon işaretçisini tanımladım
	fonkPtr=merhabaDunya;
	(*fonkPtr)();
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
