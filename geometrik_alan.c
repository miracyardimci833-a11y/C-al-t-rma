#include <stdio.h>

int main() { // Başla
    int secim;                       // Değişken ata: kullanıcı seçimi
    float kenar, uzun, kisa, yaricap, alan; // Değişken ata: ölçüler ve alan

    // Menü yazdır
    printf("----- Alan Hesaplama Menusu -----\n"); // Yazdır
    printf("1 - Kare alani\n");                   // Yazdır
    printf("2 - Dikdortgen alani\n");            // Yazdır
    printf("3 - Daire alani\n");                 // Yazdır
    printf("Seciminizi girin: ");               // Yazdır
    scanf("%d", &secim);                        // Değeri ata

    // Seçime göre alan hesaplama
    switch (secim) {
        case 1: // Kare
            printf("Kenar uzunlugunu girin: "); // Yazdır değer al
            scanf("%f", &kenar);               // Değeri ata
            alan = kenar * kenar;              // Hesapla
            printf("Kare alani: %.2f\n", alan); // Yazdır
            break;

        case 2: // Dikdörtgen
            printf("Uzun kenari girin: ");     // Yazdır değer al
            scanf("%f", &uzun);                // Değeri ata
            printf("Kisa kenari girin: ");     // Yazdır değer al
            scanf("%f", &kisa);                // Değeri ata
            alan = uzun * kisa;                // Hesapla
            printf("Dikdortgen alani: %.2f\n", alan); // Yazdır 
            break;

        case 3: // Daire
            printf("Yaricapi girin: ");        // Yazdır
            scanf("%f", &yaricap);             // Değeri ata
            alan = 3.14 * yaricap * yaricap;   // Hesapla
            printf("Daire alani: %.2f\n", alan); // Yazdır
            break;

        default: // Hatalı seçim
            printf("Gecersiz secim yaptiniz.\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}

