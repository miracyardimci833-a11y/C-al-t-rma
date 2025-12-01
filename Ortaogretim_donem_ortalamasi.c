#include <stdio.h>

int main() { // Başla
    // 1. Ders notları için değişkenleri ata
    int fensinav1, fensinav2, fenkanaat1, fenkanaat2, fenproje;
    int turkcesinav1, turkcesinav2, turkcekanaat1, turkcekanaat2, turkceproje;
    int matsinav1, matsinav2, matkanaat1, matkanaat2, matproje;
    int dinsinav1, dinsinav2, dinkanaat1, dinkanaat2, dinproje;
    int secmeli1, secmeli2, secmelikanaat1, secmelikanaat2, secmeliproje1;

    float fenort, turkceort, matort, dinort, secmeliort, ders_agirligiort;

    // 2. Kullanıcıya uyarı ver
    printf("==================================================================\n");
    printf("!! DIKKAT: Lutfen tum notlari 0 ile 100 arasinda giriniz. !!\n");
    printf("!! Gecersiz notlar, Genel Not Ortalamanizin yanlis cikmasina yol acar. !!\n");

    // 3. Ders notlarını sırayla kullanıcıdan al ve ortalamalarını hesapla
    printf("Lutfen FEN dersi notlarini sirayla (S1, S2, K1, K2, Proje) giriniz:\n");
    scanf("%d %d %d %d %d", &fensinav1, &fensinav2, &fenkanaat1, &fenkanaat2, &fenproje);
    fenort = (fensinav1 + fensinav2 + fenkanaat1 + fenkanaat2 + fenproje) / 5.0;

    printf("\nLutfen TURKCE dersi notlarini sirayla (S1, S2, K1, K2, Proje) giriniz:\n");
    scanf("%d %d %d %d %d", &turkcesinav1, &turkcesinav2, &turkcekanaat1, &turkcekanaat2, &turkceproje);
    turkceort = (turkcesinav1 + turkcesinav2 + turkcekanaat1 + turkcekanaat2 + turkceproje) / 5.0;

    printf("\nLutfen MATEMATIK dersi notlarini sirayla (S1, S2, K1, K2, Proje) giriniz:\n");
    scanf("%d %d %d %d %d", &matsinav1, &matsinav2, &matkanaat1, &matkanaat2, &matproje);
    matort = (matsinav1 + matsinav2 + matkanaat1 + matkanaat2 + matproje) / 5.0;

    printf("\nLutfen DIN KULTURU dersi notlarini sirayla (S1, S2, K1, K2, Proje) giriniz:\n");
    scanf("%d %d %d %d %d", &dinsinav1, &dinsinav2, &dinkanaat1, &dinkanaat2, &dinproje);
    dinort = (dinsinav1 + dinsinav2 + dinkanaat1 + dinkanaat2 + dinproje) / 5.0;

    printf("\nLutfen SECMELI dersi notlarini sirayla (S1, S2, K1, K2, Proje) giriniz:\n");
    scanf("%d %d %d %d %d", &secmeli1, &secmeli2, &secmelikanaat1, &secmelikanaat2, &secmeliproje1);
    secmeliort = (secmeli1 + secmeli2 + secmelikanaat1 + secmelikanaat2 + secmeliproje1) / 5.0;

    // 4. Derslerin ağırlıklı ortalamasını hesapla
    ders_agirligiort = (
        (fenort * 4) +      
        (turkceort * 6) +   
        (matort * 5) +      
        (dinort * 3) +      
        (secmeliort * 2)    
    ) / 20.0;

    // 5. Tüm derslerden geçip geçmediğini kontrol et
    int tum_dersler_gecti = (
        fenort >= 50 && 
        turkceort >= 50 && 
        matort >= 50 && 
        dinort >= 50 && 
        secmeliort >= 50
    );

    // 6. Sonuçları ekrana yazdır
    printf("\n--- SONUCLAR ---\n");
    printf("Agirlikli Genel Not Ortalamaniz (GNO): %.2f\n", ders_agirligiort);

    if (ders_agirligiort >= 85.0 && tum_dersler_gecti) {
        printf("\n=> TEBRIKLER! Yuksek Basari ile TAKDIR BELGESI kazandiniz!\n");
    } 
    else if (ders_agirligiort >= 70.0 && tum_dersler_gecti) {
        printf("\n=> Tebrikler! TESEKUR BELGESI kazandiniz!\n");
    }
    else {
        printf("\n=> Maalesef, bu donem belge almaya hak kazanamadiniz.\n");
    }

    printf("==================================================================\n");

    return 0; // Bitir
}
