#include <iostream>
#include <string>
#include "Aksesoris.cpp"

using namespace std;

// Class Baju adalah turunan dari class Aksesoris
class Baju : public Aksesoris {
    private:
        // Atribut khusus untuk baju hewan
        string untuk;    // Target hewan: anjing, kucing, hamster, dll
        string size;     // Ukuran baju: S, M, L, XL, dll
        string merk;     // Merek baju

    public:
        // Constructor default - set nilai awal kosong
        Baju() {
            this->untuk = "";
            this->size = "";
            this->merk = "";
        }

        // Constructor dengan parameter lengkap dengan aksesoris juga
        Baju(int id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna, string untuk, string size, string merk)
            : Aksesoris(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna) {
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        // Setter methods untuk atribut Baju
        void set_untuk(string untuk) { this->untuk = untuk; }
        void set_size(string size) { this->size = size; }
        void set_merk(string merk) { this->merk = merk; }

        // Getter methods untuk atribut Baju
        string get_untuk() { return untuk; }
        string get_size() { return size; }
        string get_merk() { return merk; }

        // Override method tampilkanData dari parent class
        void tampilkanData(int panjang_id, int panjang_nama, int panjang_harga, int panjang_stok, int panjang_jenis, int panjang_bahan, int panjang_warna, int panjang_untuk, int panjang_size, int panjang_merk) {
            // Panggil method tampilkanData dari Aksesoris untuk nampilin data dasar dan aksesoris
            Aksesoris::tampilkanData(panjang_id, panjang_nama, panjang_harga, panjang_stok, panjang_jenis, panjang_bahan, panjang_warna);
            
            // Tambahkan informasi data Baju
            cout << " | " << untuk;
            for (int i = 0; i < panjang_untuk - untuk.length(); i++) cout << " ";
            cout << " | " << size;
            for (int i = 0; i < panjang_size - size.length(); i++) cout << " ";
            cout << " | " << merk;
            for (int i = 0; i < panjang_merk - merk.length(); i++) cout << " ";
            cout << " |\n";  // Tambah newline di akhir karena ini data urutan terakhir
        }
};