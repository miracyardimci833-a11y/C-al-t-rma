#include <stdio.h>

int main() { // Başla
    char renk_secimi; // Değişken ata: kullanıcı renk harfi

    // Kullanıcıdan renk harfini al
    printf("--- Basit Renk Tanima ---\n"); // Yazdır
    printf("Bir harf girin (K, M, Y, S): "); // Yazdır
    scanf(" %c", &renk_secimi); // Değeri ata

    // Renk kontrolü
    switch (renk_secimi) {
        case 'K': // Kırmızı
        case 'k':
            printf("Secilen renk: Kirmizi\n"); // Yazdır
            break;
        case 'M': // Mavi
        case 'm':
            printf("Secilen renk: Mavi\n"); // Yazdır
            break;
        case 'Y': // Yeşil
        case 'y':
            printf("Secilen renk: Yesil\n"); // Yazdır
            break;
        case 'S': // Sarı
        case 's':
            printf("Secilen renk: Sari\n"); // Yazdır
            break;
        default: // Geçersiz harf
            printf("Gecersiz veya taninmayan harf.\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}
