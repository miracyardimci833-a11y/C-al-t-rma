#include <stdio.h>

int main() { // Başla
    int islem_kodu;       // Değişken ata: işlem kodu
    double deger, sonuc;   // Değişken ata: dönüştürülecek değer ve sonuç

    // Kullanıcıdan değeri al
    printf("Dönüştürmek istediğiniz sayisal değeri girin: "); // Yazdır
    scanf("%lf", &deger); // Değeri ata

    // İşlem seçeneklerini göster
    printf("\nYapilacak işlemi seçin:\n"); // Yazdır
    printf("1. Metre -> Santimetre\n");   // Yazdır
    printf("2. Metre -> Kilometre\n");    // Yazdır
    printf("3. Santimetre -> Metre\n");   // Yazdır
    printf("İşlem Kodunu Girin (1-3): "); // Yazdır
    scanf("%d", &islem_kodu);             // Değeri ata

    // İşlem koduna göre dönüştürme
    switch (islem_kodu) {
        case 1:
            sonuc = deger * 100.0;                    // Hesapla
            printf("\n%.3lf m = %.3lf cm\n", deger, sonuc); // Yazdır
            break;
        case 2:
            sonuc = deger / 1000.0;                   // Hesapla
            printf("\n%.3lf m = %.3lf km\n", deger, sonuc); // Yazdır
            break;
        case 3:
            sonuc = deger / 100.0;                    // Hesapla
            printf("\n%.3lf cm = %.3lf m\n", deger, sonuc); // Yazdır
            break;
        default:
            printf("\nHata! Gecersiz işlem kodu.\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}
