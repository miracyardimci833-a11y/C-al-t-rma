
#include <stdio.h>

int main() { // Başla
    printf("--- 1'den 10'a Kadar Carpim Tablosu ---\n\n"); // Yazdır

    // Satırlar için döngü
    for (int i = 1; i <= 10; i++) { // Döngü: 1’den 10’a
        // Sütunlar için döngü
        for (int j = 1; j <= 10; j++) { // Döngü: 1’den 10’a
            printf("%4d", i * j); // Hesapla ve yazdır
        }
        printf("\n"); // Satır bitince alt satıra geç
    }

    printf("\nTablo olusturma islemi tamamlandi.\n"); // Yazdır

    return 0; // Bitir
}
