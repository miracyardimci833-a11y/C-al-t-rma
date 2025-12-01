#include <stdio.h>

int main() { // Başla
    int secim;                 // Değişken ata: kullanıcı seçimi
    double miktar_tl, sonuc_doviz; // Değişken ata: TL miktarı ve dönüştürülen döviz

    // Döviz kurları
    const double KUR_USD = 32.50; // Değişken ata: dolar kuru
    const double KUR_EUR = 35.00; // Değişken ata: euro kuru
    const double KUR_GBP = 40.00; // Değişken ata: sterlin kuru

    // Menü yazdır
    printf("--- Para Birimi Donusturucu ---\n"); // Yazdır
    printf("1. DOLAR (USD)\n");                // Yazdır
    printf("2. EURO (EUR)\n");                 // Yazdır
    printf("3. STERLIN (GBP)\n");              // Yazdır
    printf("------------------------------\n"); // Yazdır

    // Kullanıcıdan TL miktarını al
    printf("Lutfen donusturmek istediginiz miktari (TL) girin: "); // Yazdır
    scanf("%lf", &miktar_tl); // Değeri ata

    // Kullanıcıdan hedef döviz birimini al
    printf("Hangi para birimine donusturmek istiyorsunuz? (1/2/3): "); // Yazdır
    scanf("%d", &secim); // Değeri ata

    // Döviz dönüşümü
    switch (secim) {
        case 1: 
            sonuc_doviz = miktar_tl / KUR_USD; // Hesapla
            printf("\nSONUC: %.2lf TL = %.2lf USD\n", miktar_tl, sonuc_doviz); // Yazdır
            break;
        case 2: 
            sonuc_doviz = miktar_tl / KUR_EUR; // Hesapla
            printf("\nSONUC: %.2lf TL = %.2lf EUR\n", miktar_tl, sonuc_doviz); // Yazdır
            break;
        case 3:
            sonuc_doviz = miktar_tl / KUR_GBP; // Hesapla
            printf("\nSONUC: %.2lf TL = %.2lf GBP\n", miktar_tl, sonuc_doviz); // Yazdır
            break;
        default:
            printf("\nHATA: Gecersiz secim! Lutfen 1, 2 veya 3 girin.\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}
