#include <stdio.h>

int main() { // Başla
    int seviye;                 // Değişken ata: müşteri seviyesi
    int indirim_yuzdesi = 0;    // Değişken ata: indirim yüzdesi, başlangıç 0

    // Kullanıcıdan müşteri seviyesini al
    printf("--- Akaryakit Indirim Programi ---\n");  // Yazdır
    printf("Lutfen musteri seviyenizi girin (1, 2, 3 veya 4+): "); // Yazdır
    if (scanf("%d", &seviye) != 1 || seviye < 1) { // Değeri ata ve kontrol et
        printf("Hata: Gecersiz seviye girisi. Program sonlaniyor.\n"); // Yazdır
        return 1; // Bitir
    }

    // Seviye bazında indirim belirle
    switch (seviye) { 
        case 1:
            indirim_yuzdesi = 2; // Hesapla
            break;
        case 2:
            indirim_yuzdesi = 4; // Hesapla
            break;
        case 3:
            indirim_yuzdesi = 7; // Hesapla
            break;
        default:
            indirim_yuzdesi = 10; // Hesapla (4 ve üzeri)
            break;
    }

    // Sonucu ekrana yazdır
    printf("\nSONUC: Seviyeniz %d icin yakit alimlarinizda %d%% indirim uygulanacaktir.\n", seviye, indirim_yuzdesi); // Yazdır

    if (seviye >= 4) {
        printf("🎉 Not: Musteri seviyeniz en yuksek indirim diliminde (%d ve uzeri) yer almaktadir.\n", seviye); // Yazdır
    }

    return 0; // Bitir
}
