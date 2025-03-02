<?php
require_once 'Petshop.php';

class Aksesoris extends Petshop {
    private $jenis;
    private $bahan;
    private $warna;

    public function __construct($id = 0, $namaProduk = "", $hargaProduk = 0, $stokProduk = 0, $gambar = "", $jenis = "", $bahan = "", $warna = "") {
        parent::__construct($id, $namaProduk, $hargaProduk, $stokProduk, $gambar);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    // Setter methods
    public function setJenis($jenis) { $this->jenis = $jenis; }
    public function setBahan($bahan) { $this->bahan = $bahan; }
    public function setWarna($warna) { $this->warna = $warna; }

    // Getter methods
    public function getJenis() { return $this->jenis; }
    public function getBahan() { return $this->bahan; }
    public function getWarna() { return $this->warna; }
}
?>
