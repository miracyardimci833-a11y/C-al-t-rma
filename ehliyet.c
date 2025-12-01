
#include <stdio.h>

int main() {
    int kisinin_yasi, ehliyet_durumu; // Kullanıcının yaşı ve ehliyet durumu

    // 1. Kullanıcıdan yaş bilgisini al
    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &kisinin_yasi);

    // 2. Kullanıcıdan ehliyet durumunu al
    printf("Ehliyetiniz var mi? Var(1) / Yok(2): ");
    scanf("%d", &ehliyet_durumu);

    // 3. Yaşı kontrol et
    if (kisinin_yasi >= 18) {
        // . Ehliyet durumu kontrolü
        if (ehliyet_durumu == 1) {
            printf("Arac kullanabilirsiniz\n");  // 18 yaş ve ehliyet varsa araç kullanabilir
        } else {
            printf("Surucu kursuna gidin\n");   // 18 yaş var ama ehliyet yoksa kursa yönlendir
        }
    }
    else {
        // . 18 yaşından küçükse araç kullanamaz
        printf("Yasiniz 18'den kucukken arac kullanamazsiniz\n");
    }

    return 0;
}
