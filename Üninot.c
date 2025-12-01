#include <stdio.h>

int main() { // Başla
    int not1, not2, proje; // İki sınav ve proje notu

    // 1. Kullanıcıdan notları al
    printf("Lutfen iki not ve proje notu giriniz (örn: 70 80 90): ");
    scanf("%d %d %d", &not1, &not2, &proje); // Virgül yerine boşluk ile girilmeli

    // 2. Ortalama hesapla
    int ortalama = (not1 + not2 + proje) / 3;
    printf("Ortalamaniz = %d\n", ortalama);

    // 3. Harf notunu belirle
    if (ortalama < 50)
        printf("AA aldiniz, dersten kaldiniz\n"); // Kaldı
    else if (ortalama >= 50 && ortalama < 70)
        printf("BB aldiniz, dersten gectiniz\n"); // Geçti
    else if (ortalama >= 70 && ortalama < 85)
        printf("CC aldiniz, dersten gectiniz\n"); // Geçti
    else if (ortalama >= 85 && ortalama <= 100)
        printf("AA aldiniz, dersten gectiniz\n"); // Geçti, yüksek başarı
    else
        printf("Notunuz hatali\n"); // 0-100 dışında değer

    return 0; // Bitir
}
