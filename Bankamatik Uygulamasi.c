#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int bakiye;
int menu (){
	system("cls");
	printf("\nKullanilabilir Bakiyeniz:%d TL\n\n",bakiye);
	int secim;
	printf("\n Bankacilik   Islemleri  Sunlardir\n\n");
	printf("\t1-Para Cek \n");
	printf("\t2-Para Yatir \n");
	printf("\t3-Fatura Yatir \n");
	printf("\t4-Havale/EFT \n");
	printf("\t5-Cikis \n\n\n");
	printf("Lutfen Yapmak Istediginiz Islemi Belirtiniz:");  sleep(3);
	scanf("%d",&secim);
	return secim;

}

void paraCek()
{
	int miktar;
	printf("Miktar:"); scanf("%d",&miktar);
	printf("Isleminiz Gerceklestiriliyor.....\n"); sleep(2);
	if(bakiye<miktar)
	{
		printf("Bakiye Yetersiz \n");
	}
	else{
		bakiye-=miktar;
		printf("Para Cekme Islemi Basarili\n"); sleep(2);
		printf("Paranizi Almayi Unutmayiniz\n"); sleep(2);
	}
	printf("Ana Menuye Yonlendiriliyorsunuz....\n"); sleep(2);
	
}

void paraYatir()
{
	int miktar;
	printf(" Yatiracaginiz Miktari Giriniz ve Paranizi Giris Bolumune Yerlestiriniz :"); scanf("%d",&miktar);
		printf("Isleminiz Gerceklestiriliyor.....\n"); sleep(2);
		bakiye+=miktar;
	
		printf("Para Yatirma Islemi Basariyla Gerceklestirildi\n"); sleep(2);
	
		printf("Ana Menuye Yonlendiriliyorsunuz....\n"); sleep(2);
	
}

void faturaYatir()
{
	int miktar,secim,numara;
	printf("1-Elektrik\n");
	printf("2-Su\n");
	printf("3-Dogalgaz\n");
	printf("4-Telefon\n");
	scanf("%d",&secim);
	if(secim<1||secim>4){
		printf("Hatali Secim Yaptiniz\n");
	}
	else{
		printf("Fatura No:"); scanf("%d",&numara); sleep(2);
		miktar=rand() %100 + 20;
		printf("A......S.....Kisisine Ait Fatura Bedeli %d TL\n",miktar);
		printf("1-Odemeyi Onayliyorum\n "); scanf("%d",&secim); sleep(2);
		if(secim!=1){
			printf("Islem Iptal Edildi...\n");
			
		}
		else{
			bakiye-=miktar;
			printf(" Fatura Odeme Islemi Basariyla Gerceklestirilmistir.\n"); sleep(2);
		}
		printf("Ana Menuye Yonlendiriliyorsunuz.....\n"); sleep(2);
	}
}
	
	void HavaleEFT()
{
	int miktar,iban;
	printf("Havale Yapilacak Kisinin IBAN no:");  scanf("%d",&iban);
	printf("Havale Yapacaginiz Miktar(TL):"); scanf("%d",&miktar);
	 
	if(bakiye<miktar)
	{
		printf(" Yetersiz bakiye  \n");
	}
	else{
		bakiye-=miktar;
		printf("Havale/EFT  Isleminiz Gerceklestiriliyor..... \n"); sleep(2);
		printf("Havale/EFT Islemi Basariyla Gerceklestirilmistir\n"); sleep(2);
	}
	printf("Ana Menuye Yonlendiriliyorsunuz....\n"); sleep(2);
	
}

int main(){
	int password,i=0;
	printf("Sifrenizi Giriniz:"); scanf("%d",&password);
	while(password!=1244){
		printf("Hatali Sifre Girdiniz,Sifrenizi Giriniz:");
		scanf("%d",&password);
		if(i==3){
			printf("Kartiniz Kilitlenmistir \n");
			printf("Lutfen Musteri Hizmetleri Ile Iletisime Geciniz\n");
			return 0;
		}
		i++;
	}
	printf("\n\nGiris Basarili Mobil Bankaciliga Hosgeldiniz\n\n"); sleep(3);
	srand(time(0));
	bakiye=rand() % 900 + 100 ;
	int secim;
	while(1)
	{
	secim=menu();
	switch (secim)
	
	{
		case 1:paraCek(); break;
		case 2:paraYatir(); break;
		case 3:faturaYatir(); break;
		case 4:HavaleEFT(); break;
		case 5:printf("Kartinizi Almayi Unutmayiniz....\n"); return 0;
		default:printf("Hatali Secim Yaptiniz!!\n"); sleep(3);
		}	
	}
		
	
	
	return 0;
}
