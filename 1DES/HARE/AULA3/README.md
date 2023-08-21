# Aula03 - Hardware

## Sistema Decimal
Começando pelo sistema decimal, este é composto de 10 numerais (ou símbolos): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 e é o que o ser humano entende com maior facilidade. Juntando tais símbolos podemos representar qualquer quantidade. Este sistema também é chamado de base 10, por contar com 10 dígitos.

O sistema decimal é um sistema de valor posicional, então o valor de cada dígito irá depender da posição em que o número se encontra. O que definirá o peso de cada dígito, de acordo com a posição, será uma potência de 10. Para entender isso vamos observar o exemplo da Figura 1.

![image](https://github.com/remajag/SENAI2023/assets/121033053/94e6c508-fd8a-4ce4-9560-3c3582483e39)

Figura 1 – Exemplo de número decimal.<BR>

Sabemos que no número 539 o dígito 5 representa 500 ou 5 centenas, o dígito 3 representa 30 ou 3 dezenas e o dígito 9 representa 9 unidades. Essa nomenclatura (centena, dezena, unidade) é dada justamente por causa dos pesos que as potências de 10 fornecem a cada algarismo. No fim, o número formado é a soma do produto do valor de cada dígito pelo seu valor posicional (potência de 10), ou seja, 500+30+9=539.

## Sistema Binário
No sistema binário, existem somente dois símbolos possíveis: 0 e 1. Com somente esses dois algarismos podemos representar qualquer quantidade que também pode ser representada em decimal ou em qualquer outro sistema de numeração. A diferença é que o sistema binário vai utilizar um maior número de dígitos para representar um valor.

A partir daqui para diferenciar os valores em binário e decimal usaremos a seguinte escrita: 1010 (10 na base 10, ou seja, decimal) e 102 (2 na base 2, ou seja, em binário).

No sistema binário, o termo dígito binário (binary digit) normalmente é abreviado para o termo bit, o qual vamos passar a usar. Nesse sistema o valor posicional também é válido, então cada bit tem um valor próprio expresso como uma potência de 2. 

Primeiramente é preciso saber que ao lidar com números binários, normalmente estamos restritos a um número específico de bits. Isso varia de acordo com o circuito em que estamos trabalhando, para ilustrar vamos mostrar o exemplo de um número binário de 4 bits.

![image](https://github.com/remajag/SENAI2023/assets/121033053/37d6c81c-2d06-4735-a9b8-e6d35349283d)

Figura 2 – Exemplo de número binário.<BR>

Nesse caso a potência de 2 vai de 20 até 23 e estes são os chamados pesos (da mesma forma que no sistema decimal). Como pode ser visto no exemplo, o bit mais significativo (most significant bit — MSB), ou seja, o que tem maior valor é aquele que está mais à esquerda, já o bit menos significativo (least significant bit — LSB), ou seja, o que tem menor valor é aquele que está mais à direita.

De forma análoga ao sistema decimal, para saber qual o valor que aquele conjunto de algarismos representa basta multiplicar o algarismo pelo seu peso e somar.

Outro ponto importante é que com 4 bits é possível representar somente até o número 1510. Isso porque no sistema binário podemos contar até 2N números, logo:

Com 2 bits podemos realizar até 22 = 4 contagens:
Indo de 02 a 32, ou seja, 00, 01, 10, 11;
Com 3 bits podemos realizar até 23 = 8 contagens:
Indo de 02 a 72, ou seja, 000, 001, 010, 011, 100, 101, 110, 111;
Isso significa que para saber até quanto é possível contar com um número N de bits, basta fazer 2N – 1. Por isso, com 4 bits contamos até 15, 24 – 1 = 16 -1 = 15.

## Sistema Hexadecimal
Por fim, o sistema hexadecimal possui 16 símbolos ou dígitos, portanto é de base 16. Seus dígitos incluem de 0 a 9 (com o sistema decimal) junto das letras A, B, C, D, E e F. Como nos demais sistemas, as posições dos dígitos recebem pesos, mas dessa vez estes serão potências de 16.

![image](https://github.com/remajag/SENAI2023/assets/121033053/938fc3f2-d12f-43dd-8d8c-f072b567cddd)

Figura 3 – Exemplo de número hexadecimal.<BR>


Sistema Decimal vs Sistema Binário vs Sistema Hexadecimal
A Tabela 1 mostra as relações entre hexadecimal, decimal e binário. Note que cada dígito hexadecimal é representado por um grupo de quatro bits. Além disso, observe que os dígitos hexa de A até F são equivalentes aos valores decimais de 10 até 15.

Decimal  | Hexadecimal |Binário
------- | --------|-------
0  | 0|0000
1  | 1|0001
2	|2	|0010
3	|3	|0011
4	|4	|0100
5	|5	|0101
6	|6	|0110
7	|7	|0111
8	|8	|1000
9	|9	|1001
10	|A	|1010
11	|B	|1011
12	|C	|1100
13	|D	|1101
14	|E	|1110
15	|F	|1111

Referência
TOCCI, R.; WIDMER, N.; MOSS, G. Sistemas Digitais – Princípios e Aplicações. [S.l.]: Pearson Education Limited, 2011.
