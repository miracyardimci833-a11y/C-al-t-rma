#include <stdio.h>

int main()
{
    // Başla
    int i;

    // 1'den 50'ye kadar sayıları kontrol et
    for(i = 1; i <= 50; i++)
    {
        // Eğer sayı 5'in katı ise
        if(i % 5 == 0)
            printf("Sayiniz 5'in katidir: %d\n", i);
    }

    // Programı bitir
    return 0;
}
