#include <stdio.h>
#include <string.h>
#include <stdlib.h>




typedef struct{
	
	
	float gercekKisim;
	float sanalKisim;
	
}kompleksSayi;




kompleksSayi sayiTopla(kompleksSayi sayi1,kompleksSayi sayi2)
{
	
	kompleksSayi sonuc;
	sonuc.gercekKisim=sayi1.gercekKisim+sayi2.gercekKisim;
	sonuc.sanalKisim=sayi1.sanalKisim+sayi2.sanalKisim;
	return sonuc;
	
	
	
	
}








int main(){
	
	
	kompleksSayi sayi1,sayi2,sonuc;
	
	
	printf("Lutfen ilk sayininin sirasiyla gercek ve sanal kismini giriinZ:");
	scanf("%f%f",&sayi1.gercekKisim,&sayi1.sanalKisim);
	
	printf("Lutfen ikinci sayininin sirasiyla gercek ve sanal kismini giriinZ:");
	scanf("%f%f",&sayi2.gercekKisim,&sayi2.sanalKisim);
	
	
	sonuc=sayiTopla(sayi1,sayi2);
	printf("Sonuc:%.1f+%.1fi",sonuc.gercekKisim,sonuc.sanalKisim);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
