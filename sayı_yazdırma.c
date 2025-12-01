#include <stdio.h>

int main() { // Başla
    int sayi;      // Değişken ata: kullanıcıdan alınacak sayı
    int toplam = 0; // Değişken ata: toplamı tut

    printf("Pozitif tam sayilar giriniz (Durmak icin negatif bir sayi girin):\n"); // Yazdır

    scanf("%d", &sayi); // Değeri ata

    // Döngü: negatif sayı girilene kadar devam et
    while (sayi >= 0) {
        toplam = toplam + sayi; // Hesapla: toplamı güncelle
        scanf("%d", &sayi);     // Yeni sayı al
    }

    printf("\n--- Sonuc ---\n");
    printf("Girilen pozitif sayilarin toplami: %d\n", toplam); // Yazdır

    return 0; // Bitir
}
