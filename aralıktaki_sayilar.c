#include <stdio.h>

int main() { // Başla
    int baslangic, bitis; // Değişken ata: başlangıç ve bitiş sayıları
    int toplam = 0;        // Değişken ata: toplam

    // Başlık yazdır
    printf("--- Belirli Aralık Toplam Hesaplama ---\n"); // Yazdır

    // Kullanıcıdan başlangıç ve bitiş sayısını al
    printf("Baslangic sayisini girin: "); // Yazdır
    scanf("%d", &baslangic);              // Değeri ata

    printf("Bitis sayisini girin: ");     // Yazdır
    scanf("%d", &bitis);                   // Değeri ata

    // Başlangıç > bitiş ise hata
    if (baslangic > bitis) {              // Kontrol et
        printf("Hata! Baslangic sayisi bitisten buyuk olamaz.\n"); // Yazdır
        return 1;                          // Bitir
    }

    // Aralıkta döngü ile toplam hesapla
    for (int i = baslangic; i <= bitis; i++) { // Hesapla
        toplam = toplam + i;                    // Hesapla
    }

    // Sonucu yazdır
    printf("\n----------------------------------------\n"); // Yazdır
    printf("%d ile %d arasindaki tum sayilarin toplami: %d\n", baslangic, bitis, toplam); // Yazdır

    return 0; // Bitir
}
