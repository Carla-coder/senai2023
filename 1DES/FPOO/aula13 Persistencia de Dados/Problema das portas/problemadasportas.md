Madame Beauvoir possui uma mansão onde ela recebe todos os seus descendentes (netos e bisnetos) durante as férias. Sua mansão possui exatamente N quartos (cada quarto é numerado de1 a N), onde N é também a quantidade de netos e bisnetos (cada descendente é também numerado de 1 a N).

Como toda criança, os descendentes de Mme. Beauvoir são bastante travessos. Todo dia é a mesma confusão: eles acordam de manhã cedo antes dela e se encontram no grande jardim. Cada descendente, um de cada vez, entra na mansão e troca o estado das portas dos quartos cujos números são múltiplos do seu identificador. Trocar o estado de uma porta significa fechar uma porta que estava aberta ou abrir uma porta que estava fechada. Por exemplo, o descendente cujo identificador é igual a 15 vai trocar o estado das portas 15, 30, 45, etc.

Considerando que todas as portas estão inicialmente fechadas (todos os descendentes fecham as portas antes de descer para o jardim) e que cada descendente entra exatamente uma vez na mansão (a confusão é tão grande que não sabemos em que ordem), quais portas estarão abertas após a entrada de todos os descendentes na mansão?
Entrada:
A entrada contém vários casos de teste. Cada caso de teste consiste em uma linha que contém um inteiro N (0 <= N <= 25.000.000), indicando o número de portas e descendentes. O final da entrada é indicado por N = 0.

A entrada deverá ser lida de um arquivo texto chamado portas.in
Saída:
Para cada caso de teste da entrada seu programa deve produzir uma linha na saída, contendo a sequência crescente de números correspondente aos identificadores dos quartos cujas portas estarão abertas. Ao imprimir a sequência, deixe um espaço em branco entre dois elementos consecutivos.

A saída deverá ser escrita em um arquivo texto chamado portas.out
Exemplo de entrada	Saída para o exemplo de entrada
1                   1
2                   1
3                   1
4                   1 4
0	