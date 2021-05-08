#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    system("color 4");

    setlocale(LC_ALL, "Turkish");

    int tus,saat,ucret,gunluk=0;


    cout<<"Hoþgeldiniz"<<endl;
    cout<<"Ücretlendirme"<<endl;
    cout<<" 0- 5  Saat arasý : 5 TL\n 5- 10 Saat arasý : 10 TL\n10- 15 Saat arasý : 20 TL\n15- 24 Saat arasý : 30 TL\n"<<endl;

    for(int i=0;i<10;i++){

        devam:

        cout<<i+1<<". Aracýn kaç saat kaldýðýný giriniz :"<<endl;
        cin>>saat;


        if (saat>=0&&saat<5){
            ucret=5;
            cout<<"Ödemeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }
        else if (saat>=5&&saat<10){
            ucret=10;
            cout<<"Ödemeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }
        else if (saat>=10&&saat<15){
            ucret=20;
            cout<<"Ödemeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }
        else if (saat>=15&&saat<=24){
            ucret=30;
            cout<<"Ödemeniz gerken tutar :"<<ucret<<" TL dir."<<endl;
        }

        else {
            cout<<"Hatalý saat giriþi !"<<endl;
            goto devam;
        }

        gunluk=gunluk+ucret;

        if(i<9){
            cout<<"Araç eklemeye devam etmek için 11, Araç giriþini bitirmek 99 komutunu giriniz"<<endl;
            cin>>tus;
            if (tus==99){
                goto bitir;
            }
            else if (tus==11){
                continue;
            }
        }

        else if (i==9){
            cout<<"Otoparkýn kapasitesi dolmuþtur malesef daha fazla araç alamaz"<<endl;
        }


    }
    bitir:


    system("color 2");
    cout<<"Elde edilen günlük gelir : "<<gunluk<<" TL dir"<<endl;

}
