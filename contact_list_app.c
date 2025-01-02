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

int CheckRehber(const char* TelefonNo) {
    for (int i = 0; i < RehberKisiSayi; i++) {
        if (strcmp(Rehber[i].Telefon, TelefonNo) == 0) {
            return 1;
        }
    }
    return 0;
}

void KisiyiSil(int kisi) {
    for (int i = kisi; i < RehberKisiSayi - 1; i++) {
        Rehber[i] = Rehber[i + 1];
    }
    RehberKisiSayi--;
    printf("Kişi rehberden silindi.\n");
}

int KisiyiGuncelle(int kisi){
    int islem;
    char yeniad[50];
    char yenisoyad[50];
    char telefon[50];
    printf("%s %s adlı kişinin hangi verisini güncellemek istiyorsunuz ? \n", Rehber[kisi].Ad, Rehber[kisi].Soyad);
    printf("1 - Ad \n");
    printf("2 - Soyad \n");
    printf("3 - Telefon Numarası \n");
    printf("[İşlem Numarası Girin]: ");
    scanf("%d", &islem);
    switch(islem){
        case 1:
            printf("%s %s adlı kişi için yeni bir ad girin: ", Rehber[kisi].Ad, Rehber[kisi].Ad, Rehber[kisi].Soyad);
            scanf("%s", &yeniad);
            printf("%s %s adlı kişinin adını %s olarak güncellediniz. \n", Rehber[kisi].Ad, Rehber[kisi].Soyad, yeniad);
            strcpy(Rehber[kisi].Ad, yeniad);
            break;
        case 2:
            printf("%s %s adlı kişi için yeni bir soyad girin: ",  Rehber[kisi].Ad, Rehber[kisi].Ad, Rehber[kisi].Soyad);
            scanf("%s", &yenisoyad);
             printf("%s %s adlı kişinin soyadını %s olarak güncellediniz. \n", Rehber[kisi].Ad, Rehber[kisi].Soyad, yenisoyad);
            strcpy(Rehber[kisi].Soyad, yenisoyad);
            break;
        case 3:
            printf("%s %s adlı kişi için yeni bir telefon numarası girin: ");
            scanf("%d", &telefon);
             printf("%s %s adlı kişinin numarasını %d olarak güncellediniz. \n", Rehber[kisi].Ad, Rehber[kisi].Soyad, telefon);
             strcpy(Rehber[kisi].Telefon, telefon);
            break;
        default: printf("Geçersiz Bir Seçim Yaptınız.");
    }
    
    return 0;
}

void RehberIslem(int secim) {
    int opsiyon;
    printf("%s %s adlı kişi için; \n", Rehber[secim].Ad, Rehber[secim].Soyad);
    printf("1 - [Kişiyi Sil] \n");
    printf("2 - [Kişiyi Güncelle] \n");
    printf("[İşleminizi Seçin]: ");
    if (scanf("%d", &opsiyon) != 1) {
        printf("Geçersiz giriş yaptınız. Lütfen bir sayı girin.\n");
        while (getchar() != '\n');
        return;
    }
    
    switch (opsiyon) {
        case 1:
            KisiyiSil(secim);
            break;
        case 2:
            KisiyiGuncelle(secim);
            break;
        default:
            printf("Geçersiz Seçim Yaptınız.\n");
    }
}

void RehberGoster() {
    if (RehberKisiSayi > 0) {
        for (int i = 0; i < RehberKisiSayi; i++) {
            printf("[%d] - %s %s - (%s) \n", i + 1, Rehber[i].Ad, Rehber[i].Soyad, Rehber[i].Telefon);
        }
        int secim;
        printf("[İşlem Yapmak İstediğiniz Satır Numarasını Girin]: ");
        if (scanf("%d", &secim) != 1 || secim < 1 || secim > RehberKisiSayi) {
            printf("Geçersiz seçim.\n");
            while (getchar() != '\n');
            return;
        }
        RehberIslem(secim - 1);
    } else {
        printf("Rehberiniz Boş.\n");
    }
}

void KisiEkle() {
    if (RehberKisiSayi >= MaximumKisi) {
        printf("Rehberiniz Dolu (%d).\n", MaximumKisi);
        return;
    }

    printf("Kişi Adı: ");
    scanf("%s", Rehber[RehberKisiSayi].Ad);
    printf("Kişi Soyadı: ");
    scanf("%s", Rehber[RehberKisiSayi].Soyad);
    printf("Telefon Numarası: ");
    scanf("%s", Rehber[RehberKisiSayi].Telefon);

    if (CheckRehber(Rehber[RehberKisiSayi].Telefon)) {
        printf("Bu numara zaten rehberde kayıtlı.\n");
        return;
    }

    printf("%s %s adlı kişi telefon rehberine eklendi.\n", Rehber[RehberKisiSayi].Ad, Rehber[RehberKisiSayi].Soyad);
    RehberKisiSayi++;
}

int main() {
    int Dongu = 1;
    while (Dongu) {
        printf("<Rehber App> \n");
        printf("1 - Rehberi Görüntüle \n");
        printf("2 - Kişi Ekle \n");
        printf("0 - Çıkış Yap \n");
        printf("[İşlem Numaranızı Girin]: ");
        int MySecim;
        if (scanf("%d", &MySecim) != 1) {
            printf("Geçersiz giriş.\n");
            while (getchar() != '\n');
            continue;
        }
        switch (MySecim) {
            case 1:
                RehberGoster();
                break;
            case 2:
                KisiEkle();
                break;
            case 0:
                Dongu = 0;
                printf("Çıkış yapılıyor...\n");
                break;
            default:
                printf("Geçersiz Seçim.\n");
        }
    }
    return 0;
}
