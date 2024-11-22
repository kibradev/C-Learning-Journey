#include <stdio.h>

int main() {
    
    int myValue;
    
    printf("Lütfen 1 ve 5 bir sayı girin: ");
    scanf("%d", &myValue);
    
    switch(myValue){
        case 1:
            printf("Değeriniz 1 \n");
            break;
        case 2: 
            printf("Değeriniz 2 \n");
            break;
        case 3: 
            printf("Değeriniz 3 \n");
            break;
        case 4: 
            printf("Değeriniz 4 \n");
            break;
        case 5:
            printf("Değeriniz 5 \n");
            break;
        default: printf("Değerleriniz 1 ve 5 Arasında Değildir");
    }

    return 0;
}
