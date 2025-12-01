#include <stdio.h>
#include <ctype.h> 

int main() {
    // basla: Programın ana fonksiyonu başlıyor
    float s1, s2;  // degisken ata: Toplanacak iki sayıyı saklamak için değişkenler
    char onay;     // degisken ata: Kullanıcının devam etmek isteyip istemediğini saklamak için

    do {
        // basla: Kullanıcıdan veri alıp işlemleri tekrar etmek için döngü başlıyor
        printf("\n--- Toplama Islemi ---\n");

        // kullaniciya sor: İlk sayıyı al
        printf("Ilk sayiyi girin: ");
        scanf("%f", &s1);

        // kullaniciya sor: İkinci sayıyı al
        printf("Ikinci sayiyi girin: ");
        scanf("%f", &s2);
        
        // hesapla ve yazdir: Toplamı ekrana yazdır
        printf("Toplam: %.2f\n", s1 + s2);
        
        // kullaniciya sor: Devam etmek isteyip istemediğini al
        printf("Devam etmek istiyor musunuz? (E/H): ");
        scanf(" %c", &onay); 
        onay = tolower(onay); // kontrol kolaylığı için harfi küçük yap

        // kontrol et: Eğer kullanıcı 'e' derse döngü devam edecek

    } while (onay == 'e'); // dongu sonu

   
    printf("\nIslemler sonlandirildi. Gorusmek uzere.\n");
    return 0; // bitir.
}
