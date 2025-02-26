# TP2DPBO2025C1
Tugas Praktikum 2 Dasar Pemrograman Berbasis Objek (DPBO)

# Janji
Saya Faisal Nur Qolbi dengan NIM 2311399 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![Diagram_TP2DPBO](https://github.com/user-attachments/assets/088f31bc-b102-4eaa-ac16-d8743a25dc51)

# Desain Program
Terdiri dari 3 class yaitu **Petshop**, **Aksesoris** dan **Baju**, dimana hirarki dari Child->Parent seperti berikut:

`Baju->Aksesoris->Petshop`

Untuk urutan child-parent ini karena dasarnya adalah petshop dimana pada petshop tentu akan ada aksesoris (bisa juga lainnya) dan pada aksesoris hewan peliharaan tentu salah satunya ada baju.

Didalam class **Petshop** memiliki 4 Atribut, yaitu : 
* ID
* Nama Produk
* Harga Produk
* Stok Produk

Didalam class **Clothing** memiliki 3 Atribut, yaitu : 
* Jenis
* Bahan
* Warna

Didalam class **Product** memiliki 4 Atribut, yaitu : 
* Untuk
* Size
* Merk

Hal lain terkait program:

* Pada setiap class ada method tampilkanData dengan konsep override method dari parent agar method tampilkanData pada class child paling ujung sudah dengan parameter lengkap

# Alur Program
Program akan menampilkan tabel informasi data produk beserta menu dengan input pilihan dari 1-2 dimana:
1. Create/Add/Tambah data peralatan
2. Keluar menu

Menu akan terus meminta masukan selama bukan pilihan 2 alias keluar menu
