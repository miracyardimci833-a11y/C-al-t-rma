#include <stdio.h>
#include <string.h>

int main() { // Başla
    char sifre[] = "12345"; // Değişken ata: doğru şifre
    char giris[20];          // Değişken ata: kullanıcı girişi

    // Kullanıcı doğru şifreyi girene kadar döngü
    do {
        printf("Sifreyi yaz: ");  // Yazdır
        scanf("%s", giris);       // Değeri ata

        // Hesapla ve yazdır: şifre doğru mu?
        if (strcmp(giris, sifre) != 0) {
            printf("Yanlis oldu tekrar dene\n"); // Yazdır
        }

    } while (strcmp(giris, sifre) != 0); // Döngü: doğru şifre girilene kadar

    printf("Dogru! Giris yapildi\n"); // Yazdır
    return 0; // Bitir
}
