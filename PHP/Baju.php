<?php
require_once 'Aksesoris.php';

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    public function __construct($id = 0, $namaProduk = "", $hargaProduk = 0, $stokProduk = 0, $gambar = "", $jenis = "", $bahan = "", $warna = "", $untuk = "", $size = "", $merk = "") {
        parent::__construct($id, $namaProduk, $hargaProduk, $stokProduk, $gambar, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    // Setter methods
    public function setUntuk($untuk) { $this->untuk = $untuk; }
    public function setSize($size) { $this->size = $size; }
    public function setMerk($merk) { $this->merk = $merk; }

    // Getter methods
    public function getUntuk() { return $this->untuk; }
    public function getSize() { return $this->size; }
    public function getMerk() { return $this->merk; }
}
?>