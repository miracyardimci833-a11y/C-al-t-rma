#include <stdio.h>

int main() { // Başla
    int sayi;                  // Değişken ata: kullanıcıdan alınan sayı
    int toplam = 0;            // Değişken ata: sayıların toplamı
    int sayac = 0;             // Değişken ata: kaç sayı girildiğini say
    int en_buyuk, en_kucuk;    // Değişken ata: en büyük ve en küçük sayı

    printf("Pozitif sayilar girin (Negatif sayi girince durur):\n");

    scanf("%d", &sayi);        // İlk sayıyı al

    if (sayi < 0) {            // İlk sayı negatifse programı bitir
        printf("Negatif sayi girildi. Program sonlaniyor.\n");
        return 0;               // Bitir
    }

    en_buyuk = sayi;            // İlk sayı en büyük ve en küçük sayı olarak ata
    en_kucuk = sayi;

    while (sayi >= 0) {         // Döngü: sayı pozitif olduğu sürece
        toplam += sayi;         // Toplamı hesapla
        sayac++;                // Sayacı arttır

        if (sayi > en_buyuk) {  // En büyük sayı kontrolü
            en_buyuk = sayi;
        }
        if (sayi < en_kucuk) {  // En küçük sayı kontrolü
            en_kucuk = sayi;
        }

        printf("Bir sayi daha girin: ");
        scanf("%d", &sayi);     // Yeni sayıyı al
    }

    // Sonuçları yazdır
    printf("\n--- Sonuclar ---\n");
    printf("Girilen sayilarin toplamı: %d\n", toplam);
    printf("Girilen sayilarin ortalamasi: %.2f\n", (float)toplam / sayac);
    printf("En buyuk sayi: %d\n", en_buyuk);
    printf("En kucuk sayi: %d\n", en_kucuk);

    return 0; // Bitir
}
