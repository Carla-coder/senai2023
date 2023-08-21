# Linux Comandos Básicos

## (ENTER)
  A teclar Enter do teclado padrão. Sempre precisa ser acioanda após os comandos digitados na linha de comando (prompt) que é representada por '$' (para usuários comuns) e '#' (para administradores).

## pwd <br>
  O comando pwd mostra o caminho atual, onde você está.<br>
  sintaxe: $ pwd  (ENTER)

## cd <br>
  O comando cd serve para se navegar entre a estrutura de diretórios (pastas) no Linux. Essa estrutura é definida por um caminho a partir do diretório raiz (/). <br>
  sintaxe: $ cd /caminho (ENTER)<br>
  Exemplos de caminhos:
  /var/tmp <br>
  /tmp/log <br>
  /usr/sbin<br>
  . (diretório atual)<br>
  .. (diretório anterior)<br>
  ~ (diretório home do usuário atual)<br>
  
## mkdir <br>
  O comando mkdir serve para se criar um diretório (pasta)
  sintaxe: $ mkdir dir1 (ENTER)<br>
  Outros exemplos e variações:<br>
  $ mkdir /tmp/log (ENTER)<br>
  $ mkdir /var/tmp/log (ENTER)<br>
  Observação: A opção -p serve para criar toda uma estrutura de pastas novas de uma única vez:<br>
  exemplo:<br>
  $ mkdir -p /home/lucas/docs/cpf (ENTER)<br>
  $ mkdir -p /documentos/faturas/consorcio/pagas (ENTER)<br>

## ls <br>
  O comando ls server para se listar o conteúdo de um diretório, como arquivos e subdiretórios, suas permissões e características como o dono (owner), o tamanho (size) etc.<br>
  sintaxe: $ ls (ENTER)<br>
  Outros exemplos e variações:<br>
  $ ls -l / (ENTER)<br>
  $ ls -ltr . (ENTER)<br>
  $ ls -R /tmp (ENTER)<br>
  $ ls -la (ENTER)<br>

## rmdir <br>
  O comando rmdir serve para se remover um diretório (pasta) que esteja vazia<br>
  sintaxe: $ rmdir dir1 (ENTER)<br>
  Outros exemplos e variações:<br>
  $ rmdir /tmp/dir1 (ENTER)<br>
  Observação: Se houverem arquivos ou subdiretórios criados dentro do diretório, a remoção não ocorrerá.
  
