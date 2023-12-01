<?php 
include ("conecta.php");
//busca a ultima visita no banco de dados
$consulta = "SELECT visitas
			FROM contador";
			
$resultado = mysqli_query ($conecta, $consulta)
or die ("Falha na consulta");

$linha = mysqli_fetch_assoc($resultado);
$visita = $linha["visitas"]; // Uma variavel recebe o valor da ultima visita
$res = $visita + '1';//outra variavel recebe o valor da ultima visita e adiciona + 1

//insere o novo valor da visita no banco de dados
$insere = "UPDATE contador
			SET visitas = $res
			WHERE visitas = '$visita'";
			
$resul_insere = mysqli_query($conecta, $insere)
or die ("Falha na insercao");

//Imprime o numero de visitantes
echo "<br><b><br>Visitantes n&ordm;: $res</b>";
?>