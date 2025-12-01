#include <stdio.h>

int main() { // Başla
    int sayi, gecici, basamak, toplam = 0; // Değişken ata: sayi, gecici, basamak, toplam

    // Kullanıcıdan sayı al
    printf("Bir sayi girin: "); // Yazdır
    scanf("%d", &sayi);         // Değeri ata

    gecici = sayi;               // Hesapla: sayıyı geçici değişkene ata

    printf("Sayinin basamaklari ters sirada: "); // Yazdır

    // Basamakları ters sırayla yazdır ve toplamını hesapla
    for (; gecici != 0; ) {      
        basamak = gecici % 10;   // Hesapla: son basamağı al
        printf("%d", basamak);   // Yazdır
        toplam += basamak;       // Hesapla: toplamı güncelle
        gecici = gecici / 10;    // Hesapla: son basamağı at
    }

    printf("\nBasamaklarin toplami: %d\n", toplam); // Yazdır

    // Özel sayıyı kontrol et
    if (toplam == sayi) {      
        printf("Bu bir ozel sayi!\n"); // Yazdır
    } else {
        printf("Bu bir normal sayi.\n"); // Yazdır
    }

    return 0; // Bitir
}
