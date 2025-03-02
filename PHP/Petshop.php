<?php
class Petshop {
    private $id;
    private $namaProduk;
    private $hargaProduk;
    private $stokProduk;
    private $gambar;

    public function __construct($id = 0, $namaProduk = "", $hargaProduk = 0, $stokProduk = 0, $gambar = "") {
        $this->id = $id;
        $this->namaProduk = $namaProduk;
        $this->hargaProduk = $hargaProduk;
        $this->stokProduk = $stokProduk;
        $this->gambar = $gambar;
    }

    // Setter methods
    public function setId($id) { $this->id = $id; }
    public function setNamaProduk($namaProduk) { $this->namaProduk = $namaProduk; }
    public function setHargaProduk($hargaProduk) { $this->hargaProduk = $hargaProduk; }
    public function setStokProduk($stokProduk) { $this->stokProduk = $stokProduk; }
    public function setGambar($gambar) { $this->gambar = $gambar; }

    // Getter methods
    public function getId() { return $this->id; }
    public function getNamaProduk() { return $this->namaProduk; }
    public function getHargaProduk() { return $this->hargaProduk; }
    public function getStokProduk() { return $this->stokProduk; }
    public function getGambar() { return $this->gambar; }
}
?>