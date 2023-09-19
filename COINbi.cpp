#include <iostream>

using namespace std;

int main()
{
    string demam, hidung, bersin, tenggorokan, napas, dahak, muntah, diare, lemas, nyeri;
    
    cout
    <<"==========================================================================="<<endl
    <<"                          Selamat datang di COINbi                         "<<endl
    <<"     Program untuk mendeteksi gejala COVID-19, influenza, dan flu biasa    "<<endl<<endl
    <<"Silakan menjawab pertanyaan-pertanyaan berikut untuk menentukan gejala Anda"<<endl
    <<"==========================================================================="<<endl;
    cout<<" [1] Apakah anda merasakan demam? (Y/N)"<<endl<<"     ";
    cin>>demam;
    cout<<endl<<" [2] Apakah hidung anda tersumbat? (Y/N)"<<endl<<"     ";
    cin>>hidung;
    cout<<endl<<" [3] Apakah anda sering bersin? (Y/N)"<<endl<<"     ";
    cin>>bersin;
    cout<<endl<<" [4] Apakah tenggorokan anda terasa sakit? (Y/N)"<<endl<<"     ";
    cin>>tenggorokan;
    cout<<endl<<" [5] Apakah anda merasa kesulitan dalam bernapas? (Y/N)"<<endl<<"     ";
    cin>>napas;
    cout<<endl<<" [6] Apakah dahak anda kental? (Y/N)"<<endl<<"     ";
    cin>>dahak;
    cout<<endl<<" [7] Apakah anda sering muntah? (Y/N)"<<endl<<"     ";
    cin>>muntah;
    cout<<endl<<" [8] Apakah anda sedang diare? (Y/N)"<<endl<<"     ";
    cin>>diare;
    cout<<endl<<" [9] Apakah anda sering merasa lemas? (Y/N)"<<endl<<"     ";
    cin>>lemas;
    cout<<endl<<"[10] Apakah otot anda berasa nyeri? (Y/N)"<<endl<<"     ";
    cin>>nyeri;
    
    cout
    <<"==========================================================================="<<endl
    <<"                                Kesimpulan:"<<endl
    <<"==========================================================================="<<endl;
    if(demam=="Y"&&hidung=="N"&&bersin=="N"&&tenggorokan=="N"&&napas=="Y"&&dahak=="Y"&&muntah=="N"&&diare=="N"&&lemas=="Y"&&nyeri=="N")
        cout<<"Anda memiliki gejala penyakit COVID-19.";
        else if(demam=="Y"&&hidung=="N"&&bersin=="Y"&&tenggorokan=="Y"&&napas=="N"&&dahak=="N"&&muntah=="Y"&&diare=="Y"&&lemas=="N"&&nyeri=="Y")
            cout<<"Anda memiliki gejala penyakit influenza.";
            else if(demam=="N"&&hidung=="Y"&&bersin=="Y"&&tenggorokan=="Y"&&napas=="Y"&&dahak=="N"&&muntah=="N"&&diare=="N"&&lemas=="N"&&nyeri=="N")
                cout<<"Anda memiliki gejala penyakit flu biasa.";
                else if(demam=="N"&&hidung=="N"&&bersin=="N"&&tenggorokan=="N"&&napas=="N"&&dahak=="N"&&muntah=="N"&&diare=="N"&&lemas=="N"&&nyeri=="N")
                    cout<<"Anda tidak memiliki gejala penyakit. Mohon tetap menjaga kondisi kesehatan Anda.";
                    else cout<<"Anda memiliki gejala penyakit selain COVID-19, influenza, dan flu biasa.";
    
    return 0;
}