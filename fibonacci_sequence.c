// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a1 = 0;
    int a2 = 1;
    int birSonraki = 0;
    int i = 1;
    int girilenDeger = 1;
    printf("Hesaplanacak Değer Sayısı: ");
    scanf("%d", &girilenDeger);
    printf("Fibonacci Dizisi: ");
    while(i<=girilenDeger){
        printf("%d \n", a1);
        birSonraki = a1 + a2;
        a1 = a2;
        a2 = birSonraki;
        i++;
        
    }
    
    return 0;
}
