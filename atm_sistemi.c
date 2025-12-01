#include <stdio.h>

int main() { // Başla
    int secim;             
    float bakiye = 77411;  // Başlangıç bakiyesi
    float miktar;

    // 1. Kullanıcıya ATM menüsünü göster
    printf("--- ATM Uygulamasina Hos Geldiniz ---\n");
    printf("Mevcut Bakiyeniz: %.2f TL\n\n", bakiye);

    printf("1. Bakiye Sorgulama\n");
    printf("2. Para Cekme\n");
    printf("3. Para Yatirma\n");
    printf("4. Cikis\n");
    printf("Lutfen bir islem seciniz (1-4): "); //Kullanıcıdan secim al
    scanf("%d", &secim);

    // 2. Kullanıcı seçimine göre işlem yap
    switch (secim) {
        case 1: // Bakiye sorgulama
            printf("\n=> Mevcut Bakiyeniz: %.2f TL\n", bakiye);
            break; 

        case 2: // Para çekme
            printf("\n=> Cekmek istediginiz miktari giriniz: ");
            scanf("%f", &miktar);

            if (miktar > bakiye) {
                printf("! Yetersiz bakiye. Maksimum %.2f TL cekebilirsiniz.\n", bakiye);
            } else if (miktar <= 0) {
                printf("! Gecersiz miktar. Pozitif bir deger giriniz.\n");
            } else {
                bakiye -= miktar; 
                printf("=> Isleminiz basariyla gerceklesti.\n");
                printf("=> Yeni Bakiyeniz: %.2f TL\n", bakiye);
            }
            break;

        case 3: // Para yatırma
            printf("\n=> Yatirmak istediginiz miktari giriniz: "); 
            scanf("%f", &miktar);
            
            if (miktar <= 0) {
                printf("! Gecersiz miktar. Pozitif bir deger giriniz.\n");
            } else {
                bakiye += miktar; 
                printf("=> Isleminiz basariyla gerceklesti.\n");
                printf("=> Yeni Bakiyeniz: %.2f TL\n", bakiye);
            }
            break;

        case 4: // Çıkış
            printf("\nIyi gunler dileriz.\n");
            break;

        default: // Geçersiz seçim
            printf("\n! Gecersiz secim yaptiniz. Lutfen 1 ile 4 arasinda bir deger giriniz.\n");
            break;
    }

    return 0; // Bitir
}
