#include <stdio.h>
#include <string.h>
#define N 255

void replace (char*, char, char);
main()
{
    char data[N], cari, ganti;
    printf("Mengganti huruf A menjadi I\n\n ");
    printf("Masukan sebuah string : ");
    scanf("%[^\n]", data);
    printf("Huruf yang akan diganti : ");
    getchar ();scanf("%c", &cari);
    printf("Huruf yang pengganti : ");
    getchar ();scanf("%c", &ganti);
    replace (data, cari, ganti);
    printf("\nHasil pengganti : %s\n\n", data);
    return 0;
}
void replace (char *data, char cari, char replace){
    int a=0;
    while(*data !='\0'){
        *data=((*data == cari)? replace:*data);
        data++j
        a++j
    }
}

