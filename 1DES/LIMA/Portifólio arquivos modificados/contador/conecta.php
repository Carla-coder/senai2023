<?php 
//conecta bd
$host = "localhost";
$user = "usuario_do_banco";
$pass = "senha";
$db = "nome_do_banco";

$conecta = mysqli_connect ($host, $user, $pass, $db)
or die ("Nao foi possivel conectar ao Banco de dados");

mysqli_select_db($conecta, $db)
or die ("Nao foi possivel selecionar o banco de dados");
?>
