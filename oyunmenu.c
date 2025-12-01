#include <stdio.h>

int main() { // Başla
    int secim; // Değişken ata: kullanıcının menü seçimi

    // Menü sürekli gösterilsin, çıkış 5 seçildiğinde
    do {
        printf("\n*** HIZLI MENU ***\n"); // Yazdır
        printf("1. Yeni Oyun\n");          // Yazdır
        printf("2. Ayarlar\n");            // Yazdır
        printf("3. Kilavuz\n");            // Yazdır
        printf("4. Bilgi\n");              // Yazdır
        printf("5. Cikis\n");              // Yazdır
        printf("Seciminizi yapin (1-5): "); // Yazdır
        scanf("%d", &secim);               // Değeri ata

        // Hesapla ve yazdır: geçersiz seçim kontrolü
        if (secim < 1 || secim > 5) {
            printf("Hata! Lutfen 1 ile 5 arasinda bir sayi girin.\n"); // Yazdır
        } else {
            printf("Sectiniz: %d\n", secim); // Yazdır
        }

    } while (secim != 5); // Döngü: çıkış 5 seçildiğinde bitir

    printf("Program kapatiliyor...\n"); // Yazdır
    return 0; // Bitir
}

