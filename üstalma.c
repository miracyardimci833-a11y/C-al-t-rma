#include <stdio.h>

int main()  {

    // Başla
    // Değişkenleri tanımla
    int a, b, i = 0;
    long long sonuc = 1;

    // Kullanıcıdan taban değerini al
    printf("Taban: ");
    scanf("%d", &a);

    // Kullanıcıdan üs değerini al
    printf("Üs: ");
    scanf("%d", &b);

    // Döngü başlat
    // 'b' kadar 'a'yı 'sonuc' ile çarp
    do {
        sonuc *= a;  // sonuc = sonuc * a
        i++;         // sayacı bir artır
    } while (i < b); // i, b'den küçük olduğu sürece devam et

    // Sonucu ekrana yazdır
    printf("%d^%d = %lld", a, b, sonuc);

    // Programı bitir
    return 0;
}
