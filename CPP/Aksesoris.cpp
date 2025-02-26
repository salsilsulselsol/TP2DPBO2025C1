#include <iostream>
#include <string>
#include "Petshop.cpp"

using namespace std;

// Class Aksesoris adalah turunan dari class Petshop
class Aksesoris : public Petshop {
private:
    string jenis;    // Misalnya: kalung, baju, mainan, dll
    string bahan;    // Material pembuatan: plastik, kain, kulit, dll
    string warna;    // Warna aksesoris

public:
    // Constructor default - set nilai awal kosong
    Aksesoris() {
        this->jenis = "";
        this->bahan = "";
        this->warna = "";
    }

    // Constructor dengan parameter
    Aksesoris(int id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna)
        : Petshop(id, nama_produk, harga_produk, stok_produk) {
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    // Setter methods untuk atribut Aksesoris
    void set_jenis(string jenis) { this->jenis = jenis; }
    void set_bahan(string bahan) { this->bahan = bahan; }
    void set_warna(string warna) { this->warna = warna; }

    // Getter methods untuk atribut Aksesoris
    string get_jenis() { return jenis; }
    string get_bahan() { return bahan; }
    string get_warna() { return warna; }

    // Override method tampilkanData dari parent class (nyoba-nyoba hehe)
    void tampilkanData(int panjang_id, int panjang_nama, int panjang_harga, int panjang_stok, int panjang_jenis, int panjang_bahan, int panjang_warna) {
        // Panggil method parent dulu untuk nampilin data atribut petshop
        Petshop::tampilkanData(panjang_id, panjang_nama, panjang_harga, panjang_stok);
        
        // Lanjut tampilkan data Aksesoris
        cout << " | " << jenis;
        for (int i = 0; i < panjang_jenis - jenis.length(); i++) cout << " ";
        cout << " | " << bahan;
        for (int i = 0; i < panjang_bahan - bahan.length(); i++) cout << " ";
        cout << " | " << warna;
        for (int i = 0; i < panjang_warna - warna.length(); i++) cout << " ";
    }
};