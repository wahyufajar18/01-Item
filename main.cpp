#include <iostream>
#include <string>

using namespace std;

int main()
{
    string item;
    int status;
    char jawab='y';
    string item_sblm;
    bool item_pertama=true;
    int stat_terhebat;
    int stat_terlemah;
    string item_terhebat;
    string item_terlemah;

    while(jawab=='y'){
        cout << "Masukkan item anda : "; cin >> item;
        cout << "Masukkan status : "; cin >>status;
        cout << "Item anda adalah : " <<item <<endl;
        cout << "status anda : " <<status <<endl;

        item_sblm=item;
        if(item_pertama==true){
            item_sblm="Nothing";
            item_pertama=false;
        }

        if(status > stat_terhebat){
            item_terhebat=item;
            stat_terhebat=status;
        }
        if(status < stat_terlemah){
            item_terlemah=item;
            stat_terlemah=status;
        }

        cout << "Item sebelumnya : " <<item_sblm <<endl;
        cout << "Item terhebat : " <<item_terhebat<<endl;
        cout << "Item terlemah : " <<item_terlemah<<endl;

        cout << "Ingin input item lagi? (y/n)"; cin >>jawab;
    }
    cout << "Terimakasih " <<endl;
    return 0;
}
