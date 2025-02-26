#include <iostream>
#include <vector>
#include "Baju.cpp"

using namespace std;

// Fungsi ini berguna buat bikin header tabel biar tampilan datanya rapi
// Parameter-nya itu panjang maksimal tiap kolom ya
void tampilkanHeader(int panjang_id, int panjang_nama, int panjang_harga, int panjang_stok, int panjang_jenis, int panjang_bahan, int panjang_warna, int panjang_untuk, int panjang_size, int panjang_merk) {
    cout << "| ID";
    for (int i = 0; i < panjang_id - 2; i++) cout << " "; // Nambahin spasi biar rata kanan
    cout << " | Nama";
    for (int i = 0; i < panjang_nama - 4; i++) cout << " ";
    cout << " | Harga";
    for (int i = 0; i < panjang_harga - 5; i++) cout << " ";
    cout << " | Stok";
    for (int i = 0; i < panjang_stok - 4; i++) cout << " ";
    cout << " | Jenis";
    for (int i = 0; i < panjang_jenis - 5; i++) cout << " ";
    cout << " | Bahan";
    for (int i = 0; i < panjang_bahan - 5; i++) cout << " ";
    cout << " | Warna";
    for (int i = 0; i < panjang_warna - 5; i++) cout << " ";
    cout << " | Untuk";
    for (int i = 0; i < panjang_untuk - 5; i++) cout << " ";
    cout << " | Size";
    for (int i = 0; i < panjang_size - 4; i++) cout << " ";
    cout << " | Merk";
    for (int i = 0; i < panjang_merk - 4; i++) cout << " ";
    cout << " |\n";
}

// Nah kalo ini buat bikin garis pembatas antar baris tabel
// Cuma print karakter "-" sebanyak lebar kolom + 2 (buat space kiri kanan)
void tampilkanPembatas(int panjang_id, int panjang_nama, int panjang_harga, int panjang_stok, int panjang_jenis, int panjang_bahan, int panjang_warna, int panjang_untuk, int panjang_size, int panjang_merk) {
    cout << "+";
    for (int i = 0; i < panjang_id + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_nama + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_harga + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_stok + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_jenis + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_bahan + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_warna + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_untuk + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_size + 2; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < panjang_merk + 2; i++) cout << "-";
    cout << "+\n";
}

