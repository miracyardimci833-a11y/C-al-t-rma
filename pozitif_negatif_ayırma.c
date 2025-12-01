#include <stdio.h>

int main() { // Başla
    int n, sayi;            // Değişken ata: n (kaç sayı girilecek), sayi (kullanıcının girdiği sayı)
    int pozitif = 0, negatif = 0; // Değişken ata: pozitif ve negatif sayaçları

    printf("Kac sayi girilecek? "); // Yazdır
    scanf("%d", &n);                 // Değeri ata

    // Kullanıcıdan n sayı al ve pozitif/negatif say
    for (int i = 1; i <= n; i++) {       // Döngü: 1’den n’e kadar
        printf("%d. sayiyi girin: ", i); // Yazdır
        scanf("%d", &sayi);              // Değeri ata

        // Hesapla: pozitif mi negatif mi?
        if (sayi > 0) {
            pozitif++;                    // Pozitif sayacı artır
        } else if (sayi < 0) {
            negatif++;                    // Negatif sayacı artır
        }
    }

    // Sonuçları yazdır
    printf("Pozitif sayi adedi: %d\n", pozitif); // Yazdır
    printf("Negatif sayi adedi: %d\n", negatif); // Yazdır

    return 0; // Bitir
}
