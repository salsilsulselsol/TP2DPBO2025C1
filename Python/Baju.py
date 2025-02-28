from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self, id=0, nama_produk="", harga_produk=0, stok_produk=0, jenis="", bahan="", warna="", untuk="", size="", merk=""):
        # Inisialisasi atribut-atribut dengan nilai awal beserta init dari parent class
        super().__init__(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna)
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk
    
    # Setter methods buat setiap atribut
    def set_untuk(self, untuk):
        self.__untuk = untuk
    
    def set_size(self, size):
        self.__size = size
    
    def set_merk(self, merk):
        self.__merk = merk
    
    # Getter methods buat setiap atribut
    def get_untuk(self):
        return self.__untuk
    
    def get_size(self):
        return self.__size
    
    def get_merk(self):
        return self.__merk
    
    # Method untuk menampilkan data beserta unsur tabel dinamis, override (super) dari fungsi di parent class
    def tampilkan_data(self, panjang_id, panjang_nama, panjang_harga, panjang_stok, panjang_jenis, panjang_bahan, panjang_warna, panjang_untuk, panjang_size, panjang_merk):
        super().tampilkan_data(panjang_id, panjang_nama, panjang_harga, panjang_stok, panjang_jenis, panjang_bahan, panjang_warna)
        print(f" | {self.__untuk}", end="")
        for i in range(panjang_untuk - len(self.__untuk)):
            print(" ", end="")
        print(f" | {self.__size}", end="")
        for i in range(panjang_size - len(self.__size)):
            print(" ", end="")
        print(f" | {self.__merk}", end="")
        for i in range(panjang_merk - len(self.__merk)):
            print(" ", end="")
        print(" |")