int main() {
    // Bikin vector buat nyimpen semua data baju
    vector<Baju> data;

    // Masukin 5 data awal ke vector
    data.push_back(Baju(1, "Baju Anjing", 150000, 10, "Baju", "Katun", "Merah", "Anjing", "L", "PetStyle"));
    data.push_back(Baju(2, "Baju Kucing", 120000, 5, "Baju", "Poliester", "Biru", "Kucing", "M", "CatLover"));
    data.push_back(Baju(3, "Baju Anjing Premium", 200000, 8, "Baju", "Sutra", "Emas", "Anjing", "XL", "LuxuryPet"));
    data.push_back(Baju(4, "Baju Kucing Premium", 180000, 10, "Baju", "Sutra", "Hitam", "Kucing", "XL", "LuxuryPet"));
    data.push_back(Baju(5, "Baju Hamster", 150000, 2, "Baju", "Katun", "Ungu", "Hamster", "L", "HamHam"));

    // Variabel buat menu
    char pilihan;
    
    // Loop utama program
    do {
        // Bersihin layar console biar tampilan fresh
        system("cls"); // Kalo di Windows pake "cls", kalo di Linux/Mac pake "clear"

        // Bikin array panjang untuk nyimpen lebar maksimal tiap kolom
        // Isinya default dari panjang header (ID=2, Nama=4, dst)
        vector<int> panjang = {2, 4, 5, 4, 5, 5, 5, 5, 4, 4}; 

        // Loop semua data baju, cari nilai terpanjang tiap kolom
        // Ini biar tabel yang dibuat menyesuaikan dengan isi data
        for (auto& item : data) {
            if (to_string(item.get_id()).length() > panjang[0]) panjang[0] = to_string(item.get_id()).length();
            if (item.get_nama_produk().length() > panjang[1]) panjang[1] = item.get_nama_produk().length();
            if (to_string(item.get_harga_produk()).length() > panjang[2]) panjang[2] = to_string(item.get_harga_produk()).length();
            if (to_string(item.get_stok_produk()).length() > panjang[3]) panjang[3] = to_string(item.get_stok_produk()).length();
            if (item.get_jenis().length() > panjang[4]) panjang[4] = item.get_jenis().length();
            if (item.get_bahan().length() > panjang[5]) panjang[5] = item.get_bahan().length();
            if (item.get_warna().length() > panjang[6]) panjang[6] = item.get_warna().length();
            if (item.get_untuk().length() > panjang[7]) panjang[7] = item.get_untuk().length();
            if (item.get_size().length() > panjang[8]) panjang[8] = item.get_size().length();
            if (item.get_merk().length() > panjang[9]) panjang[9] = item.get_merk().length();
        }

        // Print garis pembatas atas tabel
        tampilkanPembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9]);

        // Print baris header tabel
        tampilkanHeader(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9]);
        
        // Print garis pembatas setelah header
        tampilkanPembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9]);

        // Loop untuk nampilin semua data baju yang ada di vector
        for (auto& item : data) {
            item.tampilkanData(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9]);
        }
        
        // Print garis pembatas bawah tabel
        tampilkanPembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9]);

        // Tampilkan menu pilihan 
        cout << "\nMenu:\n";
        cout << "1. Tambah data baju\n";
        cout << "2. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        // Kalo pilih 1, maka inputin data baju baru
        if (pilihan == '1') {
            // Deklarasi variabel buat nampung data baju baru
            int id;
            string nama_produk, jenis, bahan, warna, untuk, size, merk;
            int harga_produk, stok_produk;
            bool id_valid = false;
            
            cin.ignore(); // Bersihin buffer input biar gak ada masalah pas input string
            
            cout << "\nMasukkan data baju baru:\n";
            
            // Input ID dengan pengecekan duplikat
            bool id_ada = false;
            do {
                cout << "ID: ";
                cin >> id;
                
                // Cek ID udah ada belum di data yang udah ada
                id_ada = false;
                for (auto& item : data) {
                    if (item.get_id() == id) {
                        id_ada = true;
                        break;
                    }
                }
                
                // Kalo ID udah ada, kasih peringatan dan minta input ulang
                if (id_ada) {
                    cout << "ID " << id << " sudah ada. Silakan masukkan ID lain.\n";
                } else {
                    id_valid = true;
                }
            } while (!id_valid);
            
            cin.ignore(); // Bersihin buffer lagi, agar input string berikutnya gak kacau
            
            // Input semua data baju yang lain
            cout << "Nama Produk: ";
            getline(cin, nama_produk);
            
            cout << "Harga Produk: ";
            cin >> harga_produk;
            
            cout << "Stok Produk: ";
            cin >> stok_produk;
            
            cin.ignore(); // Bersihin buffer lagi
            
            cout << "Jenis: ";
            getline(cin, jenis);
            
            cout << "Bahan: ";
            getline(cin, bahan);
            
            cout << "Warna: ";
            getline(cin, warna);
            
            cout << "Untuk: ";
            getline(cin, untuk);
            
            cout << "Size: ";
            getline(cin, size);
            
            cout << "Merk: ";
            getline(cin, merk);
            
            // Bikin objek baju baru dan tambahkan ke vector data
            data.push_back(Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk));
            
            cout << "\nData berhasil ditambahkan!\n";
            cout << "Tekan Enter untuk melanjutkan...";
            cin.get(); // Nunggu user pencet Enter
        }
        
    } while (pilihan != '2'); // Terus loop selama user gak pilih 2 (keluar)

    cout << "\nBabay~\n";

    return 0; // Program selesai dengan status 0 (sukses)
}