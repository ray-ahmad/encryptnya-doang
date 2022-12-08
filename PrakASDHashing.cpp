#include <iostream>
using namespace std;

void encryptChar(char *chara){
    //Jika karakternya huruf kapital
    if(*chara >= 65 and *chara <= 90)
        *chara = 155 - *chara; // 155 adalah hasil penjumlahan bilangan desimal huruf A (65) dengan bilangan desimal huruf Z (90)

    //Jika karakternya huruf kecil
    if (*chara >= 97 and *chara <= 122)
        *chara = 219 - *chara; // 219 adalah hasil penjumlahan bilangan desimal huruf a (97) dengan bilangan desimal huruf z (122)
}

int main(){
    int i;
    string sentence;
    cout<<"Masukkan kalimat yang akan dienkripsi: \n";
    getline(cin, sentence);
    // Mulai bedah variabel sentence per karakter
    for(i=0; i<sentence.length(); i++)
        encryptChar(&sentence[i]);

    cout<<endl<<sentence;
}