# Permissionamento no Linux

## umask
As permissões de arquivos e diretórios criadas por um usuário são geradas a partir da máscara, código decimal que está configurado na umask.<br>
"umask" quer dizer User Mask, traduzindo: máscara do usuário.<br>
O umask padrão é o 022.<br>

Para entender como funciona e é gerada a permissão a partir da umask é necesário conhecer quais são os valores decimais para cada tipo de permissão:<br>
## r quer dizer "read" e é permissão de leitura, e o seu valor decimal é 4<br>
## w quer dizer "write" e é permissão de gravação, e o seu valor decimal é 2<br>
## somando r e w temos rw, cujo valor é a soma de 4+2 que é igual a 6.<br>

Para sabermos qual o permissionamento que será gerado a partir da umask, basta subtrair a umask do número <b>666</b>(The number of the beast!) :<br>
<b>666 - 022 = 644</b> (que é igual a rw r r) que é o permissionamento padrão: rw para o dono (owner), r para o grupo e para os outros.<br>

No exemplo abaixo temos 3 arquivos que são do usuário "Professor", cujo grupo é "senai" e possuem a permissão 644:<br>
`-rw-r--r-- 1 Professor senai   28 Aug  5 09:44 Windows_comandos_básicos.md`<br>
`-rw-r--r-- 1 Professor senai   28 Aug  5 10:38 permissionamento.md<br>`<br>
`-rw-r--r-- 1 Professor senai 1588 Aug  5 10:38 Linux_comandos_básicos.md`<br>

Abaixo a tabela de valores de permissionamento:

|Permissão|Decimal|Letra|
|-|:-:|:-:|
|Read|4|r|
|Write|2|w|
|eXecute|1|x|

## Permissão de execução:
A permissão de execução é necessária para os diretórios e para arquivos executáveis<br>
Se o diretório não possui permissão de execução, não é possivel acessá-lo com o comando cd.<br>
A permissão padrão para diretórios é 755 e para melhor segurança 750. Na primeira todos podem acessar o diretório/pasta, mas somente o dono pode gravar.<br>

Exemplo de direório(pasta):<br>
`drwxr-xr-x 1 Professor senai    0 Aug  5 11:03 pasta1/`<br>
Exemplo de arquivo executável:<br>
`-rwxr-xr-x 1 Professor senai    5 Aug  5 11:07 script.sh`




