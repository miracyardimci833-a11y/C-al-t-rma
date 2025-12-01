#include <stdio.h>

int main() { // Başla
    int girilenSayi = 1;          // Değişken ata: kullanıcıdan alınacak sayı
    int tekSayilarinToplami = 0;  // Değişken ata: tek sayıların toplamı

    printf("--- Tek Sayilarin Toplami Hesaplayicisi ---\n"); // Yazdır
    printf("Pozitif sayilar giriniz. Cift bir sayi girince islem duracaktir.\n"); // Yazdır
    
    printf("\nLutfen bir sayi girin: "); // Yazdır
    scanf("%d", &girilenSayi);           // Değer ata

    // Döngü: sayı çift olmadığı sürece devam et
    while (girilenSayi % 2 != 0) {
        tekSayilarinToplami = tekSayilarinToplami + girilenSayi; // Hesapla: toplamı güncelle
        printf("Tek bir sayi daha giriniz (Cift sayi sonlandirir): "); // Yazdır
        scanf("%d", &girilenSayi); // Değer ata
    }

    printf("Cift sayi girdiniz, islem sonlandi.\n"); // Yazdır
    printf("Girilen TEK sayilarin toplam degeri: %d\n", tekSayilarinToplami); // Yazdır

    return 0; // Bitir
}
