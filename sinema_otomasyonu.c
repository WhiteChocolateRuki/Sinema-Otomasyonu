
#include <stdio.h>
#include <stdlib.h>

int main()
{

        int film_num,yazili,d,gun,seans,ogr , yas;
        float fiyat=0, fiyat_asil=0, indirim=0 ;
        printf("****************************************************************************\n");
        printf("********************Ruki.mv SINEMA SALONUNA HOS GELDINIZ********************\n");
        printf("****************************************************************************\n\n");
        printf("Izlemek Istediginiz Filmin Numarasini Girin:\n1- Bandirma Fuze Kulubu (100 Tl)\n2- Little Women (80 Tl)\n3- Me Before You (50Tl)\n");
        scanf("%d",&film_num);

        printf("\nFilmi Nasil Izlemek Istersiniz: \n1- Altyazili\n2- Dublajli \n");
        scanf("%d",&yazili);

        printf("\nFilmi Nasil Izlemek Istersiniz: \n1- 2D\n2- 3D\n");
        scanf("%d",&d);

        printf("\nHangi Gun Icin Bilet Almak Istersiniz: \n1- Pazartesi\n2- Sali \n3- Carsamba \n4- Persembe\n5- Cuma \n6- Cumartesi \n7- Pazar\n");
        scanf("%d",&gun);

        printf("\nHangi Seans Icin Bilet Almak Istersinz: \n1- Sabah \n2- Ogle \n3- AKSAM \n");
        scanf("%d",&seans);

        printf("\nOgrenci Misiniz? \n1- Evet \n2- Hayir\n");
        scanf("%d",&ogr);

        printf("\nKac Yasindasiniz?\n");
        scanf("%d",&yas);

        if(film_num==1){
            fiyat_asil= 100;

        }else if(film_num==2){
            fiyat_asil=80;
        }else if(film_num==3)
        {
            fiyat_asil=50;
        }
        else if(film_num!=1 || film_num!=2 || film_num!=3){
            printf("\n****Gecerli Bir Film Girmediniz****\n");
        }

        fiyat=fiyat_asil;

        if(yazili==2){
            fiyat +=fiyat*0.1;
        }

        if(d==2){
            fiyat += fiyat*0.15;
        }


        if (seans==1){
            fiyat -= fiyat*0.05;
        }

        if(ogr==1){
            fiyat -= fiyat*0.2;
        }

        if (yas<18){
            fiyat -= fiyat*0.5;
        }

        if(gun==1){
            fiyat -=fiyat*0.3;
        }

        indirim = fiyat_asil-fiyat;


        printf("\nTutar: %.2f \nIndirim: %.2f \nOdenecek Fiyat: %.2f \n",fiyat_asil, indirim, fiyat);

        if(indirim<0){
            printf("****Film Tercihlerinizden Dolayi Ek Ucretiniz Indirimden Daha Yuksektir****");
        }

        return 0;

}
