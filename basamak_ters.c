#include <stdio.h>

int main() { // Başla
    int sayi, basamak, gecici; // Değişken ata: sayi, basamak, gecici

    // Kullanıcıdan sayı al
    printf("Bir sayi girin: "); // Yazdır
    scanf("%d", &sayi);         // Değeri ata

    gecici = sayi;               // Hesapla: sayıyı geçici değişkene ata
    printf("Sayinin basamaklari ters sirada: "); // Yazdır

    // Ters basamakları yazdır
    for (; gecici != 0; ) {      // Döngü: geçici sayı 0 olana kadar
        basamak = gecici % 10;   // Hesapla: son basamağı al
        printf("%d", basamak);   // Yazdır
        gecici = gecici / 10;    // Hesapla: son basamağı at
    }

    printf("\n"); // Yazdır
    return 0;     // Bitir
}
