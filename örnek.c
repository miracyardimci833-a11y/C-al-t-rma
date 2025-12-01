#include <stdio.h>

int main() { // Başla
    int sayi;        // Değişken ata: kullanıcıdan alınan sayı
    int toplam = 0;  // Değişken ata: sayıların toplamı
    int adet = 0;    // Değişken ata: girilen sayı adedi

    printf("Pozitif sayilar girin (Negatif sayi girince durur):\n");

    do { // Döngü başla
        printf("Bir sayi girin: ");
        scanf("%d", &sayi); // Kullanıcıdan sayı al

        if (sayi >= 0) {  // Pozitif sayı kontrolü
            toplam += sayi; // Toplama ekle
            adet++;          // Adet sayısını artır
            printf("Anlik toplam: %d, Girilen sayi adedi: %d\n", toplam, adet);
        }

    } while (sayi >= 0); // Negatif sayı girilince döngü durur

    printf("\nNegatif sayi girildi, program sonlaniyor.\n");
    printf("Girilen tum pozitif sayilarin toplami: %d, toplam adet: %d\n", toplam, adet);

    return 0; // Bitir
}
