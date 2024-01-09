// Project Akhir
// Program Pemesanan Makanan
// Kelompok 5
// 
// Muhammad Nurhaqie Windyarto      (23.11.5758)
// Davin Jonathan Sitindaon         (23.11.5759)
// Ridho Nugroho                    (23.11.5799)
// Naufal Khairdzaky Hascaryo       (23.11.5801)


#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <windows.h>
#include <cstdlib>

using namespace std;

// Fungsi untuk Memindahkan Posisi
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//Untuk menyimpan Data
class Pesanan
{
public:
    string nama;
    int jumlah;
    double harga;

    Pesanan(const string& n, int j, double h) : nama(n), jumlah(j), harga(h) {}
};

class PemesananMakanan
{
public:
    // Fungsi Dalam Memesan maanan
    void pesanMakanan()
    {
        int pilihanMakanan;
        string namaMakanan;
        double hargaMakanan;
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 13);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        SetConsoleTextAttribute(h, 14);
        cout << "+==============Makan Enak Harga Murah==============+\n";
        SetConsoleTextAttribute(h, 12);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        cout << "|" << setw(3) << " NO"
            << "\t|" << setw(21) << std::left << "Menu Makanan" << "|" << setw(20) << "Harga" << "|" << endl;
        cout << "+==================================================+\n";
        cout << "|" << setw(3) << " 1."
            << "\t|" << setw(21) << std::left << "Bakso" << "|" << setw(20) << "Rp. 15000" << "|" << endl;
        cout << "|" << setw(3) << " 2."
            << "\t|" << setw(21) << std::left << "Mie Ayam" << "|" << setw(20) << "Rp. 12000" << "|" << endl;
        cout << "|" << setw(3) << " 3."
            << "\t|" << setw(21) << std::left << "Soto Ayam" << "|" << setw(20) << "Rp. 10000" << "|" << endl;
        cout << "|" << setw(3) << " 4."
            << "\t|" << setw(21) << std::left << "Soto Sapi" << "|" << setw(20) << "Rp. 18000" << "|" << endl;
        cout << "|" << setw(3) << " 5."
            << "\t|" << setw(21) << std::left << "Salad Solo" << "|" << setw(20) << "Rp. 16000" << "|" << endl;
        cout << "|" << setw(3) << " 6."
            << "\t|" << setw(21) << std::left << "Sop Iga" << "|" << setw(20) << "Rp. 25000" << "|" << endl;
        cout << "+==================================================+\n";


        cout << "*Pilih Nomor Menu : " << setw(20); cin >> pilihanMakanan;


        switch (pilihanMakanan) {
        case 1:
            namaMakanan = "Bakso";
            hargaMakanan = 10000;
            break;
        case 2:
            namaMakanan = "Mie Ayam";
            hargaMakanan = 12000;
            break;
        case 3:
            namaMakanan = "Soto Ayam";
            hargaMakanan = 15000;
            break;
        case 4:
            namaMakanan = "Soto Sapi";
            hargaMakanan = 18000;
            break;
        case 5:
            namaMakanan = "Salad Solo";
            hargaMakanan = 16000;
            break;
        case 6:
            namaMakanan = "Sop Iga";
            hargaMakanan = 25000;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return;
        }

        int jumlahPesanan;
        cout << "*Masukan Jumlah Pesanan   : " << setw(20);
        cin >> jumlahPesanan;

        pesananMakanan.push_back(Pesanan(namaMakanan, jumlahPesanan, hargaMakanan));
        cout << namaMakanan << " sebanyak " << jumlahPesanan << " pesanan telah ditambahkan ke dalam pesanan.\n";
        system("pause");
        system("cls");

    }

    //Fungsi Dalam memesan Minuman
    void pesanMinuman()
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 13);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        SetConsoleTextAttribute(h, 14);
        cout << "+==============Makan Enak Harga Murah==============+\n";
        SetConsoleTextAttribute(h, 12);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        cout << "|" << setw(3) << " NO"
            << "\t|" << setw(21) << std::left << "Menu Makanan" << "|" << setw(20) << "Harga" << "|" << endl;
        cout << "+==================================================+\n";
        cout << "|" << setw(3) << " 1."
            << "\t|" << setw(21) << std::left << "Es Teh" << "|" << setw(20) << "Rp. 2000" << "|" << endl;
        cout << "|" << setw(3) << " 2."
            << "\t|" << setw(21) << std::left << "Es Jeruk" << "|" << setw(20) << "Rp. 3000" << "|" << endl;
        cout << "|" << setw(3) << " 3."
            << "\t|" << setw(21) << std::left << "Kopi" << "|" << setw(20) << "Rp. 7000" << "|" << endl;
        cout << "|" << setw(3) << " 4."
            << "\t|" << setw(21) << std::left << "Secang" << "|" << setw(20) << "Rp. 2000" << "|" << endl;
        cout << "|" << setw(3) << " 5."
            << "\t|" << setw(21) << std::left << "Teh Sereh" << "|" << setw(20) << "Rp. 4000" << "|" << endl;
        cout << "|" << setw(3) << " 6."
            << "\t|" << setw(21) << std::left << "Es Teler" << "|" << setw(20) << "Rp. 10000" << "|" << endl;
        cout << "+==================================================+\n";

        int pilihanMinuman;
        cout << "*Pilih Nomor Menu : " << setw(20); cin >> pilihanMinuman;

        string namaMakanan;
        double hargaMakanan;

        switch (pilihanMinuman) {
        case 1:
            namaMakanan = "Es Teh";
            hargaMakanan = 2000;
            break;
        case 2:
            namaMakanan = "Es Jeruk";
            hargaMakanan = 3000;
            break;
        case 3:
            namaMakanan = "Kopi";
            hargaMakanan = 7000;
            break;
        case 4:
            namaMakanan = "Secang";
            hargaMakanan = 2000;
            break;
        case 5:
            namaMakanan = "Teh Sereh";
            hargaMakanan = 4000;
            break;
        case 6:
            namaMakanan = "Es Campur";
            hargaMakanan = 10000;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return;
        }

        int jumlahPesanan;
        cout << "*Masukkan jumlah pesanan   : ";
        cin >> jumlahPesanan;

        pesananMakanan.push_back(Pesanan(namaMakanan, jumlahPesanan, hargaMakanan));
        cout << namaMakanan << " sebanyak " << jumlahPesanan << " pesanan telah ditambahkan ke dalam pesanan.\n";
        system("pause");

        system("cls");
    }

    // Fungsi untuk menyimpan data pesanan
    void tampilkanPesanan()
    {
        tampilkanPesananDetail(pesananMakanan);
    }

