public class Baju extends Aksesoris {
    private String untuk;
    private String size;
    private String merk;

    public Baju() {
        super();
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    public Baju(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    // Setter methods
    public void setUntuk(String untuk) { this.untuk = untuk; }
    public void setSize(String size) { this.size = size; }
    public void setMerk(String merk) { this.merk = merk; }

    // Getter methods
    public String getUntuk() { return untuk; }
    public String getSize() { return size; }
    public String getMerk() { return merk; }

    public void tampilkanData(int panjangId, int panjangNama, int panjangHarga, int panjangStok, int panjangJenis, int panjangBahan, int panjangWarna, int panjangUntuk, int panjangSize, int panjangMerk) {
        super.tampilkanData(panjangId, panjangNama, panjangHarga, panjangStok, panjangJenis, panjangBahan, panjangWarna);
        System.out.print(" | " + untuk);
        for (int i = 0; i < panjangUntuk - untuk.length(); i++) System.out.print(" ");
        System.out.print(" | " + size);
        for (int i = 0; i < panjangSize - size.length(); i++) System.out.print(" ");
        System.out.print(" | " + merk);
        for (int i = 0; i < panjangMerk - merk.length(); i++) System.out.print(" ");
        System.out.println(" |");
    }
}
