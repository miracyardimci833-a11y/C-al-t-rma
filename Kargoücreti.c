#include <stdio.h>

int main() {
    float kargo_agirlik, kargo_ucreti, kargo_mesafesi; // değişken ata Kargo ağırlığı, ücreti ve mesafesi

    // 1. Kullanıcıdan kargo ağırlığını al
    printf("Lutfen kargo agirligini (kg) giriniz: ");
    scanf("%f", &kargo_agirlik);

    // 2. Kullanıcıdan kargo mesafesini al
    printf("Lutfen kargo mesafesini (km) giriniz: ");
    scanf("%f", &kargo_mesafesi);

    // 3. Mesafeye göre kargo ücreti hesapla
    if (kargo_mesafesi <= 500) {
        kargo_ucreti = kargo_agirlik * 0.5;
        printf("Kargo ucreti: %.2f TL\n", kargo_ucreti); // Mesafe 500 km veya daha az
    }
    else if (kargo_mesafesi > 500 && kargo_mesafesi <= 1000) {
        kargo_ucreti = kargo_agirlik * 0.75;
        printf("Kargo ucreti: %.2f TL\n", kargo_ucreti); // 500-1000 km arasında ise
    }
    else if (kargo_mesafesi > 1000 && kargo_mesafesi <= 2000) {
        kargo_ucreti = kargo_agirlik * 1.0;
        printf("Kargo ucreti: %.2f TL\n", kargo_ucreti); // 1000-2000 km arasında ise
    }
    else if (kargo_mesafesi > 2000) {
        kargo_ucreti = kargo_agirlik * 1.5;
        printf("Kargo ucreti: %.2f TL\n", kargo_ucreti); // 2000 km üzerinde
    }
    else {
        printf("Hatali giris yaptiniz\n"); // Negatif veya geçersiz değerler için yazdır
    }

    return 0;
}

 


