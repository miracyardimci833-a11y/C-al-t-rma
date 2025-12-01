#include <stdio.h>

int main() { // Başla
    int sayi;       // Değişken ata: kullanıcıdan alınacak sayı
    int gecici;     // Değişken ata: sayıyı geçici olarak saklamak için

    // Kullanıcıdan sayı al
    printf("Bir sayi girin: "); // Yazdır
    scanf("%d", &sayi);         // Değeri ata

    gecici = sayi;               // Hesapla: geçici değişkene ata
    printf("%d sayisinin asal carpanlari: ", sayi); // Yazdır

    // Asal çarpanları bul
    for (int i = 2; i <= gecici; i++) { // Döngü ile 2'den başlayarak kontrol et
        int sayac = 0;                 // Değişken ata: i sayısının üssü
        while (gecici % i == 0) {      // Hesapla: i ile bölünebildiği sürece
            gecici = gecici / i;       // Hesapla: böl ve yeni değer ata
            sayac++;                   // Hesapla: üs artır
        }
        if (sayac > 0) {               // Eğer üs 0'dan büyükse
            printf("%d^%d ", i, sayac); // Yazdır
        }
    }

    printf("\n"); // Yazdır
    return 0;     // Bitir
}
