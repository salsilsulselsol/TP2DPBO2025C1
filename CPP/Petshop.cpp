#include <iostream>
#include <string>

using namespace std;

class Petshop {
private:
    int id;                  // ID unik untuk identifikasi produk
    string nama_produk;      // Nama produk yang dijual
    int harga_produk;        // Harga dalam rupiah
    int stok_produk;         // Jumlah barang yang tersedia

public:
    // Constructor default - dipanggil saat buat objek tanpa parameter
    // Mengisi nilai awal dengan nilai kosong/nol
    Petshop() {
        this->id = 0;
        this->nama_produk = "";
        this->harga_produk = 0;
        this->stok_produk = 0;
    }

    // Constructor dengan parameter - biar bisa langsung isi nilai saat bikin objek
    // this-> digunakan untuk membedakan variabel class dengan parameter
    Petshop(int id, string nama_produk, int harga_produk, int stok_produk) {
        this->id = id;
        this->nama_produk = nama_produk;
        this->harga_produk = harga_produk;
        this->stok_produk = stok_produk;
    }

    // Setter methods - buat ngubah nilai atribut private dari luar class
    void set_id(int id) { this->id = id; }
    void set_nama_produk(string nama_produk) { this->nama_produk = nama_produk; }
    void set_harga_produk(int harga_produk) { this->harga_produk = harga_produk; }
    void set_stok_produk(int stok_produk) { this->stok_produk = stok_produk; }

    // Getter methods - buat ngambil nilai atribut private dari luar class
    int get_id() { return id; }
    string get_nama_produk() { return nama_produk; }
    int get_harga_produk() { return harga_produk; }
    int get_stok_produk() { return stok_produk; }

    // Method untuk tampilkan data produk dalam format tabel
    // Parameter panjang_xxx itu untuk ngatur tampilan biar rapi sesuai data terpanjang
    void tampilkanData(int panjang_id, int panjang_nama, int panjang_harga, int panjang_stok) {
        cout << "| " << id;
        for (int i = 0; i < panjang_id - to_string(id).length(); i++) cout << " "; // Nambahin spasi biar rapi
        cout << " | " << nama_produk;
        for (int i = 0; i < panjang_nama - nama_produk.length(); i++) cout << " ";
        cout << " | " << harga_produk;
        for (int i = 0; i < panjang_harga - to_string(harga_produk).length(); i++) cout << " ";
        cout << " | " << stok_produk;
        for (int i = 0; i < panjang_stok - to_string(stok_produk).length(); i++) cout << " ";
    }
};