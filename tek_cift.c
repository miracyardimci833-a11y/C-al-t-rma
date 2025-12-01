#include <stdio.h>

int main() { // Başla
    int sayi; // Değişken ata: kullanıcıdan alınacak sayı

    printf("Lutfen bir tam sayi giriniz: "); // Yazdır
    scanf("%d", &sayi); // Değeri ata

    // Hesapla ve kontrol et: sayı çift mi tek mi
    if (sayi % 2 == 0) {
        printf("\nSonuc: %d sayisi CIFT sayidir.\n", sayi); // Yazdır
    } else {
        printf("\nSonuc: %d sayisi TEK sayidir.\n", sayi); // Yazdır
    }

    return 0; // Bitir
}
