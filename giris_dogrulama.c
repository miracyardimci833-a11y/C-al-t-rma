#include <stdio.h>

int main() { // Başla
    int puan; // Değişken ata: kullanıcı puanı

    printf("Lutfen 1 ile 10 arasinda bir puan giriniz.\n"); // Yazdır
    printf("Puaniniz: ");
    scanf("%d", &puan); // Değeri ata

    // Döngü: puan geçerli değilse tekrar sor
    while (puan < 1 || puan > 10) { 
        printf("Gecersiz giris! Puan 1 ile 10 arasinda olmalidir.\n"); // Yazdır
        printf("Tekrar giris yapin: ");
        scanf("%d", &puan); // Değeri ata
    }

    printf("\nDogru giris yapildi. Kaydedilen puan: %d\n", puan); // Yazdır

    return 0; // Bitir
}
