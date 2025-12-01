#include <stdio.h>

int main() { // Başla
    int sayi;         // Değişken ata: kullanıcıdan alınan sayı
    int toplam = 0;   // Değişken ata: toplam

    printf("Pozitif sayilar girin (Negatif sayi girince durur):\n");

    scanf("%d", &sayi); // İlk sayıyı al

    while (sayi >= 0) {           // Döngü: sayı pozitif olduğu sürece
        toplam = toplam + sayi;   // Hesapla: toplam = toplam + sayı
        printf("Bir sayi daha girin: ");
        scanf("%d", &sayi);       // Sonraki sayıyı al
    }

    printf("\n--- Sonuc ---\n");
    printf("Girilen pozitif sayilarin toplami: %d\n", toplam); // Sonucu yazdır

    return 0; // Bitir
}
