#include <stdio.h>

int main() {
    int ogrenciNot;
    int ogrenciSayisi = 10; 
    int ToplamNot = 0;
    printf("Kaç Öğrenci Notunu Hesaplamak İstiyorsunuz ? \n");
    scanf("%d", &ogrenciSayisi);
    
    for (int i = 1; i <= ogrenciSayisi; i++) {
        printf("%d. öğrencinin notunu girin: ", i);
        scanf("%d", &ogrenciNot);
        ToplamNot += ogrenciNot;
    }
    
    float Ortalama = ToplamNot / ogrenciSayisi;
    printf("Sınıfın not ortalaması: %.2f\n", Ortalama);
    return 0;
}
