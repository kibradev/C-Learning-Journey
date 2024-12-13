#include <stdio.h>

int main() {
    int ogrenciNot;
    int ogrenciSayisi = 10; 
    int ToplamNot = 0;
    printf("Kaç Öğrenci Notunu Hesaplamak İstiyorsunuz ? \n");
    scanf("%d", &ogrenciSayisi);
    if (ogrenciSayisi > 10){
        printf("10 Dan fazla öğrenci hesaplanamaz. \n");
    } else {
        for (int i = 1; i <= ogrenciSayisi; i++) {
        printf("%d. öğrencinin notunu girin: ", i);
        scanf("%d", &ogrenciNot);
        ToplamNot += ogrenciNot;
        }
        
        float Ortalama = ToplamNot / ogrenciSayisi;
        printf("Sınıfın not ortalaması: %.2f\n", Ortalama);
    }
    
    
    return 0;
}


// With While Loop // 
#include <stdio.h>

int main() {
    int ogrenciNot;
    int ogrenciSayisi = 10; 
    int ToplamNot = 0;
    printf("Kaç Öğrenci Notunu Hesaplamak İstiyorsunuz ? \n");
    scanf("%d", &ogrenciSayisi);
    if (ogrenciSayisi > 10){
        printf("10 Dan fazla öğrenci hesaplanamaz. \n");
    } else {
        int i = 1;
        while(i <= ogrenciSayisi){
            printf("%d. Öğrenci Notunu Girin", i);
            scanf("%d", &ogrenciNot);
            ToplamNot += ogrenciNot;
            i++;
        }
        
        float Ortalama = ToplamNot / ogrenciSayisi;
        printf("Sınıfın not ortalaması: %.2f\n", Ortalama);
    }
    
    
    return 0;
}
