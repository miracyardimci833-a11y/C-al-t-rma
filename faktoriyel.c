#include <stdio.h>

int main() { // Başla
    int N;                    // Değişken ata: kullanıcıdan alınacak sayı
    long long faktoriyel = 1; // Değişken ata: faktöriyel sonucu
    int i = 1;                // Değişken ata: döngü sayacı

    printf("Faktoriyeli hesaplanacak pozitif bir tam sayi (N) giriniz: "); // Yazdır
    scanf("%d", &N); // Değeri ata

    // Hesapla: negatif sayı kontrolü
    if (N < 0) {
        printf("Hata: Faktoriyel negatif sayilar icin tanimli degildir.\n"); // Yazdır
        return 1; // Bitir
    }

    // Hesapla: 0! özel durumu
    if (N == 0) {
        printf("0! = 1\n"); // Yazdır
        return 0; // Bitir
    }

    // Döngü: 1’den N’e kadar çarp
    while (i <= N) {
        faktoriyel = faktoriyel * i; // Hesapla: faktöriyel çarpımı
        i++; // Bir sonraki sayıya geç
    }

    printf("\n------------------------------\n");
    printf("%d! faktoriyel sonucu: %lld\n", N, faktoriyel); // Yazdır
    return 0; // Bitir
}
