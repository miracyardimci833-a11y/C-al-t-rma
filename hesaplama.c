#include <stdio.h>

int main() {
    char secim;
    float sayi1, sayi2, sonuc; // Birinci sayı, ikinci sayı ve sonuç

    // 1. Kullanıcıdan iki sayı al
    printf("Lutfen birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%f", &sayi2);

    // 2. Kullanıcıdan işlem seçimi al (+, -, *, /)
    printf("Lutfen yapmak istediginiz islemi secin (+, -, *, /): ");
    scanf(" %c", &secim); 

    // 3. İşleme göre hesaplama yap
    if (secim == '+') {
        sonuc = sayi1 + sayi2;
        printf("Sonucunuz: %.2f\n", sonuc); // Toplama
    } 
    else if (secim == '-') {
        sonuc = sayi1 - sayi2;
        printf("Sonucunuz: %.2f\n", sonuc); // Çıkarma
    } 
    else if (secim == '*') {
        sonuc = sayi1 * sayi2;
        printf("Sonucunuz: %.2f\n", sonuc); // Çarpma
    } 
    else if (secim == '/') {
        if (sayi2 != 0) { 
            sonuc = sayi1 / sayi2;
            printf("Sonucunuz: %.2f\n", sonuc); // Bölme
        } else {
            printf("Hata: Sifira bolme islemi yapilamaz!\n"); // Sıfıra bölme kontrolü
        }
    } 
    else {
        printf("Hata: Gecersiz islem secimi yaptiniz.\n"); // Yanlış işlem seçimi
    }

    return 0;
}
