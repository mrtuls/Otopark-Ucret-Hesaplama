#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    system("color 4");

    setlocale(LC_ALL, "Turkish");

    int tus,saat,ucret,gunluk=0;


    cout<<"Ho�geldiniz"<<endl;
    cout<<"�cretlendirme"<<endl;
    cout<<" 0- 5  Saat aras� : 5 TL\n 5- 10 Saat aras� : 10 TL\n10- 15 Saat aras� : 20 TL\n15- 24 Saat aras� : 30 TL\n"<<endl;

    for(int i=0;i<10;i++){

        devam:

        cout<<i+1<<". Arac�n ka� saat kald���n� giriniz :"<<endl;
        cin>>saat;


        if (saat>=0&&saat<5){
            ucret=5;
            cout<<"�demeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }
        else if (saat>=5&&saat<10){
            ucret=10;
            cout<<"�demeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }
        else if (saat>=10&&saat<15){
            ucret=20;
            cout<<"�demeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }
        else if (saat>=15&&saat<=24){
            ucret=30;
            cout<<"�demeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }

        else {
            cout<<"Hatal� saat giri�i !"<<endl;
            goto devam;
        }

        gunluk=gunluk+ucret;

        if(i<9){
            cout<<"Ara� eklemeye devam etmek i�in 11, Ara� giri�ini bitirmek 99 komutunu giriniz"<<endl;
            cin>>tus;
            if (tus==99){
                goto bitir;
            }
            else if (tus==11){
                continue;
            }
        }

        else if (i==9){
            cout<<"Otopark�n kapasitesi dolmu�tur malesef daha fazla ara� alamaz"<<endl;
        }


    }
    bitir:


    system("color 2");
    cout<<"Elde edilen g�nl�k gelir : "<<gunluk<<" TL dir"<<endl;

}
