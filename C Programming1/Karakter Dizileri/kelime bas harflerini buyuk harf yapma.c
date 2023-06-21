#include <stdio.h>
#include <string.h>





int main(){
	
	
	char cumle[50];
	char basharf[5];
	int i=0;
    int j=0;
	
	puts("Bir cumle giriniz:");
	gets(cumle);
	
    cumle[i]=toupper(cumle[i]);
	basharf[j]=cumle[i];
	i++;
	j++;
	while(cumle[i]!='\0')	
	{
		if(cumle[i]==' ')
		{
			i++;
			cumle[i]=toupper(cumle[i]);
			basharf[j]=cumle[i];
			j++;
		}
		
		i++;
	}
	
	puts(cumle);
	puts(basharf);
	
	
	
	
	
	
	
	
	
	return 0;
}

