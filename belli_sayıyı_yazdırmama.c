
#include <stdio.h>
#include <stdlib.h>

int main() { // Başla
    int i;    // Değişken ata: döngü sayacı
    i = 1;    // Başlat: i = 1

    // Döngü: 1’den 20’ye kadar sayıları kontrol et
    while(i <= 20) { 
        // Hesapla: sayı çift mi ve 14 değil mi?
        if(i % 2 == 0 && i != 14) { 
            printf(" %d", i); // Yazdır: sayıyı ekrana yaz
        }
        i++; // Bir sonraki sayıya geç
    }

    return 0; // Bitir
}
