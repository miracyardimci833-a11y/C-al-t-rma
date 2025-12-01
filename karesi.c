#include <stdio.h>

int main() { // Başla
    int n; // Değişken ata: kullanıcıdan alınacak sayı

    // Kullanıcıdan sayı al
    printf("Bir sayi girin: "); // Yazdır
    scanf("%d", &n);            // Değeri ata
    
    printf("1'den %d'ye kadar olan sayilarin kareleri:\n", n); // Yazdır

    // Döngü ile kareleri hesapla ve yazdır
    for (int i = 1; i <= n; i++) { // Döngü: 1’den n’e
        printf("%d^2 = %d\n", i, i * i); // Hesapla ve yazdır
    }

    return 0; // Bitir
}
