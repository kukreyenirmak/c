#include <stdio.h>
#include <time.h>
#include <string.h>

#define N 10




void diziyiDoldur(int *dizi)
{
	srand(time(NULL));
	int *ptr;
	
	for(ptr=dizi; ptr<dizi+N; ptr++ )
	{
		*ptr=rand()%100;
	}
}



void diziyiYazdir(int *dizi)
{
	int *ptr;
	printf("Dizi: ");
	for(ptr=dizi; ptr<dizi+N; ptr++)
	{
		printf("%d ",*ptr);
	}
}


void diziyiTerstenYazdir(int *dizi)
{
	printf("\nDizinin Tersten hali: ");
	int *ptr=dizi+N;
    for(; ptr>=dizi; ptr--)	
	{
		printf("%d ",*ptr);
		
		
	}
}



void myStrCat(char *str, char *str2)
{
	char *p1=str;
    while(*p1!='\0') 
	{
		p1++;
	}
	
	char *p2=str2;
	while(*p2)
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
	
}







int main(){
	/*
	int dizi[N];
	diziyiDoldur(dizi);
	diziyiYazdir(dizi);
	diziyiTerstenYazdir(dizi);
	*/
	
	char kullaniciGirisi[]="ogun";
	char kullaniciGirisi2[]="duygu";
	myStrCat(kullaniciGirisi,kullaniciGirisi2);
	puts(kullaniciGirisi);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
