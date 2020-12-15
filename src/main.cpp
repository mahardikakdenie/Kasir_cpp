#include <iostream>
#include <string>
#include <ctime>

using namespace std;


int main(int argc, char const *argv[])
{
    int bayar,tipe,jumlah[100],paket,trip,x=0;
    double diskon = 0,total,harga[100],subtotal[100],tot_sementara[100],total_diskon[100];
    char pilihan;
    float persentase,diskon_jumlah[100];
	string nama, nama_paket[100], jenis_menu[100],tngl,bonus[100];
    do
    {   
        Menu :
        system("cls");
        cout<<"==== Toko KhoungCUAN ===="<<endl;
        cout<<"1.Makanan "<<endl;
        cout<<"2.Minuman "<<endl;
        cout<<"Pilih [ 1 / 2 ] : ";cin>>tipe;
        if (tipe == 1){
            Makanan :
            system("cls");
            cout<<"\n\tMakananan"<<endl;
            cout<<"1.Oreo"<<endl;
            cout<<"2.Odading"<<endl;
            cout<<"3.Snack"<<endl;
            cout<<"pilih [ 1 / 2 / 3 ] : ";cin>>tipe;
            if (tipe == 1){
                cout<<"\nOreo"<<endl;
                jenis_menu[x] = "Makanan" ;
                nama_paket[x] = "Oreo" ;
                harga[x] = 5000 ; 
                cout<<"Mau Pesan Berapa : ";cin>>jumlah[x];
                if (jumlah[x] >= 3 )
                {
                    bonus[x] = "Tidak ada" ;
                    subtotal[x] =jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 25 ; 
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x] ;
                }else{
                    subtotal[x] =  jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                 
            }else if (tipe == 2){
                cout<<"\nOdading"<<endl;
                jenis_menu[x] = "Makanan" ; 
                nama_paket[x] = "Odading" ;
                harga[x] = 2000 ;
                cout<<"Mau Pesan Berapa : ";cin>>jumlah[x] ;
                if (jumlah[x] >= 5){
                    bonus[x] = "Teh Gelas" ;
                    subtotal[x] = jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x] ;
                }else{
                    bonus[x] = "Tidak ada" ;
                    subtotal[x] = jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }

            }else if(tipe == 3) {
                cout<<"\nSnack"<<endl;
                jenis_menu[x] = "Makanan" ;
                nama_paket[x] = "Snack" ;
                harga[x] = 1000 ;
                cout<<"Mau Pesan Berapa : ";cin>>jumlah[x] ;
                if(jumlah[x] >= 4){
                    bonus[x] = "Tidak ada " ;
                    subtotal[x] = jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 25 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x] ;
                }else{
                    bonus[x] = "Tidak ada" ;
                    subtotal[x] = jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }else{
                goto Makanan;
            }      
        }else if( tipe == 2 ){
            Minuman :
             system("cls");
            cout<<"\n\tMinuman"<<endl;
            cout<<"1.Juice"<<endl;
            cout<<"2.Es Cendol"<<endl;
            cout<<"3.Es Dawet"<<endl;
            cout<<"Pilih [ 1 / 2 / 3 ]";cin>>tipe;
            if ( tipe == 1){
                cout<<"\nJuice"<<endl;
                jenis_menu[x] = "Minuman";
                nama_paket[x] = "juice" ;
                harga[x] = 10000 ;
                cout<<"Mau Pesan Berapa : ";cin>>jumlah[x] ;
                if(jumlah[x] >= 3){
                    bonus[x] = "1 pcs Telur Dadar";
                    subtotal[x] = jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }else{
                    bonus[x] = "Tidak ada " ;
                    subtotal[x] = jumlah[x] * harga[x] ;
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            } else if ( tipe == 2){
                cout<<"\nEs Cendol"<<endl;
                jenis_menu[x] = "Minuman";
                nama_paket[x] = "Es Cendol" ;
                harga[x] = 5000 ;
                cout<<"Mau Pesan Berapa : ";cin>>jumlah[x] ;
                if(jumlah[x] >= 4){
                    bonus[x] = "Tidak ada " ;
                    subtotal[x] = jumlah[x] * harga[x] ; 
                    diskon_jumlah[x] = 10 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x] ;
                }else{
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x] ; 
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            } else if(tipe == 3 ){
                cout<<"\nEs Dawet"<<endl;
                jenis_menu[x] = "Minuman" ;
                nama_paket[x] = "Es Dawet" ;
                harga[x] = 5000 ; 
                cout<<"Mau Pesan Berapa : " ;cin>>jumlah[x] ;
                if (jumlah[x] >= 4){
                    bonus[x] = "Tidak ada " ;
                    subtotal[x] = jumlah[x] * harga[x] ; 
                    diskon_jumlah[x] = 20 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x] ;
                }else{
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x] ; 
                    diskon_jumlah[x] = 0 ;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x]/ (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }else{
                goto Minuman ;
            }
             
            
        }else{
            goto Menu ;
        }
        cout<<"Mau Beli Lagi ? [ Y / N ]";cin>>pilihan;  
        x++;
    } while (pilihan == 'Y' || pilihan == 'y');
    
    cout<<"\n=====================================\n";
    cout<<"Nama Kasir : ";cin>>nama;
    time_t now = time(0);
    char* dt = ctime(&now);
    cout<<"=================\n";
    cout<<"Nama Kasir : "<<nama<<endl;
    cout<<"Tanggal : "<<dt;

 
    for (int i = 0; i < x; i++){
        cout<<"-----------------------"<<endl;
        cout<<"Nama : "<<nama_paket[i]<<endl;
        cout<<"Jenis : "<<jenis_menu[i]<<endl;
        cout<<"Harga : "<<"Rp"<<harga[i]<<endl;
        cout<<"jumlah Barang : "<<jumlah[i]<<endl;
        cout<<"Bonus : "<<bonus[i]<<endl;
        cout<<"Diskon : "<<diskon_jumlah[i]<<"%"<<endl;
        cout<<"Harga Diskon : "<<"Rp"<<total_diskon[i]<<endl;
        cout<<"Total Sementara : "<<"Rp"<<tot_sementara[i]<<endl;
        cout<<"==================================\n";
        diskon += total_diskon[i];
        total += subtotal[i] - total_diskon[i];
    }
    double Kembalian;
    Kembalian = bayar - total ;

    cout<<"==================================\n";
    cout<<"Total : "<<"Rp"<<total<<endl;
    cout<<"---------------------------\n";
    cout<<"Anda Hemat : "<<"Rp"<<diskon<<endl;
    cout<<"==================================\n";
    cout<<"1. Credit\n";
    cout<<"2. Cash\n";
    cout<<"==================================\n";
    hmm:
    cout<<"Pilih Tipe Pembayaran [1/2] ";
    cin>>tipe;
    if (tipe==1)
    {
        cout<<"Credit"<<endl;
        Bayar:
        cout<<"Masukan Bayar : ";cin>>bayar;
        if(bayar - total == 0 ){
            cout<<"Sukses Selamat Datang Kembaliii"<<endl;
        }else{
            cout<<"Masukan Yang Benar "<<endl;
            goto Bayar;
        }
    }else if (tipe == 2){
        cout<<"Cash"<<endl;
        Byr:
        cout<<"Masukan Bayar : ";cin>>bayar;
        if(bayar >= total){
            cout<<"Kembalian : "<<"Rp"<<Kembalian<<endl;
            cout<<"Selamat Datang Kembaliiiiii"<<endl;
        }else{
            cout<<"Masukan Yang Benar"<<endl;
            goto Byr;
        }
    }else{
        goto hmm;
    }
  
	return 0;  
}


   