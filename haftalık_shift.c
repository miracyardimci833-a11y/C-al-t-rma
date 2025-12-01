#include <stdio.h>
#include <ctype.h> // tolower için

int main() { // Başla
    char gunHarfi; // Değişken ata: haftanın günü ilk harfi

    // Kullanıcıdan haftanın gününün harfini al
    printf("--- Haftalik Calisma Cizelgesi Kontrolu ---\n"); // Yazdır
    printf("Lutfen haftanin bir gununun bas harfini giriniz (P, S, Ç, P, C, H): "); //  değer al
    scanf(" %c", &gunHarfi); // Değeri ata

    gunHarfi = tolower(gunHarfi); // Küçük harfe çevir (hesapla)

    // Sonuçları kontrol et
    printf("\n--- Sonuc ---\n"); // Yazdır
    switch (gunHarfi) {
        case 'p': // Pazartesi veya Perşembe
            printf("Pazartesi, Perşembe: Lütfen ikinci harfi giriniz (PA/PE).\n"); // Yazdır
            break;
        case 's': // Salı
        case 'ç': // Çarşamba
            printf("=> Calisma Saati: 09:00 - 18:00\n"); // Yazdır
            break;
        case 'c': // Cuma veya Cumartesi
            printf("Cuma, Cumartesi: Lütfen ikinci harfi giriniz (CU/CM).\n"); // Yazdır
            break;
        case 'h': // Hafta sonu
            printf("Hafta Sonu izni :)\n"); // Yazdır
            break;
        default: // Geçersiz giriş
            printf("! HATA: Gecersiz harf girdiniz veya sadece ilk harfi kabul etmiyoruz.\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}
