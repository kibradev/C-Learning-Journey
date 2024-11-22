#include <stdio.h>

int main() {
    int OgrenciNot;
    char devam;
    
    do {
        printf("Öğrencinin Notunu Girin: ");
        scanf("%d", &OgrenciNot);
        
        if((OgrenciNot < 90) && (OgrenciNot >= 80))
            printf("Öğrencinin Notu B'dir. \n");
        else if((OgrenciNot < 80) && (OgrenciNot >= 70))
            printf("Öğrencinin Notu C'dir \n");
        else if((OgrenciNot < 70) && (OgrenciNot >= 60))
            printf("Öğrencinin Notu D'dir \n");
        else
            printf("Öğrencinin Notu F'dir \n");
            
        printf("Farklı Not Girmek İster Misiniz: (E/H) \n");
        scanf(" %c", &devam);
    } while (devam == 'E' || devam == 'e');

    return 0;
}
