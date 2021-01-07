#include <iostream>
#include <string>
#include <ctime>

using namespace std;
int main(int argc, char const *argv[])
{
    int bayar, tipe, jumlah[100], paket, trip, x = 0;
    double diskon = 0, total, harga[100], subtotal[100], tot_sementara[100], total_diskon[100];
    char pilihan;
    float persentase, diskon_jumlah[100];
    string nama_paket[100], jenis_menu[100], tngl, bonus[100],nama;
    do
    {
    Menu:
        system("cls");
        std::cout << "==== Toko KhoungCUAN ====" << std::endl;
        std::cout << "1.Makanan " << std::endl;
        std::cout << "2.Minuman " << std::endl;
        std::cout << "Pilih [ 1 / 2 ] : ";
        std::cin >> tipe;
        if (tipe == 1)
        {
        Makanan:
            system("cls");
            std::cout << "\n\tMakananan" << std::endl;
            std::cout << "1.Oreo" << std::endl;
            std::cout << "2.Odading" << std::endl;
            std::cout << "3.Snack" << std::endl;
            std::cout << "pilih [ 1 / 2 / 3 ] : ";
            std::cin >> tipe;
            if (tipe == 1)
            {
                std::cout << "\nOreo" << std::endl;
                jenis_menu[x] = "Makanan";
                nama_paket[x] = "Oreo";
                harga[x] = 5000;
                std::cout << "Mau Pesan Berapa : ";
                std::cin >> jumlah[x];
                if (jumlah[x] >= 3)
                {
                    bonus[x] = "Tidak ada";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 25;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                else
                {
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }
            else if (tipe == 2)
            {
                std::cout << "\nOdading" << std::endl;
                jenis_menu[x] = "Makanan";
                nama_paket[x] = "Odading";
                harga[x] = 2000;
                std::cout << "Mau Pesan Berapa : ";
                std::cin >> jumlah[x];
                if (jumlah[x] >= 5)
                {
                    bonus[x] = "Teh Gelas";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                else
                {
                    bonus[x] = "Tidak ada";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }
            else if (tipe == 3)
            {
                std::cout << "\nSnack" << std::endl;
                jenis_menu[x] = "Makanan";
                nama_paket[x] = "Snack";
                harga[x] = 1000;
                std::cout << "Mau Pesan Berapa : ";
                std::cin >> jumlah[x];
                if (jumlah[x] >= 4)
                {
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 25;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                else
                {
                    bonus[x] = "Tidak ada";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }
            else
            {
                goto Makanan;
            }
        }
        else if (tipe == 2)
        {
        Minuman:
            system("cls");
            std::cout << "\n\tMinuman" << std::endl;
            std::cout << "1.Juice" << std::endl;
            std::cout << "2.Es Cendol" << std::endl;
            std::cout << "3.Es Dawet" << std::endl;
            std::cout << "Pilih [ 1 / 2 / 3 ]";
            std::cin >> tipe;
            if (tipe == 1)
            {
                std::cout << "\nJuice" << std::endl;
                jenis_menu[x] = "Minuman";
                nama_paket[x] = "juice";
                harga[x] = 10000;
                std::cout << "Mau Pesan Berapa : ";
                std::cin >> jumlah[x];
                if (jumlah[x] >= 3)
                {
                    bonus[x] = "1 pcs Telur Dadar";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                else
                {
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }
            else if (tipe == 2)
            {
                std::cout << "\nEs Cendol" << std::endl;
                jenis_menu[x] = "Minuman";
                nama_paket[x] = "Es Cendol";
                harga[x] = 5000;
                std::cout << "Mau Pesan Berapa : ";
                std::cin >> jumlah[x];
                if (jumlah[x] >= 4)
                {
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 10;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                else
                {
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }
            else if (tipe == 3)
            {
                std::cout << "\nEs Dawet" << std::endl;
                jenis_menu[x] = "Minuman";
                nama_paket[x] = "Es Dawet";
                harga[x] = 5000;
                std::cout << "Mau Pesan Berapa : ";
                std::cin >> jumlah[x];
                if (jumlah[x] >= 4)
                {
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 20;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
                else
                {
                    bonus[x] = "Tidak ada ";
                    subtotal[x] = jumlah[x] * harga[x];
                    diskon_jumlah[x] = 0;
                    total_diskon[x] = subtotal[x] * ((float)diskon_jumlah[x] / (float)100);
                    tot_sementara[x] = subtotal[x] - total_diskon[x];
                }
            }
            else
            {
                goto Minuman;
            }
        }
        else
        {
            goto Menu;
        }
        std::cout << "Mau Beli Lagi ? [ Y / N ]";
        std::cin >> pilihan;
        x++;
    } while (pilihan == 'Y' || pilihan == 'y');

    std::cout << "\n=====================================\n";
   	std::cout << " Masukan Nama Kasir : ";std::cin >> nama;
    time_t now = time(0);
    char *dt = ctime(&now);

    system("cls");
    std::cout << "Nama Kasir : " << nama << std::endl;
    std::cout << "Tanggal : " << dt;

    std::cout << "=================\n";
    for (int i = 0; i < x; i++)
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "Nama Makanan / Minuman  : " << nama_paket[i] << std::endl;
        std::cout << "Jenis : " << jenis_menu[i] << std::endl;
        std::cout << "Harga : "
                  << "Rp" << harga[i] << std::endl;
        std::cout << "jumlah Barang : " << jumlah[i] << std::endl;
        std::cout << "Bonus : " << bonus[i] << std::endl;
        std::cout << "Diskon : " << diskon_jumlah[i] << "%" << std::endl;
        std::cout << "Harga Diskon : "
                  << "Rp" << total_diskon[i] << std::endl;
        std::cout << "Total Sementara : "
                  << "Rp" << tot_sementara[i] << std::endl;
        std::cout << "==================================\n";
        diskon += total_diskon[i];
        total += subtotal[i] - total_diskon[i];
    }
    double Kembalian;

    std::cout << "==================================\n";
    std::cout << "Total : "
              << "Rp" << total << std::endl;
    std::cout << "Anda Hemat : "
              << "Rp" << diskon << std::endl;
    std::cout << "==================================\n";
    std::cout << "1. Credit\n";
    std::cout << "2. Cash\n";
    std::cout << "==================================\n";
hmm:
    std::cout << "Pilih Tipe Pembayaran [1/2] ";
    std::cin >> tipe;
    if (tipe == 1)
    {
        std::cout << "Credit" << std::endl;
    Bayar:
        std::cout << "Masukan Bayar : ";
        std::cin >> bayar;
        if (bayar - total == 0)
        {
            std::cout << "Sukses Selamat Datang Kembaliii" << std::endl;
        }
        else
        {
            std::cout << "Masukan Yang Benar " << std::endl;
            goto Bayar;
        }
    }
    else if (tipe == 2)
    {
        std::cout << "Cash" << std::endl;
    Byr:
        std::cout << "Masukan Bayar : ";
        std::cin >> bayar;
        if (bayar >= total)
        {
            Kembalian = bayar - total;
            std::cout << "Kembalian : "
                      << "Rp" << Kembalian << std::endl;
            std::cout << "Selamat Datang Kembaliiiiii" << std::endl;
        }
        else
        {
            std::cout << "Masukan Yang Benar" << std::endl;
            goto Byr;
        }
    }
    else
    {
        goto hmm;
        std::cout << "Inputan Anda salah" << std::endl;
    }

    return 0;
}
