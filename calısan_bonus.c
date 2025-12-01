#include <stdio.h>

int main() {
    int calisma_yili;
    float aylik_satis_miktari;    // Kullanıcıdan alınacak aylık satış miktarı
    int bonus_miktari = 0;        // Başlangıçta bonus 0

    int calisma_yili_gecerli = 0;  // Geçerli çalışma yılı
    float aylik_satis_gecerli = 0.0;  // Geçerli aylık satış

    printf("--- PERFORMANS BONUSU HESAPLAMA ---\n"); 

    // 1. Kullanıcıdan çalışma yılı ve aylık satış miktarını al
    printf("Calisma yilinizi girin (0-50 arasi): ");
    scanf("%d", &calisma_yili);

    printf("Aylik satis miktarini girin: ");
    scanf("%f", &aylik_satis_miktari);

    // 2. Çalışma yılını doğrula (0-50 arası)
    if (calisma_yili >= 0 && calisma_yili <= 50) {
        calisma_yili_gecerli = calisma_yili;
    } else {
        printf("\nUYARI: Calisma yili (0-50) araligi disinda. Varsayilan 0 olarak kabul edildi.\n");
        calisma_yili_gecerli = 0;
    }

    // 3. Aylık satış miktarını doğrula (negatif olamaz)
    if (aylik_satis_miktari >= 0) {
        aylik_satis_gecerli = aylik_satis_miktari;
    } else {
        printf("UYARI: Satis miktari negatif olamaz. Varsayilan 0.0 olarak kabul edildi.\n");
        aylik_satis_gecerli = 0.0;
    }

    // 4. Bonus miktarını hesapla
    if (calisma_yili_gecerli >= 5 && aylik_satis_gecerli >= 50000.0) {//he
        bonus_miktari = 2000;   // 5 yıldan fazla ve satış 50k+ ise 2000 TL
    } 
    else if (calisma_yili_gecerli >= 2 && aylik_satis_gecerli >= 20000.0) {
        bonus_miktari = 1000;   // 2-5 yıl ve satış 20k+ ise 1000 TL
    } 
    else if (calisma_yili_gecerli < 2 && aylik_satis_gecerli >= 20000.0) {
        bonus_miktari = 500;    // 2 yıldan az ve satış 20k+ ise 500 TL
    } 
    else {
        bonus_miktari = 0;      // Diğer durumlarda bonus 0
    }

    // 5. Sonuçları ekrana yazdır
    printf("\nCalisan Bilgileri:\n");
    printf("Calisma Yili (Kontrollu): %d\n", calisma_yili_gecerli);
    printf("Aylik Satis (Kontrollu): %.2f\n", aylik_satis_gecerli);
    printf("--------------------------\n");
    printf("Kazanilan Performans Bonusu: %d TL\n", bonus_miktari);

    return 0;//bitir
}

