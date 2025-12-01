#include <stdio.h>

int main() {
    int sicaklik, ruzgar_hizi, yagis; // Sicaklik, ruzgar hizi ve yagis durumu

    // 1. Kullanıcıdan sıcaklık, rüzgar hızı ve yağış bilgilerini al
    printf("Lutfen sicakligi giriniz (C): ");
    scanf("%d", &sicaklik);

    printf("Lutfen ruzgar hizini giriniz (km/s): ");
    scanf("%d", &ruzgar_hizi);

    printf("Yagis varsa (1), yoksa (2) giriniz: ");
    scanf("%d", &yagis);

    // 2. Hava koşullarına göre giyim önerisi yap
    if (sicaklik >= 25 && yagis == 2) {
        printf("Tisort ve sort giyebilirsiniz\n");  // Sıcak ve yağış yok
    }
    else if (sicaklik >= 10 && sicaklik <= 24 && ruzgar_hizi >= 35) {
        printf("Ince bir ceket veya ruzgarlik giyebilirsiniz\n"); // Ilık ve rüzgarlı
    }
    else if (sicaklik < 10) {
        printf("Kalin bir mont giyebilirsiniz\n"); // Soğuk hava
    }
    else if (yagis == 1) {
        printf("Yagmurluk giyebilirsiniz\n"); // Yağmur varsa
    }
    else {
        printf("Herhangi bir ozel giyim onerisi yok\n"); // Diğer durumlar
    }

    return 0;
}
