#include <stdio.h>

int main() { // Başla
    int a, b, c, i; // Değişken ata: a ve b Fibonacci ilk iki terim, c geçici değişken, i döngü sayacı
    a = 1;          // Hesapla: ilk terim
    b = 1;          // Hesapla: ikinci terim

    // Fibonacci serisini hesapla ve yazdır
    for(i = 1; i <= 8; i++) { // Döngü: 8 terim için
        printf("%d\n", a);    // Yazdır: mevcut terim
        c = a + b;            // Hesapla: sonraki terim
        a = b;                // Hesapla: a'yı b yap
        b = c;                // Hesapla: b'yi yeni terim yap
    }

    return 0; // Bitir
}
