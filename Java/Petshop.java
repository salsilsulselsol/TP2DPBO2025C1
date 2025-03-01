public class Petshop {
    private int id;
    private String namaProduk;
    private int hargaProduk;
    private int stokProduk;

    public Petshop() {
        this.id = 0;
        this.namaProduk = "";
        this.hargaProduk = 0;
        this.stokProduk = 0;
    }

    public Petshop(int id, String namaProduk, int hargaProduk, int stokProduk) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.hargaProduk = hargaProduk;
        this.stokProduk = stokProduk;
    }

    // Setter methods
    public void setId(int id) { this.id = id; }
    public void setNamaProduk(String namaProduk) { this.namaProduk = namaProduk; }
    public void setHargaProduk(int hargaProduk) { this.hargaProduk = hargaProduk; }
    public void setStokProduk(int stokProduk) { this.stokProduk = stokProduk; }

    // Getter methods
    public int getId() { return id; }
    public String getNamaProduk() { return namaProduk; }
    public int getHargaProduk() { return hargaProduk; }
    public int getStokProduk() { return stokProduk; }

    public void tampilkanData(int panjangId, int panjangNama, int panjangHarga, int panjangStok) {
        System.out.print("| " + id);
        for (int i = 0; i < panjangId - String.valueOf(id).length(); i++) System.out.print(" ");
        System.out.print(" | " + namaProduk);
        for (int i = 0; i < panjangNama - namaProduk.length(); i++) System.out.print(" ");
        System.out.print(" | " + hargaProduk);
        for (int i = 0; i < panjangHarga - String.valueOf(hargaProduk).length(); i++) System.out.print(" ");
        System.out.print(" | " + stokProduk);
        for (int i = 0; i < panjangStok - String.valueOf(stokProduk).length(); i++) System.out.print(" ");
    }
}
