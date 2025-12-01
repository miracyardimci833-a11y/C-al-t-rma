#include <stdio.h>

int main() { // Başla
    int komut; // Değişken ata: kullanıcı komutu

    // Menü yazdır
    printf("----- Muzik Calar Komutlari -----\n"); // Yazdır
    printf("1 - Oynat\n");             // Yazdır
    printf("2 - Durdur\n");                   // Yazdır
    printf("3 - Sonraki sarki\n");              // Yazdır
    printf("4 - Onceki sarki\n");    // Yazdır
    printf("Komutu girin: ");            // Yazdır
    scanf("%d", &komut);                            // Değeri ata

    // Komut kontrolü
    switch (komut) {
        case 1: 
            printf("Muzik oynatiliyor...\n");       // Yazdır
            break;
        case 2:
            printf("Muzik durduruldu.\n");          // Yazdır
            break;
        case 3:
            printf("Sonraki sarki caliniyor.\n");   // Yazdır
            break;
        case 4:
            printf("Onceki sarki caliniyor.\n");   // Yazdır
            break;
        default:
            printf("Gecersiz komut girdiniz.\n");   // Yazdır
            break;
    }

    return 0; // Bitir
}
