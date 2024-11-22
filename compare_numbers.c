#include <stdio.h>

int main() {
    int Number1, Number2, Number3;
    
    printf("Tam Sayıları Boşluk Bırakarak Girin: ");
    scanf("%d%d%d", &Number1, &Number2, &Number3);
    
    int MaximumValue;
    
    MaximumValue = Number1;
    if(Number2 > MaximumValue){
        MaximumValue = Number2;
    }
    
    if(Number3 > MaximumValue){
        MaximumValue = Number3;
    }
    
    printf("En Büyük Sayı: %d", MaximumValue);

    return 0;
}
