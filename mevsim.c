#include <stdio.h>

int main() { // Başla
    int gun; // Girilen gün numarası

    // 1. Kullanıcıdan gün numarasını al
    printf("Gun numarasini giriniz (1-365): ");
    scanf("%d", &gun);

    // 2. Gün numarasının geçerli olup olmadığını kontrol et
    if (gun < 1 || gun > 365) {
        printf("Gecersiz gun numarasi!\n"); // 1-365 arası değilse uyarı
    } 
    else {
        // 3. Gün numarasına göre mevsim belirle
        if (gun >= 1 && gun <= 79) {
            printf("Mevsim: Kis\n"); // 1-79: Kış
        }
        else if (gun >= 80 && gun <= 171) {
            printf("Mevsim: Ilkbahar\n"); // 80-171: İlkbahar
        }
        else if (gun >= 172 && gun <= 263) {
            printf("Mevsim: Yaz\n"); // 172-263: Yaz
        }
        else if (gun >= 264 && gun <= 354) {
            printf("Mevsim: Sonbahar\n"); // 264-354: Sonbahar
        }
        else {
            printf("Mevsim: Kis\n"); // 355-365: Kış (yıl sonu)
        }
    }

    return 0; // Bitir
}


















