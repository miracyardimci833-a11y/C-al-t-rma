#include <stdio.h>

int main() { // Başla
    int N, i;                // Değişken ata: N (kaç sayı girilecek), i (döngü sayacı)
    float sayi, toplam = 0.0, ortalama; // Değişken ata: sayi (girilen değer), toplam, ortalama

    printf("Kac adet sayi gireceksiniz (N)? "); // Yazdır
    scanf("%d", &N);                             // Değeri ata

    printf("Sayilari teker teker girin:\n");    // Yazdır
    
    // Döngü ile sayıları oku ve toplamını hesapla
    for (i = 1; i <= N; i++) {                // Döngü: 1’den N’e kadar
        printf("%d. sayi: ", i);              // Yazdır
        scanf("%f", &sayi);                   // Değeri ata
        toplam += sayi;                        // Hesapla: toplamı güncelle
    }

    ortalama = toplam / N;                     // Hesapla: ortalama

    // Sonuçları yazdır
    printf("\nGirdiginiz sayilarin toplami: %.2f\n", toplam);   // Yazdır
    printf("Girdiginiz sayilarin ortalamasi: %.2f\n", ortalama); // Yazdır

    return 0; // Bitir
}
