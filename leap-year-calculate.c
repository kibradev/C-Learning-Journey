#include <stdio.h>

int main() {
    int yil;
    char devam;
    
    do {
        printf("Yıl Giriniz: ");
        scanf("%d", &yil);
        
        if ((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0)
            printf("%d Artık Yıldır.\n", yil);
        else
            printf("%d Artık Yıl Değildir.\n", yil);
            
        
        printf("Devam Etmek İster Misiniz ? (E/H)");
        scanf(" %c", &devam);
    } while (devam == 'E' || devam == 'e');
        
    return 0;
}
