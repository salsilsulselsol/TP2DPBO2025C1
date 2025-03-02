<?php
require_once 'Baju.php';
session_start();

$uploadDir = 'uploads/';
if (!file_exists($uploadDir)) {
    mkdir($uploadDir, 0777, true);
}

unset($_SESSION['data']);
$_SESSION['data'] = array();

$_SESSION['data'][] = new Baju(1, "Baju Anjing", 150000, 10, "buka.jpg", "Baju", "Katun", "Merah", "Anjing", "L", "PetStyle");
$_SESSION['data'][] = new Baju(2, "Baju Kucing", 120000, 5, "orang_mana.jpg", "Baju", "Poliester", "Biru", "Kucing", "M", "CatLover");
$_SESSION['data'][] = new Baju(3, "Baju Anjing Premium", 200000, 8, "bismillah.jpg", "Baju", "Sutra", "Emas", "Anjing", "XL", "LuxuryPet");
$_SESSION['data'][] = new Baju(4, "Baju Kucing Premium", 180000, 10, "hehe.jpg", "Baju", "Sutra", "Hitam", "Kucing", "XL", "LuxuryPet");
$_SESSION['data'][] = new Baju(5, "Baju Hamster", 150000, 2, "javier.jpg", "Baju", "Katun", "Ungu", "Hamster", "L", "HamHam");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $targetDir = "uploads/";
    $targetFile = $targetDir . basename($_FILES["gambar"]["name"]);
    $uploadOk = 1;
    $imageFileType = strtolower(pathinfo($targetFile,PATHINFO_EXTENSION));

    if(isset($_POST["submit"])) {
        $check = getimagesize($_FILES["gambar"]["tmp_name"]);
        if($check !== false) {
            $uploadOk = 1;
        } else {
            echo "Ini bukan gambar heii";
            $uploadOk = 0;
        }
    }

    if ($_FILES["gambar"]["size"] > 500000) {
        echo "Kegedean sizenya kocak";
        $uploadOk = 0;
    }

    if($imageFileType != "jpg" && $imageFileType != "png" && $imageFileType != "jpeg") {
        echo "Cuma boleh upload file JPG, PNG, dan JPEG yah";
        $uploadOk = 0;
    }

    if ($uploadOk == 0) {
        echo "Gaboleh upload file bukan gambar!";
    } else {
        if (move_uploaded_file($_FILES["gambar"]["tmp_name"], $targetFile)) {
            $newBaju = new Baju(
                count($_SESSION['data']) + 1,
                $_POST['namaProduk'],
                $_POST['hargaProduk'],
                $_POST['stokProduk'],
                basename($_FILES["gambar"]["name"]),
                $_POST['jenis'],
                $_POST['bahan'],
                $_POST['warna'],
                $_POST['untuk'],
                $_POST['size'],
                $_POST['merk']
            );
            $_SESSION['data'][] = $newBaju;
            echo "Produk ". basename( $_FILES["gambar"]["name"]). " berhasil ditambahkan";
        } else {
            echo "Sepertinya ada kesalahan dikepala eh maksudnya diproses input";
        }
    }
}
?>
 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Produk Baju Hewan</title>
    <style>
        table {
            border-collapse: collapse;
            width: 100%;
        }
        th, td {
            border: 1px solid #dddddd;
            text-align: left;
            padding: 8px;
        }
        th {
            background-color: #f2f2f2;
        }
        img {
            max-width: 100px;
            max-height: 100px;
        }
        .reset-btn {
            background-color: #ff6b6b;
            color: white;
            padding: 10px 15px;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            margin-bottom: 20px;
        }
        .reset-btn:hover {
            background-color: #ff5252;
        }
    </style>
</head>
<body>
    <h1>Produk Sigmah Pet Shop</h1>
    
    <table>
        <tr>
            <th>Produk</th>
            <th>ID</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>
        <?php
        foreach($_SESSION['data'] as $baju) {
            echo "<tr>";
            echo "<td>";
            echo "<strong>" . $baju->getNamaProduk() . "</strong><br>";
            echo "<img src='uploads/" . $baju->getGambar() . "' alt='" . $baju->getNamaProduk() . "'>";
            echo "</td>";
            echo "<td>";
            echo $baju->getId() . "<br>";
            echo "</td>";
            echo "<td>";
            echo number_format($baju->getHargaProduk(), 0, ',', '.') . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getStokProduk() . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getJenis() . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getBahan() . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getWarna() . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getUntuk() . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getSize() . "<br>";
            echo "</td>";
            echo "<td>";
            echo $baju->getMerk() . "<br>";
            echo "</td>";
            echo "</tr>";
        }
        ?>
    </table>

    <h2>Tambah Produk Baru:</h2>
    <form method="post" enctype="multipart/form-data">
        <input type="text" name="namaProduk" placeholder="Nama Produk" required><br>
        <input type="number" name="hargaProduk" placeholder="Harga" required><br>
        <input type="number" name="stokProduk" placeholder="Stok" required><br>
        <input type="text" name="jenis" placeholder="Jenis" required><br>
        <input type="text" name="bahan" placeholder="Bahan" required><br>
        <input type="text" name="warna" placeholder="Warna" required><br>
        <input type="text" name="untuk" placeholder="Untuk" required><br>
        <input type="text" name="size" placeholder="Size" required><br>
        <input type="text" name="merk" placeholder="Merk" required><br>
        <input type="file" name="gambar" required><br>
        <input type="submit" value="Tambah Produk">
    </form>
</body>
</html>