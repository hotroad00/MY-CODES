//C dilinde palindrom sayý yazma
#include <stdio.h>
int main(){
	int sayi,tersi=0,gecici;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	gecici=sayi;
	//sayýnýn tersini bulma
	while(gecici!=0){
		tersi=tersi*10+gecici%10;
		gecici=gecici/10;	
	}
	//palindrom kontrolü
	if(sayi==tersi){
		printf("%d - bir palindrom sayisidir\n",sayi);
	}
	else{
		printf("%d - bir palindrom sayisi degildir\n",sayi);
	}
	
	
	
	
	return 0;
}
