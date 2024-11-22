#include <stdio.h>

int main() {
    int SozluNot;
    int YaziliNot;
    
    printf("Öğrencinin Yazılı Notunu Girin: ");
    scanf("%d", &YaziliNot);
    printf("Öğrencinin Sözlü Notunu Girin: ");
    scanf("%d", &SozluNot);
    
    YaziliNot > 50 && SozluNot > 50 ? printf("Öğrenci Dersten Geçmiştir.") : printf("Öğrenci Sınavdan Kalmıştır.");

    return 0;
}
