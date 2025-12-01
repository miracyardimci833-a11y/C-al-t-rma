C#include <stdio.h>

int main() { // Başla
    float sayi1, sayi2; // Değişken ata: kullanıcıdan alınacak sayılar
    int secim;           // Değişken ata: kullanıcı seçimi
    float sonuc;         // Değişken ata: işlem sonucu

    // Kullanıcıdan iki sayı al
    printf("Lutfen iki adet sayi giriniz: "); // Yazdır
    scanf("%f %f", &sayi1, &sayi2);          // Değeri ata

    // İşlem menüsünü yazdır
    printf("\n--- ISLEMLER ---\n");           // Yazdır
    printf("1: Toplama (+)\n2: Carpma (*)\n3: Cikartma (-)\n4: Bolme (/)\n"); // Yazdır
    printf("Lutfen bir islem numarasi secin (1-4): "); // Yazdır
    scanf("%d", &secim);                       // Değeri ata

    // Switch ile işlem seçimi ve hesaplama
    switch(secim) { 
        case 1: // Toplama
            sonuc = sayi1 + sayi2;           // Hesapla
            printf("Sonuc: %.2f + %.2f = %.2f\n", sayi1, sayi2, sonuc); // Yazdır
            break; 
        case 2: // Çarpma
            sonuc = sayi1 * sayi2;           // Hesapla
            printf("Sonuc: %.2f * %.2f = %.2f\n", sayi1, sayi2, sonuc); // Yazdır
            break;
        case 3: // Çıkarma
            sonuc = sayi1 - sayi2;           // Hesapla
            printf("Sonuc: %.2f - %.2f = %.2f\n", sayi1, sayi2, sonuc); // Yazdır
            break;
        case 4: // Bölme
            if (sayi2 != 0) {                // Hesapla (sıfıra bölme kontrolü)
                sonuc = sayi1 / sayi2;      
                printf("Sonuc: %.2f / %.2f = %.2f\n", sayi1, sayi2, sonuc); // Yazdır
            } else { 
                printf("Hata: 0'a bolme islemi yapilamaz!\n"); // Yazdır
            }
            break;
        default: // Hatalı seçim
            printf("Hata: Gecersiz islem secimi!\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}
