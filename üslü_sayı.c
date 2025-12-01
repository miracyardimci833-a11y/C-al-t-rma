#include <stdio.h>

int main() { // Başla
    int taban;          // Değişken ata: taban sayısı
    int us;             // Değişken ata: üs
    long long sonuc = 1; // Değişken ata: sonuç
    int i;              // Döngü sayacı

    printf("Taban sayiyi (x) giriniz: "); 
    scanf("%d", &taban); // Kullanıcıdan değer al

    printf("Us sayiyi (y) giriniz (Pozitif tam sayi olmali): ");
    scanf("%d", &us); // Kullanıcıdan değer al

    i = us; // Döngü için i'yi üs olarak ata

    if (us == 0) { 
        sonuc = 1; // x^0 = 1
    } else {
        while (i > 0) { // Döngü ile üs kadar çarp
            sonuc = sonuc * taban; // Hesapla
            i--;                   // Sayaç azalt
        }
    }

    printf("\n--- Sonuc ---\n");
    printf("%d ussu %d = %lld\n", taban, us, sonuc); // Sonucu yazdır

    return 0; // Bitir
}
