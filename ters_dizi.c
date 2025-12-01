#include <stdio.h>
#define BOYUT 5 // Dizi boyutu

int main() { // Başla
    int duz_dizi[BOYUT];    // Değişken ata: orijinal dizi
    int ters_dizi[BOYUT];   // Değişken ata: ters dizi
    int i, j;               

    // Kullanıcıdan dizi elemanlarını al
    printf("5 adet tam sayi giriniz:\n");
    for (i = 0; i < BOYUT; i++) {
        printf("Dizinin %d. elemani: ", i + 1); // Yazdır
        scanf("%d", &duz_dizi[i]);              // Değer ata
    }

    j = BOYUT - 1; // Ters dizinin son indexi

    // Diziyi tersine çevir
    for (i = 0; i < BOYUT; i++) {
        ters_dizi[j] = duz_dizi[i]; // Hesapla: ters diziyi doldur
        j--;                         // Indexi azalt
    }

    printf("\n--- Sonuc ---\n");

    // Orijinal diziyi yazdır
    printf("Duz Dizi (Orijinal): [");
    for (i = 0; i < BOYUT; i++) {
        printf("%d%s", duz_dizi[i], (i == BOYUT - 1) ? "" : ", ");
    }
    printf("]\n");

    // Ters diziyi yazdır
    printf("Ters Dizi:           [");
    for (i = 0; i < BOYUT; i++) {
        printf("%d%s", ters_dizi[i], (i == BOYUT - 1) ? "" : ", ");
    }
    printf("]\n");

    return 0; // Bitir
}
