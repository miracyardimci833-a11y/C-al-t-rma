#include <stdio.h>

int main() { // Başla
    int ay_secimi; // Değişken ata: seçilen ay

    // Kullanıcıdan ayı al
    printf("Lutfen ay seciniz (1=Ocak ... 12=Aralik)\n"); // Yazdır
    scanf("%d", &ay_secimi); // Değeri ata

    // Ay seçimine göre kaç gün olduğunu yazdır
    switch (ay_secimi) { 
        case 1:
            printf("Ocak ayidir ve 31 gundur.\n"); // Yazdır
            break;
        case 2:
            printf("Subat ayidir ve 28 gundur.\n"); // Yazdır
            break;
        case 3:
            printf("Mart ayidir ve 31 gundur.\n"); // Yazdır
            break;
        case 4:
            printf("Nisan ayidir ve 30 gundur.\n"); // Yazdır
            break;
        case 5:
            printf("Mayis ayidir ve 31 gundur.\n"); // Yazdır
            break;
        case 6:
            printf("Haziran ayidir ve 30 gundur.\n"); // Yazdır
            break;
        case 7:
            printf("Temmuz ayidir ve 31 gundur.\n"); // Yazdır
            break;
        case 8:
            printf("Agustos ayidir ve 31 gundur.\n"); // Yazdır
            break;
        case 9:
            printf("Eylul ayidir ve 30 gundur.\n"); // Yazdır
            break;
        case 10:
            printf("Ekim ayidir ve 31 gundur.\n"); // Yazdır
            break;
        case 11:
            printf("Kasim ayidir ve 30 gundur.\n"); // Yazdır
            break;
        case 12:
            printf("Aralik ayidir ve 31 gundur.\n"); // Yazdır
            break;
        default:
            printf("Gecersiz ay secimi yaptiniz! Lutfen 1-12 girin.\n"); // Yazdır
            break;
    }

    return 0; // Bitir
}
