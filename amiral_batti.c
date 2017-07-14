#include <stdio.h>

/*
NASIL OYNANIR?

DAHA ÖNCEDEN MATRİSE GEMİLERİMİ YERLEŞTİRDİM ARDINDAN KULLANICIDAN 
GEMİLERİMİN YERİNİ BİLMESİNİ İSTEDİM. EĞER KULANICI GEMİLERİMİN OLDUĞU KOORDİNATLARDAN
9 TANESİNİ BİLİRSE KAZANAN O OLUR FAKAT BİLEMEZSE KAZANAN BEN OLURUM.

* 0 0 * 0 0
* 0 * 0 0 *
* 0 0 0 0 * ==> GEMİLERİMİN OLDUĞU MATRİS BU ŞEKİLDE KULLANICIDAN BUNU BİLMESİNİ İSTEYECEĞİM.
0 * * * * 0
0 0 0 0 0 0
* * * 0 * *


(0,0) (1,2) 
(0,3) (1,5)
(1,0) (2,0)
(2,5) (3,1)
(3,2) (3,3)
(3,4) (5,0)
(5,1) (5,2)
(5,4) (5,5)


*/





int main() {
	
	char oyuntahtasi[6][6] = {{'0','0','0','0','0','0'},
	{'0','0','0','0','0','0'},{'0','0','0','0','0','0'},
	{'0','0','0','0','0','0'},{'0','0','0','0','0','0'},
	{'0','0','0','0','0','0'}};
	int satir,sutun;
	int dogru = 0;
	int yanlis = 0;
	int i,j;
	int a;
	
	
	
	for(i = 0; i < 6; i++) { // Oluşturduğum matrisi bastırdım
		
		for(j = 0; j < 6; j++) {
			
			printf("%c ",oyuntahtasi[i][j]);	
			
		}
		printf("\n");
		
		
	}
	
	printf("----------------------------\n");
	
	for(a = 0; a < 20; a++) { // 20 defa bu işlemleri gerçekleştireceğiz
		
		printf("Satir giriniz:"); 
		scanf("%d",&satir);
		
		printf("Sutun giriniz:");
		scanf("%d",&sutun);
		
		
		if(satir >=0 && satir <= 5 && sutun >= 0 && sutun <= 5) {
		
		
		if(satir == 0 && sutun == 0 || satir == 3 && sutun == 2 ||		// Gemilerimin koordinatlarıyla kullanıcının koordinatlarını karşılaştırdık
		satir == 1 && sutun == 2 || satir == 3 && sutun == 3 || 
		satir == 0 && sutun == 3 || satir == 3 && sutun == 4 ||
		satir == 1 && sutun == 5 || satir == 5 && sutun == 0 ||
		satir == 1 && sutun == 0 || satir == 5 && sutun == 1 ||
		satir == 2 && sutun == 0 || satir == 5 && sutun == 2 ||
		satir == 2 && sutun == 5 || satir == 5 && sutun == 4 ||
		satir == 3 && sutun == 1 || satir == 5 && sutun == 5) {
			
			if(oyuntahtasi[satir][sutun] == '*') { // Kullanıcının bu noktayı daha önceden girip girmediğini tespit ettik
				
				printf("Burayi daha onceden denemissiniz\n");
				a -=1; //Yukarıdaki hata verildiğinde işlem sayısının etkilenmemesi için a'dan 1 çıkarttık
					
			}
			
			else {
			
			printf("Buummmm!\n");
			oyuntahtasi[satir][sutun] = '*'; // Kullanıcının doğru bildiği koordinatlara '*' sembolünü yerleştirdik
			dogru +=1; // Oyun sonunda kazananı belirlemek için dogru değişkenini 1 arttırdık
			
			}
			
		}
		
		
		else {
			
			if(oyuntahtasi[satir][sutun] == 'X') { // Kullanıcının bu noktayı daha önceden girip girmediğini tespit ettik
				
				printf("Burayi daha onceden denemissiniz\n");
				a-=1; //Yukarıdaki hata verildiğinde işlem sayısının etkilenmemesi için a'dan 1 çıkarttık
				
			}
			
			else {
			
			
			printf("Bilemedin :(\n");
			oyuntahtasi[satir][sutun] = 'X'; // Kullanıcının yanlış bildiği koordinatlara 'X' sembolünü yerleştirdik
			yanlis +=1;
			
			
			}
			
		}
		
		
		}
		
		else {
			
			printf("Lutfen 0-5 arasi rakam giriniz.\n"); 
			a-=1; //Yukarıdaki hata verildiğinde işlem sayısının etkilenmemesi için a'dan 1 çıkarttık
			
			
		}
		
	
		}
	
	printf("--------------------\n");
	
	if(dogru >= 9) { // Kazananı belirledik
		
		printf("TEBRIKLER KAZANAN SENSIN!\n");
		printf("Dogru sayin: %d\n",dogru);
		printf("Yanlis sayin: %d\n",yanlis);
		
	}
	else {
		
		printf("MAALESEF KAYBETTIN :(\n");
		printf("Dogru sayin: %d\n",dogru);
		printf("Yanlis sayin: %d\n",yanlis);
		
	}
	
	
	printf("--------------------\nSizin Matrisiniz\n");
	
	
	
	for(i = 0; i < 6; i++) { // Kullanıcın matrisini bastırdık
		
		for(j = 0; j < 6; j++) {
			
			printf("%c ",oyuntahtasi[i][j]);
			
			
		}
		printf("\n");
		
		
		
	}
	
	
		
	
	
	
	return 0;
}
