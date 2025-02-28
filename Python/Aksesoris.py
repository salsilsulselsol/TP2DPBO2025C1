from Petshop import Petshop

class Aksesoris(Petshop):
    def __init__(self, id=0, nama_produk="", harga_produk=0, stok_produk=0, jenis="", bahan="", warna=""):
        # Inisialisasi atribut-atribut dengan nilai awal beserta init dari parent class
        super().__init__(id, nama_produk, harga_produk, stok_produk)
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna
    
    # Setter methods buat setiap atribut
    def set_jenis(self, jenis):
        self.__jenis = jenis
    
    def set_bahan(self, bahan):
        self.__bahan = bahan
    
    def set_warna(self, warna):
        self.__warna = warna
    
    # Getter methods buat setiap atribut
    def get_jenis(self):
        return self.__jenis
    
    def get_bahan(self):
        return self.__bahan
    
    def get_warna(self):
        return self.__warna
    
    # Method untuk menampilkan data beserta unsur tabel dinamis, override (super) dari fungsi di parent class
    def tampilkan_data(self, panjang_id, panjang_nama, panjang_harga, panjang_stok, panjang_jenis, panjang_bahan, panjang_warna):
        super().tampilkan_data(panjang_id, panjang_nama, panjang_harga, panjang_stok)
        print(f" | {self.__jenis}", end="")
        for i in range(panjang_jenis - len(self.__jenis)):
            print(" ", end="")
        print(f" | {self.__bahan}", end="")
        for i in range(panjang_bahan - len(self.__bahan)):
            print(" ", end="")
        print(f" | {self.__warna}", end="")
        for i in range(panjang_warna - len(self.__warna)):
            print(" ", end="")