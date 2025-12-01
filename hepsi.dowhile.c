#include <stdio.h>

int main() { // Başla
    int sayi;                  // Değişken ata: kullanıcıdan alınan sayı
    int toplam = 0;            // Değişken ata: sayıların toplamı
    int sayac = 0;             // Değişken ata: kaç sayı girildiğini say
    int en_buyuk, en_kucuk;    // Değişken ata: en büyük ve en küçük sayı

    printf("Pozitif sayilar girin (Negatif sayi girince durur):\n");

    do {                        // Döngü başla
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);     // Kullanıcıdan sayıyı al

        if (sayi >= 0) {        // Pozitif sayı kontrolü
            toplam += sayi;     // Toplamı güncelle
            sayac++;            // Sayacı arttır

            if (sayac == 1) {   // İlk pozitif sayı ise
                en_buyuk = sayi;
                en_kucuk = sayi;
            } else {
                if (sayi > en_buyuk) en_buyuk = sayi;
                if (sayi < en_kucuk) en_kucuk = sayi;
            }
        }
    } while (sayi >= 0);        // Negatif sayı girilince döngü durur

    if (sayac == 0) {           // Hiç pozitif sayı girilmediyse
        printf("Hiç pozitif sayi girilmedi.\n");
    } else {                    // Sonuçları yazdır
        printf("\n--- Sonuclar ---\n");
        printf("Girilen sayilarin toplami:  %d\n", toplam);
        printf("Girilen sayilarin ortalamasi: %.2f\n", (float)toplam / sayac);
        printf("En buyuk sayi: %d\n", en_buyuk);
        printf("En kucuk sayi: %d\n", en_kucuk);
    }

    return 0; // Bitir
}
