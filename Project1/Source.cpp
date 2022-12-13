#include <stdio.h>
#include <stdlib.h>



int main()
{
	int secim, bakiye,ogrenci,tam,seans,toplam,ekstraSecim,ogrenciFiyat,tamFiyat,yeniToplam=0;

bakiye:
	printf("Bakiyenizi giriniz: ");
	scanf_s("%d", &bakiye);
	if (bakiye <= 0) {
		printf("Lutfen 0'dan buyuk bakiye belirleyiniz.\n");
		goto bakiye;
	}
anamenu:
	printf("-----SINEMA--------\n");
	printf("1. Film 1\n");
	printf("2. Film 2\n");
	printf("3. Film 3\n");
	printf("4. Film 4\n");
	printf("5. Film 5\n");
	printf("0. Cikis\n");
	printf("Seciminizi yapiniz:");
	scanf_s("%d", &secim);
	/*printf("Ogrenci mi tam mý?: ");
	scanf_s("%d", &secim2);*/

	switch (secim)  

	{

		case 0: {
			system("CLS");// ekrandaki kodlarý silmeye yarar
			printf("Iyi gunler.");
			break;
		}

		case 1: {
			system("CLS");
		film1:
			printf("-----FILM 1-----\n");
			printf("Film uzunlugu 1 saat 20 dakika\n");
			printf("Konu:Aksiyon\n");
			printf("Bilet satin almak ister misiniz:(0=evet 1=hayir): ");
			scanf_s("%d", &secim);
			if (secim == 0) {
				system("CLS");
			
			seans1:
				printf("----Seanslar-----\n");
				printf("1. 10:30 Seansi\n");
				printf("2. 12:30 Seansi\n");
				printf("3. 14:30 Seansi\n");
				scanf_s("%d", &seans);
				if (seans == 1) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					ogrenciFiyat = ogrenci * 20;
					tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
					//popcorn
				popcorn1:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}

					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn1;
					}
					

					//bakiye kontrol
					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}

				
				}

				else if (seans == 2) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn2:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}

					else if (ekstraSecim == 1) {
						printf("");
					}

					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn2;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 3) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn3:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}

					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn3;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else {
					system("CLS");
					printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
					goto seans1;
				}

			}

			else if (secim == 1) {
				system("CLS");
				printf("Ana menuye yonlendiriliyorsunuz.\n");
				goto anamenu;
			}

			else {
				system("CLS");
				printf("Hatali deger girisi yaptiniz.Lutfen gecerli giris yapiniz.\n");
				goto film1;
			}


			break;
		}

		case 2: {
			system("CLS");
		film2:
			printf("-----FILM 1-----\n");
			printf("Film uzunlugu 1 saat 20 dakika\n");
			printf("Konu:Aksiyon\n");
			printf("Bilet satin almak ister misiniz:(0=evet 1=hayir): ");
			scanf_s("%d", &secim);
			if (secim == 0) {
				system("CLS");
			seans2:
				printf("----Seanslar-----\n");
				printf("1. 10:30 Seansi\n");
				printf("2. 12:30 Seansi\n");
				printf("3. 14:30 Seansi\n");
				scanf_s("%d", &seans);
				if (seans == 1) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn4:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}

					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn4;
					}

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 2) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn5:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn5;
					}
				

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 3) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn6:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn6;
					}
			

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else {
					system("CLS");
					printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
					goto seans2;
				}

				
			}

			else if (secim == 1) {
				system("CLS");
				printf("Ana menuye yonlendiriliyorsunuz.\n");
				goto anamenu;
			}

			else {
				system("CLS");
				printf("Hatali deger girisi yaptiniz.Lutfen gecerli giris yapiniz.\n");
				goto film2;
			}


			break;
		}

		case 3: {
			system("CLS");
		film3:
			printf("-----FILM 2-----\n");
			printf("Film uzunlugu 1 saat 20 dakika\n");
			printf("Konu:Aksiyon\n");
			printf("Bilet satin almak ister misiniz:(0=evet 1=hayir): ");
			scanf_s("%d", &secim);
			if (secim == 0) {
				system("CLS");
			seans3:
				printf("----Seanslar-----\n");
				printf("1. 10:30 Seansi\n");
				printf("2. 12:30 Seansi\n");
				printf("3. 14:30 Seansi\n");
				scanf_s("%d", &seans);
				if (seans == 1) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn7:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn7;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					

					else {
						system("CLS");
						printf("Hatali deger girisi yaptiniz.Lutfen gecerli giris yapiniz.\n");
						goto film1;
					}


				}

				else if (seans == 2) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn8:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn8;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 3) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn9:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn9;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else {
					system("CLS");
					printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
					goto seans3;
				}

				

			}

			else if (secim == 1) {
				system("CLS");
				printf("Ana menuye yonlendiriliyorsunuz.\n");
				goto anamenu;
			}

			else {
				system("CLS");
				printf("Hatali deger girisi yaptiniz.Lutfen gecerli giris yapiniz.\n");
				goto film3;
			}


			break;
		}

		case 4: {
			system("CLS");
		film4:
			printf("-----FILM 1-----\n");
			printf("Film uzunlugu 1 saat 20 dakika\n");
			printf("Konu:Aksiyon\n");
			printf("Bilet satin almak ister misiniz:(0=evet 1=hayir): ");
			scanf_s("%d", &secim);
			if (secim == 0) {
				system("CLS");
			seans4:
				printf("----Seanslar-----\n");
				printf("1. 10:30 Seansi\n");
				printf("2. 12:30 Seansi\n");
				printf("3. 14:30 Seansi\n");
				scanf_s("%d", &seans);
				if (seans == 1) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn10:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn10;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 2) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn11:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn11;
					}

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 3) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn12:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn12;
					}

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else {
					system("CLS");
					printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
					goto seans4;
				}

			}

			else if (secim == 1) {
				system("CLS");
				printf("Ana menuye yonlendiriliyorsunuz.\n");
				goto anamenu;
			}

			else {
				system("CLS");
				printf("Hatali deger girisi yaptiniz.Lutfen gecerli giris yapiniz.\n");
				goto film4;
			}

			break;
		}

		case 5: {
			system("CLS");
		film5:
			printf("-----FILM 1-----\n");
			printf("Film uzunlugu 1 saat 20 dakika\n");
			printf("Konu:Aksiyon\n");
			printf("Bilet satin almak ister misiniz:(0=evet 1=hayir): ");
			scanf_s("%d", &secim);
			if (secim == 0) {
				system("CLS");
			seans5:
				printf("----Seanslar-----\n");
				printf("1. 10:30 Seansi\n");
				printf("2. 12:30 Seansi\n");
				printf("3. 14:30 Seansi\n");
				scanf_s("%d", &seans);
				if (seans == 1) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn13:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn13;
					}
					

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 2) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn14:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn14;
					}

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else if (seans == 3) {
					system("CLS");
					printf("%d. seans icin kac ogrenci kac tam bilet istersiniz?(0 3 seklinde) :", seans);
					scanf_s("%d %d", &ogrenci, &tam);
					int ogrenciFiyat = ogrenci * 20;
					int tamFiyat = tam * 25;
					toplam = ogrenciFiyat + tamFiyat;
					system("CLS");
					printf("-----Sonuc-----\n");
					printf("Ogrenci : %d TL + Tam : %d TL =  %d TL", ogrenciFiyat, tamFiyat, toplam);
					system("CLS");
				popcorn15:
					printf("Popcorn + Cola = 40 TL almak ister misiniz(0=evet 1=hayir)?:");
					scanf_s("%d", &ekstraSecim);
					if (ekstraSecim == 0) {
						yeniToplam = toplam + 40;
						system("CLS");
						printf("Yeni fiyat %d TL + 40 TL = %d TL\n", toplam, yeniToplam);
					}
					else if (ekstraSecim == 1) {
						printf("");
					}
					else {
						system("CLS");
						printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
						goto popcorn15;
					}

					if ((bakiye < toplam) && (bakiye < yeniToplam)) {
						printf("Bakiyeniz bu islem icin yetersizdir.Lutfen bakiyenizi yeniden belirleyiniz...\n");
						goto bakiye;
						system("CLS");

					}
					else if ((bakiye >= toplam) && (bakiye >= yeniToplam)) {
						printf("Iyi seyirler...");
					}


				}

				else {
					system("CLS");
					printf("Hatali deger girdiniz.Lutfen tekrar secim yapiniz.\n");
					goto seans5;
				}

			}

			else if (secim == 1) {
				system("CLS");
				printf("Ana menuye yonlendiriliyorsunuz.\n");
				goto anamenu;
			}

			else {
				system("CLS");
				printf("Hatali deger girisi yaptiniz.Lutfen gecerli giris yapiniz.\n");
				goto film5;
			}

			break;

		}

		default: {
			system("CLS");
			printf("Hatali giris yaptiniz.Lutfen tekrar secim yapiniz.\n");
			goto anamenu;
		}
	
	}
	return 0;

}
