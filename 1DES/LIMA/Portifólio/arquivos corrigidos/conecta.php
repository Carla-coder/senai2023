<?php 
//conecta bd
$host = "localhost";
$user = "id21309815_visitante";
$pass = "Storm40trup@_";
$db = "id21309815_visitas";

$conecta = mysqli_connect ($host, $user, $pass, $db)
or die ("Nao foi possivel conectar ao Banco de dados");

mysqli_select_db($conecta, $db)
or die ("Nao foi possivel selecionar o banco de dados");
?>
