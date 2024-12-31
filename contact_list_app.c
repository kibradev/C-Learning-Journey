#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaximumKisi 100
#define MaxUzunluk 50

typedef struct {
    char Ad[MaxUzunluk];
    char Soyad[MaxUzunluk];
    char Telefon[MaxUzunluk];
} Kisi;

Kisi Rehber[MaximumKisi];
int RehberKisiSayi = 0;
int MySecim; 
int SeciliKisi;

int CheckRehber(const char* TelefonNo){
    int FoundNumber = 0;
    for(int i = 0; i < RehberKisiSayi; i++){
        if(strcmp(Rehber[i].Telefon, TelefonNo) == 0) {
            FoundNumber = 1;
            break;
        }
    }
    
    return FoundNumber;
}

void KisiyiSil(int kisi){
    printf("Adlı Kişi Rehberden Silindi.");
}

void RehberIslem(int secim){
    int opsiyon;
    printf("1 - [Kişiyi Sil] \n");
    printf("2 - [Kişiyi Güncelle] \n");
    printf("[İşleminizi Seçin]: ");;
    scanf("%d", &opsiyon);
    switch(opsiyon){
        case 1:
            KisiyiSil(secim);
            break;
        case 2:
            break;
        default: printf("Geçersiz Seçim Yaptınız. \n");
    }
}

int RehberGoster(){
    printf("Kişiler: (%d) \n", RehberKisiSayi);
    if(RehberKisiSayi > 0){
        for(int i = 0; i < RehberKisiSayi; i++){
            printf("[%d] - %s %s - (%d) \n", i+1, Rehber[i].Ad, Rehber[i].Soyad, Rehber[i].Telefon);
        }
        printf("[İşlem Yapmak İstediğiniz Satır Numarasını Girin] : ");
        scanf("%d", &SeciliKisi);
        RehberIslem(SeciliKisi);
    } else {
        printf("Rehberiniz Boş. \n");
        return 0;
    }

    
}

void KisiEkle(){
    if(RehberKisiSayi >= MaximumKisi){
        printf("Rehberiniz Dolu. (%d)", MaximumKisi);
        return;
    }
    
    int Dongum = 1;
    while(Dongum){
        printf("Kişi Adı: ");
        scanf("%s", Rehber[RehberKisiSayi].Ad);
        printf("Kişi Soyadı: ");
        scanf("%s", Rehber[RehberKisiSayi].Soyad);
        printf("Telefon Numarası: ");
        scanf("%d", Rehber[RehberKisiSayi].Telefon);
        if(CheckRehber(Rehber[RehberKisiSayi].Telefon)){
            printf("Bu numara zaten rehberde kayıtlı. \n");
            return;
        }
        printf("%s %s adlı kişi telefon rehberine eklendi. \n", Rehber[RehberKisiSayi].Ad, Rehber[RehberKisiSayi].Soyad);
        RehberKisiSayi++;
        Dongum = 0;
    }
    return;
}

int main(){
    int Dongu = 1;
    while(Dongu){
        printf("<Rehber App> \n");
        printf("1 - Rehberi Görüntüle \n");
        printf("2 - Kişi Ekle \n");
        printf("[İşlem Numaranızı Girin]: ");
        scanf("%d", &MySecim);
        
        switch(MySecim){
            case 1:
                RehberGoster();
                break;
            case 2:
                KisiEkle();
                break;
            case 3:
                printf("Kişi Güncelle: ");
                break;
            case 4:
                printf("Kişi Sil: ");
                break;
            default: 
                printf("Geçersiz Seçim. \n");
        }
    }
    return 0;
}
