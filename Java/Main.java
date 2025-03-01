import java.util.ArrayList;
import java.util.Scanner;

class Main {
    // Function to display table header dynamically
    public static void tampilkanHeader(int panjangId, int panjangNama, int panjangHarga, int panjangStok,
                                    int panjangJenis, int panjangBahan, int panjangWarna, 
                                    int panjangUntuk, int panjangSize, int panjangMerk) {
        System.out.print("| ID");
        for (int i = 0; i < panjangId - 2; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Nama");
        for (int i = 0; i < panjangNama - 4; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Harga");
        for (int i = 0; i < panjangHarga - 5; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Stok");
        for (int i = 0; i < panjangStok - 4; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Jenis");
        for (int i = 0; i < panjangJenis - 5; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Bahan");
        for (int i = 0; i < panjangBahan - 5; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Warna");
        for (int i = 0; i < panjangWarna - 5; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Untuk");
        for (int i = 0; i < panjangUntuk - 5; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Size");
        for (int i = 0; i < panjangSize - 4; i++) {
            System.out.print(" ");
        }
        System.out.print(" | Merk");
        for (int i = 0; i < panjangMerk - 4; i++) {
            System.out.print(" ");
        }
        System.out.println(" |");
    }

    // Function to display table separator
    public static void tampilkanPembatas(int panjangId, int panjangNama, int panjangHarga, int panjangStok,
                                      int panjangJenis, int panjangBahan, int panjangWarna, 
                                      int panjangUntuk, int panjangSize, int panjangMerk) {
        System.out.print("+");
        for (int i = 0; i < panjangId + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangNama + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangHarga + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangStok + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangJenis + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangBahan + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangWarna + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangUntuk + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangSize + 2; i++) {
            System.out.print("-");
        }
        System.out.print("+");
        for (int i = 0; i < panjangMerk + 2; i++) {
            System.out.print("-");
        }
        System.out.println("+");
    }
    
    public static void main(String[] args) {
        // Create ArrayList to store data
        ArrayList<Baju> data = new ArrayList<>();
        
        // Add initial 5 objects
        data.add(new Baju(1, "Baju Anjing", 150000, 10, "Baju", "Katun", "Merah", "Anjing", "L", "PetStyle"));
        data.add(new Baju(2, "Baju Kucing", 120000, 5, "Baju", "Poliester", "Biru", "Kucing", "M", "CatLover"));
        data.add(new Baju(3, "Baju Anjing Premium", 200000, 8, "Baju", "Sutra", "Emas", "Anjing", "XL", "LuxuryPet"));
        data.add(new Baju(4, "Baju Kucing Premium", 180000, 10, "Baju", "Sutra", "Hitam", "Kucing", "XL", "LuxuryPet"));
        data.add(new Baju(5, "Baju Hamster", 150000, 2, "Baju", "Katun", "Ungu", "Hamster", "L", "HamHam"));
        
        Scanner scanner = new Scanner(System.in);
        String pilihan = "";
        
        while (!pilihan.equals("2")) {
            // Calculate maximum length for each column
            int[] panjang = {2, 4, 5, 4, 5, 5, 5, 5, 4, 4};  // Default header lengths
            
            for (Baju item : data) {
                // Update lengths if there's anything longer
                if (String.valueOf(item.getId()).length() > panjang[0]) {
                    panjang[0] = String.valueOf(item.getId()).length();
                }
                if (item.getNamaProduk().length() > panjang[1]) {
                    panjang[1] = item.getNamaProduk().length();
                }
                if (String.valueOf(item.getHargaProduk()).length() > panjang[2]) {
                    panjang[2] = String.valueOf(item.getHargaProduk()).length();
                }
                if (String.valueOf(item.getStokProduk()).length() > panjang[3]) {
                    panjang[3] = String.valueOf(item.getStokProduk()).length();
                }
                if (item.getJenis().length() > panjang[4]) {
                    panjang[4] = item.getJenis().length();
                }
                if (item.getBahan().length() > panjang[5]) {
                    panjang[5] = item.getBahan().length();
                }
                if (item.getWarna().length() > panjang[6]) {
                    panjang[6] = item.getWarna().length();
                }
                if (item.getUntuk().length() > panjang[7]) {
                    panjang[7] = item.getUntuk().length();
                }
                if (item.getSize().length() > panjang[8]) {
                    panjang[8] = item.getSize().length();
                }
                if (item.getMerk().length() > panjang[9]) {
                    panjang[9] = item.getMerk().length();
                }
            }
            
            // Display table header
            tampilkanPembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], 
                           panjang[6], panjang[7], panjang[8], panjang[9]);
            tampilkanHeader(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], 
                         panjang[6], panjang[7], panjang[8], panjang[9]);
            tampilkanPembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], 
                           panjang[6], panjang[7], panjang[8], panjang[9]);
            
            // Display data one by one
            for (Baju item : data) {
                item.tampilkanData(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], 
                                 panjang[6], panjang[7], panjang[8], panjang[9]);
            }
            
            // Display separator after all data
            tampilkanPembatas(panjang[0], panjang[1], panjang[2], panjang[3], panjang[4], panjang[5], 
                           panjang[6], panjang[7], panjang[8], panjang[9]);
            
            // Display menu options
            System.out.println("\nMenu:");
            System.out.println("1. Tambah data baju");
            System.out.println("2. Keluar");
            System.out.print("Pilihan Anda: ");
            pilihan = scanner.nextLine();
            
            if (pilihan.equals("1")) {  // If user wants to add data
                System.out.println("\nMasukkan data baju baru:");
                
                // Ask for ID, but check for duplicates
                boolean idValid = false;
                int id = 0;
                
                while (!idValid) {
                    System.out.print("ID: ");
                    id = Integer.parseInt(scanner.nextLine());
                    
                    // Check if ID already exists
                    boolean idAda = false;
                    for (Baju item : data) {
                        if (item.getId() == id) {
                            idAda = true;
                            break;
                        }
                    }
                    
                    if (idAda) {  // If ID already exists, show notification and ask again
                        System.out.println("ID " + id + " sudah ada. Silakan masukkan ID lain.");
                    } else {       // If ID doesn't exist, set idValid to true and continue
                        idValid = true;
                    }
                }
                
                // Ask for other inputs
                System.out.print("Nama Produk: ");
                String namaProduk = scanner.nextLine();
                
                System.out.print("Harga Produk: ");
                int hargaProduk = Integer.parseInt(scanner.nextLine());
                
                System.out.print("Stok Produk: ");
                int stokProduk = Integer.parseInt(scanner.nextLine());
                
                System.out.print("Jenis: ");
                String jenis = scanner.nextLine();
                
                System.out.print("Bahan: ");
                String bahan = scanner.nextLine();
                
                System.out.print("Warna: ");
                String warna = scanner.nextLine();
                
                System.out.print("Untuk: ");
                String untuk = scanner.nextLine();
                
                System.out.print("Size: ");
                String size = scanner.nextLine();
                
                System.out.print("Merk: ");
                String merk = scanner.nextLine();
                
                // Add new data to the list
                data.add(new Baju(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna, untuk, size, merk));
                
                System.out.println("\nData berhasil ditambahkan!");
                System.out.print("Tekan Enter untuk melanjutkan...");
                scanner.nextLine();
            }
        }
        
        System.out.println("\nBabay~");
        scanner.close();
    }
}