private:
    vector<Pesanan> pesananMakanan;

    // Fungsi Untuk menampilkan semua Pesanan
    void tampilkanPesananDetail(const vector<Pesanan>& pesanan)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        double totalHarga = 0;
        double kembalian;
        double uang;
        char nota;

        SetConsoleTextAttribute(h, 13);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        SetConsoleTextAttribute(h, 14);
        cout << "+==============Makan Enak Harga Murah==============+\n";
        SetConsoleTextAttribute(h, 12);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        for (const auto& item : pesanan)
        {
            cout << "|" << "\t" << setw(11) << item.nama << "\t" << setw(13) << item.jumlah << "Rp" << setw(12) << item.harga * item.jumlah << "|" << endl;
            totalHarga += item.harga * item.jumlah;
        }
        cout << "+==================================================+\n";
        SetConsoleTextAttribute(h, 13);
        cout << "|Total Harga: Rp " << setw(34) << totalHarga << "|" << endl;
        SetConsoleTextAttribute(h, 12);
        cout << "+==================================================+\n";
        SetConsoleTextAttribute(h, 13);
        cout << "|Masukan Jumlah Uang Untuk Membayar : " << setw(72);  cin >> uang;
        SetConsoleTextAttribute(h, 12);
        cout << "+==================================================+\n";

        // Perulangan apabila uang Kurang
        SetConsoleTextAttribute(h, 15);
        while (totalHarga >= uang)
        {
            cout << "Uang Anda Kurang " << endl;
            cout << "Masukan Jumlah Uang Untuk Membayar : "; cin >> uang;

        }
        kembalian = uang - totalHarga;
        cout << "Kembalian anda : " << kembalian << endl;
        cout << "Cetak Nota atau Mengakhiri Pesanan Y/N : "; cin >> nota;
        system("cls");

        //Penentuan Apakah ingin mencetak Nota atau tidak
        if (nota = 'Y' || 'y')
        {
            cout << "====================================================\n";
            for (const auto& item : pesanan) {
                cout << "\t" << setw(11) << item.nama << "\t" << setw(13) << item.jumlah << "Rp" << setw(12) << item.harga * item.jumlah << endl;
            }
            cout << "====================================================\n";
            cout << "TOTAL     :" << totalHarga << "\n";
            cout << "BAYAR     :" << uang << "\n";
            cout << "KEMBALI   :" << kembalian << "\n";
            cout << "----------------------------------------------------\n";
            cout << "Jln.Mantrijeron No 105 Telp 057112349412+\n";
            cout << "Warung Kami Adalah Waroeng Sehat\n";
            system("pause");

            exit(0);
            system("cls");
        }
        else
        {
            gotoxy(10, 5);
            SetConsoleTextAttribute(h, 13);
            cout << "Terimakasi Telah Memesan Diwarung Kami\n";
            cout << "\n";

            gotoxy(10, 10);
            SetConsoleTextAttribute(h, 15);
            system("pause");
            exit(0);

        }



    }
};

//Fungsi Utama
int main()
{
    PemesananMakanan pemesanan;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    while (true) {
        SetConsoleTextAttribute(h, 13);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        SetConsoleTextAttribute(h, 14);
        cout << "+==============Makan Enak Harga Murah==============+\n";
        SetConsoleTextAttribute(h, 12);
        cout << "+==========Selamat Datang Di Warteg Sehat==========+\n";
        cout << "|" << setw(3) << " NO"
            << "\t|" << setw(21) << std::left << "Menu Utama" << "|" << setw(20) << " " << "|" << endl;
        cout << "+==================================================+\n";
        cout << "|" << setw(3) << " 1."
            << "\t|" << setw(21) << std::left << "Makanan" << "|" << setw(20) << " " << "|" << endl;
        cout << "|" << setw(3) << " 2."
            << "\t|" << setw(21) << std::left << "Minuman" << "|" << setw(20) << " " << "|" << endl;
        cout << "|" << setw(3) << " 3."
            << "\t|" << setw(21) << std::left << "Pembayaran" << "|" << setw(20) << " " << "|" << endl;
        cout << "|" << setw(3) << " 4."
            << "\t|" << setw(21) << std::left << "Keluar" << "|" << setw(20) << " " << "|" << endl;
        cout << "+==================================================+\n";


        int pilihan;
        SetConsoleTextAttribute(h, 15);
        cout << "*Pilih Nomor Menu : " << setw(20); cin >> pilihan;
        system("cls");

        switch (pilihan) {
        case 1:
            pemesanan.pesanMakanan();
            break;
        case 2:
            pemesanan.pesanMinuman();
            break;
        case 3:
            pemesanan.tampilkanPesanan();
            break;
        case 4:
            return 0;
        default:
            cout << "Pilihan tidak valid.\n";
        }

    }
    system("cls");
    return 0;
}
