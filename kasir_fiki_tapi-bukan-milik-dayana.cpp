#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>

using namespace std;

void garis(){
cout<<"\n------------------------------------------"<<endl;
}

int main(){
//deklrasi variabel

int harga,hargaDiskon,bayar;
double diskon=0.25;
string selectConuter;
awal:
    garis();
    cout<<"SELAMAT DATANG DI TOKO TAS MULIA";
    garis();
    cout<<"Masukan Harga Pemeblian : ";cin>>harga;
    //kondisi-pembuatan rule
    if(harga>500000){
        hargaDiskon = harga*diskon;
        bayar=harga-hargaDiskon;
        cout<<"Anda mendapatkan diskon sebesar :"<<"Rp."<<hargaDiskon;
    }else{
        bayar=harga;
        cout<<"Maaf anda tidak Mendapat Diskon"<<endl;
    }
    //pembayaran
    garis();
    cout<<"Anda Harus membayar Sebesar"<<"Rp. "<<bayar;
    garis();

    cout<<"Ulangi Belanja ?\n(Y/N)\n";cin>>selectConuter;
    if (selectConuter=="Y"||selectConuter=="y"){
        goto awal;
    }else if (selectConuter=="N"||selectConuter=="n"){
    cout<<"Terimakasih telah Berbelanja";
    goto akhir;
    }else{
    cout<<"kode yang anda Masukan salah!";
    goto akhir;
    }

akhir:
    return 0;
}
