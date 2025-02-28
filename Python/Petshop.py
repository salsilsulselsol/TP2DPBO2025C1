class Petshop:
    def __init__(self, id=0, nama_produk="", harga_produk=0, stok_produk=0):
        # Inisialisasi atribut-atribut dengan nilai awal
        self.__id = id
        self.__nama_produk = nama_produk
        self.__harga_produk = harga_produk
        self.__stok_produk = stok_produk
    
    # Setter methods buat setiap atribut
    def set_id(self, id):
        self.__id = id
    
    def set_nama_produk(self, nama_produk):
        self.__nama_produk = nama_produk
    
    def set_harga_produk(self, harga_produk):
        self.__harga_produk = harga_produk
    
    def set_stok_produk(self, stok_produk):
        self.__stok_produk = stok_produk
    
    # Getter methods buat setiap atribut
    def get_id(self):
        return self.__id
    
    def get_nama_produk(self):
        return self.__nama_produk
    
    def get_harga_produk(self):
        return self.__harga_produk
    
    def get_stok_produk(self):
        return self.__stok_produk
    
    # Method untuk menampilkan data beserta unsur tabel dinamis
    def tampilkan_data(self, panjang_id, panjang_nama, panjang_harga, panjang_stok):
        print(f"| {self.__id}", end="")
        for i in range(panjang_id - len(str(self.__id))):
            print(" ", end="")
        print(f" | {self.__nama_produk}", end="")
        for i in range(panjang_nama - len(self.__nama_produk)):
            print(" ", end="")
        print(f" | {self.__harga_produk}", end="")
        for i in range(panjang_harga - len(str(self.__harga_produk))):
            print(" ", end="")
        print(f" | {self.__stok_produk}", end="")
        for i in range(panjang_stok - len(str(self.__stok_produk))):
            print(" ", end="")