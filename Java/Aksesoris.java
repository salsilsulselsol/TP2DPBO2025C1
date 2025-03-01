public class Aksesoris extends Petshop {
    private String jenis;
    private String bahan;
    private String warna;

    public Aksesoris() {
        super();
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    public Aksesoris(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna) {
        super(id, namaProduk, hargaProduk, stokProduk);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    // Setter methods
    public void setJenis(String jenis) { this.jenis = jenis; }
    public void setBahan(String bahan) { this.bahan = bahan; }
    public void setWarna(String warna) { this.warna = warna; }

    // Getter methods
    public String getJenis() { return jenis; }
    public String getBahan() { return bahan; }
    public String getWarna() { return warna; }

    public void tampilkanData(int panjangId, int panjangNama, int panjangHarga, int panjangStok, int panjangJenis, int panjangBahan, int panjangWarna) {
        super.tampilkanData(panjangId, panjangNama, panjangHarga, panjangStok);
        System.out.print(" | " + jenis);
        for (int i = 0; i < panjangJenis - jenis.length(); i++) System.out.print(" ");
        System.out.print(" | " + bahan);
        for (int i = 0; i < panjangBahan - bahan.length(); i++) System.out.print(" ");
        System.out.print(" | " + warna);
        for (int i = 0; i < panjangWarna - warna.length(); i++) System.out.print(" ");
    }
}