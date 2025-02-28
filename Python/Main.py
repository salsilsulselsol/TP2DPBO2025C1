import os
from Baju import Baju

# Fungsi buat bikin header tabel dinamis
def tampilkan_header(panjang_id, panjang_nama, panjang_harga, panjang_stok, panjang_jenis, panjang_bahan, panjang_warna, panjang_untuk, panjang_size, panjang_merk):
    # Cetak header tiap kolom secara dinamis
    print("| ID", end="")
    for i in range(panjang_id - 2):
        print(" ", end="")
    print(" | Nama", end="")
    for i in range(panjang_nama - 4):
        print(" ", end="")
    print(" | Harga", end="")
    for i in range(panjang_harga - 5):
        print(" ", end="")
    print(" | Stok", end="")
    for i in range(panjang_stok - 4):
        print(" ", end="")
    print(" | Jenis", end="")
    for i in range(panjang_jenis - 5):
        print(" ", end="")
    print(" | Bahan", end="")
    for i in range(panjang_bahan - 5):
        print(" ", end="")
    print(" | Warna", end="")
    for i in range(panjang_warna - 5):
        print(" ", end="")
    print(" | Untuk", end="")
    for i in range(panjang_untuk - 5):
        print(" ", end="")
    print(" | Size", end="")
    for i in range(panjang_size - 4):
        print(" ", end="")
    print(" | Merk", end="")
    for i in range(panjang_merk - 4):
        print(" ", end="")
    print(" |")

# Fungsi buat bikin garis pemisah yang dinamis juga
def tampilkan_pembatas(panjang_id, panjang_nama, panjang_harga, panjang_stok, panjang_jenis, panjang_bahan, panjang_warna, panjang_untuk, panjang_size, panjang_merk):
    print("+", end="")
    for i in range(panjang_id + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_nama + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_harga + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_stok + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_jenis + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_bahan + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_warna + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_untuk + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_size + 2):
        print("-", end="")
    print("+", end="")
    for i in range(panjang_merk + 2):
        print("-", end="")
    print("+")

class Main():
    # Bikin list kosong buat nampung data
    data = []
    
    # Masukin 5 objek awal
    data.append(Baju(1, "Baju Anjing", 150000, 10, "Baju", "Katun", "Merah", "Anjing", "L", "PetStyle"))
    data.append(Baju(2, "Baju Kucing", 120000, 5, "Baju", "Poliester", "Biru", "Kucing", "M", "CatLover"))
    data.append(Baju(3, "Baju Anjing Premium", 200000, 8, "Baju", "Sutra", "Emas", "Anjing", "XL", "LuxuryPet"))
    data.append(Baju(4, "Baju Kucing Premium", 180000, 10, "Baju", "Sutra", "Hitam", "Kucing", "XL", "LuxuryPet"))
    data.append(Baju(5, "Baju Hamster", 150000, 2, "Baju", "Katun", "Ungu", "Hamster", "L", "HamHam"))
    
    pilihan = ''
    while pilihan != '2':
        # Bersihin layar tiap kali loop jalan biar gak berantakan
        os.system('cls' if os.name == 'nt' else 'clear')
        
        # Ngitung panjang maksimal tiap kolom yang bakal dipakai di fungsi-fungsi tabel dinamis
        panjang = [2, 4, 5, 4, 5, 5, 5, 5, 4, 4]  # Panjang header (defaultnya gitu)
        
        for item in data:
            # Update panjang kalo ada yang lebih panjang
            if len(str(item.get_id())) > panjang[0]:
                panjang[0] = len(str(item.get_id()))
            if len(item.get_nama_produk()) > panjang[1]:
                panjang[1] = len(item.get_nama_produk())
            if len(str(item.get_harga_produk())) > panjang[2]:
                panjang[2] = len(str(item.get_harga_produk()))
            if len(str(item.get_stok_produk())) > panjang[3]:
                panjang[3] = len(str(item.get_stok_produk()))
            if len(item.get_jenis()) > panjang[4]:
                panjang[4] = len(item.get_jenis())
            if len(item.get_bahan()) > panjang[5]:
                panjang[5] = len(item.get_bahan())
            if len(item.get_warna()) > panjang[6]:
                panjang[6] = len(item.get_warna())
            if len(item.get_untuk()) > panjang[7]:
                panjang[7] = len(item.get_untuk())
            if len(item.get_size()) > panjang[8]:
                panjang[8] = len(item.get_size())
            if len(item.get_merk()) > panjang[9]:
                panjang[9] = len(item.get_merk())
        
        # Nampilin header tabel data
        tampilkan_pembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9])
        tampilkan_header(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9])
        tampilkan_pembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9])
        
        # Cetak data satu-satu
        for item in data:
            item.tampilkan_data(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9])
        
        # Cetak pembatas setelah semua data
        tampilkan_pembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], panjang[6], panjang[7], panjang[8], panjang[9])
        
        # Kasih pilihan menu ke user
        print("\nMenu:")
        print("1. Tambah data baju")
        print("2. Keluar")
        pilihan = input("Pilihan Anda: ")
        
        if pilihan == '1':  # Kalo user mau nambah data
            print("\nMasukkan data baju baru:")
            
            # Minta ID, tapi cek dulu jangan sampe dobel
            id_valid = False    # Variabel boolean buat cek ID sudah valid
            while not id_valid:
                id = int(input("ID: "))     # Input ID baru
                
                # Cek apakah ID sudah ada
                id_ada = False  # Variabel boolean buat cek ID sudah ada atau belum
                for item in data:
                    if item.get_id() == id:
                        id_ada = True
                        break
                
                if id_ada:  # Jika sudah ada ID nya kasih notif dan balik lagi minta ID
                    print(f"ID {id} sudah ada. Silakan masukkan ID lain.")
                else:       # Jika belum ada set id_valid ke True dan lanjutin proses input lain
                    id_valid = True
            
            # Minta input lainnya
            nama_produk = input("Nama Produk: ")
            harga_produk = int(input("Harga Produk: "))
            stok_produk = int(input("Stok Produk: "))
            jenis = input("Jenis: ")
            bahan = input("Bahan: ")
            warna = input("Warna: ")
            untuk = input("Untuk: ")
            size = input("Size: ")
            merk = input("Merk: ")
            
            # Masukin data baru ke list
            data.append(Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk))
            
            print("\nData berhasil ditambahkan!")
            input("Tekan Enter untuk melanjutkan...")
    
    print("\nBabay~")