#include <stdio.h>

int main() { // Başla
    int gizliSayi = 7; // Değişken ata: gizli sayı
    int tahmin;         // Değişken ata: kullanıcının tahmini

    // Tahmin doğru olana kadar döngü
    do {
        printf("Bir sayi tahmin et: "); // Yazdır
        scanf("%d", &tahmin);           // Değeri ata

        // Hesapla ve yazdır: tahmin doğru mu
        if (tahmin != gizliSayi) {
            printf("Yanlis tahmin, tekrar dene!\n"); // Yazdır
        }

    } while (tahmin != gizliSayi); // Döngü: tahmin doğru olana kadar

    printf("Dogru bildin!\n"); // Yazdır
    return 0; // Bitir
}
