#include <stdio.h>
#include <time.h>
#include <stdlib.h>



	int diziKarakterSay(char kullaniciGirisi[]){
		
	char karakterler[26];// max kullanýlabilecek karakterler
	int i,j;// i ilk döngüm (kullanýcýGirisi),j ikinci döngüm(karakterler ici)
	
	
	for(i=0; i<26; i++)	
		{
			karakterler[i]='$';//bos mu degil mi bunu sorgulamak icin
		}
		i=0;
		while(kullaniciGirisi[i]!='\0')
	    {
	    	j=0;
	    	while(1)
	    	{
	    		if(karakterler[j]=='$')  //e b e
	    		{                        //e b $
	    			karakterler[j]=kullaniciGirisi[i];
	    			break;
				}
	    		else if(karakterler[j]==kullaniciGirisi[i])
	    		{
	    			break;
				}
	    		j++;
			}
	    	i++;
		}
	
	for(i=0; i<26; i++)
	{
		if(karakterler[i]=='$'){
			break;
		}
	}
	
	
	return i;
	
	/*
	
	o i a i o -->>>
	o i a $ $
	
	*/
	
	}











int main(){
	
	
	
	
	int kacAdet=diziKarakterSay("emirhanazgun");
	
	printf("Girilen stringde %d adet ozel karakter vardir.",kacAdet);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



