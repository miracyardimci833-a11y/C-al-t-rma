#include <stdio.h>

int main() { // Başla
    int kenar1, kenar2, kenar3; // Üçgenin kenar uzunlukları değişkenleri

    // 1. Kullanıcıdan kenar uzunluklarını al
    printf("Ucgenin birinci kenar uzunlugunu girin: ");
    scanf("%d", &kenar1);

    printf("Ucgenin ikinci kenar uzunlugunu girin: ");
    scanf("%d", &kenar2);

    printf("Ucgenin ucuncu kenar uzunlugunu girin: ");
    scanf("%d", &kenar3);

    printf("\n"); 

    // 2. Üçgen oluşturulabilir mi kontrol et (Üçgen eşitsizliği)
    if ((kenar1 + kenar2 > kenar3) && 
        (kenar1 + kenar3 > kenar2) && 
        (kenar2 + kenar3 > kenar1)) {

        // 3. Üçgen türünü belirle
        if (kenar1 == kenar2 && kenar2 == kenar3) {
            printf("Girdiginiz kenar uzunluklari bir ESKENAR ucgen olusturur.\n"); // Eşkenar yazdır
        } 
        else if (kenar1 == kenar2 || kenar1 == kenar3 || kenar2 == kenar3) {
            printf("Girdiginiz kenar uzunluklari bir IKIZKENAR ucgen olusturur.\n"); // İkizkenar yazdır
        }
        else {
            printf("Girdiginiz kenar uzunluklari bir CESITKENAR ucgen olusturur.\n"); // Çeşitkenar yazdır
        }

    } 
    else {
        printf("HATA: Girdiginiz kenar uzunluklariyla bir UCGEN OLUSTURULAMAZ!\n"); // Üçgen oluşmaz yazdır
    }

    return 0; // Bitir
}
