#include <stdio.h>
#include <stdlib.h>

void transferPulsa()
{
    printf("Masukan nomor tujuan\nContoh:081xxx\n");
    char nomor[20];
    scanf("%s", nomor);
    system("cls");

    printf("Pulsa anda saat ini Rp78000\n");
    printf("Masukan nominal pengiriman\nContoh:10000\n");
    char nominal[20];
    scanf("%s", nominal);
    system("cls");

    if (atoi(nominal) > 78000)
    {
        printf("Pengiriman gagal, pulsa tidak mencukupi");
    }
    else
    {
        printf("Pengiriman berhasil\n");
        printf("Pulsa anda saat ini Rp%d\n", 78000 - atoi(nominal));
    }
}

int main(int argc, char const *argv[])
{
    int menu;
    printf("Mau iphone 13? hubungi 875*2#\n");
    printf("1. Transfer pulsa\n");
    printf("2. Minta pulsa\n");
    printf("3. Auto TP\n");
    printf("4. List outo TP\n");
    printf("5. Cek kupon undian\n");
    printf("Pilih layanan: ");
    scanf("%d", &menu);

    system("cls");
    switch (menu)
    {
    case 1:
        printf("Transfer pulsa\n");
        transferPulsa();
        break;
    case 2:
        printf("Minta pulsa\n");
        break;
    case 3:
        printf("Auto TP\n");
        break;
    case 4:
        printf("List outo TP\n");
        break;
    case 5:
        printf("Cek kupon undian\n");
        break;
    default:
        printf("Layanan tidak tersedia\n");
        break;
    }

    return 0;
}
