#include <stdio.h> // Standart girdi/cikti kutuphanesini programa dahil et.

int main() { // BASLA
    int toplam = 0; // Degisken ata: 'toplam'i 0 olarak baslat.
    int sayi;       // Degisken ata: Kullanicinin girdigi sayiyi tutacak 'sayi'.

    // GİRDİ İSTEĞİ
    printf("Pozitif sayilari toplayacagiz. 0 girince duracak.\n"); // Kullaniciya amaci yazdir.

    // DO-WHILE DÖNGÜSÜ (EN AZ BIR KEZ CALISMA GARANTISI)
    do { 
        // DO: Islemi yap
        printf("Bir sayi girin: "); // Ekrana "Sayi gir" yazisini bas.
        scanf("%d", &sayi);         // Klavyeden girilen degeri 'sayi' degiskenine ata.
        
        toplam += sayi;             // Hesapla: Girilen sayiyi mevcut toplama ekle.
        
    } while (sayi != 0); // KOSUL: 'sayi' 0'a esit DEGILSE döngüye devam et.

    // SONUCU GÖSTERME
    printf("Girilen sayilarin toplami: %d\n", toplam); // Nihai toplami ekrana yazdir.

    return 0; // BITIR: Programi basariyla sonlandir.
}