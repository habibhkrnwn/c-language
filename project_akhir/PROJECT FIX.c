#include<stdio.h>
#include<string.h>
struct ad
{
    char nama[30];
    char penyakit[30];
    int kamar,telp,umur;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void show();
int main()
{
    read();
    int c,i,q;
    printf("Hospital Management System\n");
    int m,n;

    while(c!=6)
    {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)
        {
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nKesalahan Input");
        }
        printf("\n\n");
    }
}
void add()
{
    printf("\n\n");
    printf("Berapa Banyak data yang ingin anda buat?=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Nama Pasien = ");
        gets(x[i].nama);
        fflush(stdin);
        printf("Nama Penyakit = ");
        gets(x[i].penyakit);
        fflush(stdin);
        printf("Umur Pasien = ");
        scanf("%d",&x[i].umur);
        fflush(stdin);
        printf("Nomor Kamar = ");
        scanf("%d",&x[i].kamar);
        fflush(stdin);
        printf("Nomor Telepon = ");
        scanf("%d",&x[i].telp);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Nomor Seri=%d\n",i);
        printf("Nama = ");
        puts(x[i].nama);
        printf("Penyakit = ");
        puts(x[i].penyakit);
        printf("No Kamar = %d\nNomor Telp = 0%d\nUmur=%d",x[i].kamar,x[i].telp,x[i].umur);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("Apa yang ingin anda edit?\n");
    printf("Masukan Opsi :\n");
    printf("1.Nama\n2.Penyakit\n3.Umur\n4.Kamar\n5.No.Telp\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Masukan No seri pasien (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Masukan nama baru=");
                gets(x[p].nama);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Masukan penyakit baru=");
                gets(x[p].penyakit);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Masukan umur baru=");
                scanf("%d",&x[p].umur);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Masukan No Kamar baru=");
                scanf("%d",&x[p].kamar);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Masukan No Telp baru =");
                scanf("%d",&x[p].telp);
            }
        }
        else
        {
            printf("\n\nSerial Salah \nCoba Lagi !!\n\n");
        }
    }
    else
    {
        printf("\n\nOpsi Salah\nCoba Lagi!!\n\n");
    }
}
void search()
{
    int s,h,f;
    char u[100];
        printf("Masukan nomor seri pasien yang ingin dicari=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Nomer Seri=%d\n",s);
            printf("Nama = ");
            puts(x[s].nama);
            printf("Penyakit = ");
            puts(x[s].penyakit);
            printf("No Kamar = %d\nNo Telepon = 0%d\nUmur = %d",x[s].kamar,x[s].telp,x[s].umur);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");

}

