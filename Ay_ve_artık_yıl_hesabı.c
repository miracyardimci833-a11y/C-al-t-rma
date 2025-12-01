#include <stdio.h>

int main() { // Başla
    int yil, ay, gun; // Yıl, ay ve gün değişkenlerini ata

    // 1. Kullanıcıdan yılı al
    printf("Lutfen yili giriniz: ");
    scanf("%d", &yil);

    // 2. Kullanıcıdan ayı al
    printf("Lutfen ayi giriniz (1-12): ");
    scanf("%d", &ay);

    // 3. Ay numarasına göre gün sayısını belirle
    if (ay == 1 || ay == 3 || ay == 5 || ay == 7 || ay == 8 || ay == 10 || ay == 12) {
        gun = 31; // 31 gün olan aylar
        printf("Girdiginiz ay %d gundur\n", gun);//yazdır
    }
    else if (ay == 4 || ay == 6 || ay == 9 || ay == 11) {
        gun = 30; // 30 gün olan aylar
        printf("Girdiginiz ay %d gundur\n", gun);//yazdır
    }
    else if (ay == 2) { // Şubat ayı
        if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) { 
            gun = 29; // Artık yıl
            printf("Girdiginiz yil artik yildir ve subat ayi %d gundur\n", gun);//yazdır
        } else {
            gun = 28; // Artık yıl değil
            printf("Girdiginiz yil artik yil degildir ve subat ayi %d gundur\n", gun);//yazdır
        }
    }
    else {
        printf("Hata! Gecersiz ay numarasi girdiniz.\n"); // 1-12 dışında ay
    }

    return 0; // Bitir
}
