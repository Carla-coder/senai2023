# Aula02 - Hardware

## O Sistema Operacional Linux

Um dos maiores avanços que ocorreram nas últimas duas décadas, foi o surgimento do Software Livre e também do Sistema Operacional Linux que foi desenvolvido por várias pessoas desde o seu surgimento na década de 1990.<br>
A história do Linux começa no ano de 1991, pelas mãos de um estudante universitário finlandês chamado Linus Torvalds. O Linux foi criado por ele, não totalmente do "zero", mas sim como uma variação do Minix.
O Minix é um sistema operacional simples, criado por Andrew S. Tanenbaum, um renomado professor de computação que é conhecido pelos diversos livros que escreveu para a área.

Tanenbaum disponibilizou o Minix principalmente para servir de auxílio no ensino de computação. Trata-se de um sistema operacional simples, que exige poucos recursos de hardware e cuja primeira versão foi lançada em 1987.
Dadas as suas finalidades acadêmicas, não só o Minix foi disponibilizado de maneira gratuita e livre, como também o seu código-fonte completo. Assim, os estudantes de computação podiam — e podem — estudá-lo inteiramente para desenvolver habilidades ou mesmo para criar projetos derivados. Foi assim que Linus Torvalds entrou nessa história.
A relação do Linux — e do Minix — com o Unix
O Minix também não foi escrito do "zero". Trata-se, na verdade, de um projeto baseado em um sistema operacional que tem grande participação na história da computação: o Unix.

O surgimento do Unix se deu em 1969, como um projeto da Bell Labs, laboratório pertencente à AT&T. Mas somente em meados da década seguinte o Unix tornou-se um sistema efetivamente disponível no meio acadêmico, o que permitiu a sua evolução e o surgimento de variações.

O Unix, na verdade, começou em meados dos anos 1960 como um projeto a ser desenvolvido por um grupo de habilidosos programadores, entre eles, Ken Thompson e Dennis Ritchie: um sistema operacional de nome Multics.

O Multics era um projeto ambicioso, mas enfrentou vários problemas, entre eles, falta de recursos computacionais. Assim, no mesmo ano, Ken Thompson decidiu criar algo mais "realista", chamando o novo projeto de Unics. Tempos depois, o nome foi mudado para Unix, denominação que permanece até hoje.

Apesar de haver outros programadores envolvidos com a criação do Unix, Ken Thompson e Dennis Ritchie são os nomes mais lembrados porque ambos, em 1973, praticamente reescreveram o Unix a partir da linguagem C.

C é uma criação de Dennis Ritchie, daí o seu comprometimento com o trabalho envolvendo a linguagem e o Unix. Por causa de seus recursos, a linguagem passou a ser utilizada em vários outros projetos mais complexos, inclusive no desenvolvimento de outros sistemas operacionais, fazendo o seu criador ser reconhecido mundialmente como um dos grandes nomes da computação. Dennis Ritchie faleceu eum outubro de 2011).

O Unix teve grande aceitação não somente em universidades, mas também em ambientes corporativos, resultando no surgimento de variações diversas do sistema, como as versões BSD e o Solaris. O Minix, assim como o Linux, é  uma delas, o que não quer dizer que ambos sejam iguais ao Unix, mas notoriamente parecidos.

O surgimento do Linux
Linus Torvalds, então com quase 20 anos, começou a estudar ciência da computação na Universidade de Helsinki, na Finlândia, em 1988. Cerca de dois anos depois, aproveitando o conhecimento que tinha e estava adquirindo sobre a linguagem C, decidiu criar a sua própria implementação de um terminal em seu recém obtido computador 80386, principalmente para acessar o servidor Unix da instituição de ensino. Isso porque ele já havia testado o Minix para essa finalidade, mas não estava satisfeito com os seus recursos.

A intenção de Torvalds era a de fazer o projeto rodar especificamente em sua máquina 80386, com o desenvolvimento sendo feito a partir do Minix. O trabalho avançou de tal forma que chegou um ponto em que Torvalds já tinha um kernel funcional em mãos.

O surgimento do Linux
Linus Torvalds, então com quase 20 anos, começou a estudar ciência da computação na Universidade de Helsinki, na Finlândia, em 1988. Cerca de dois anos depois, aproveitando o conhecimento que tinha e estava adquirindo sobre a linguagem C, decidiu criar a sua própria implementação de um terminal em seu recém obtido computador 80386, principalmente para acessar o servidor Unix da instituição de ensino. Isso porque ele já havia testado o Minix para essa finalidade, mas não estava satisfeito com os seus recursos.

A intenção de Torvalds era a de fazer o projeto rodar especificamente em sua máquina 80386, com o desenvolvimento sendo feito a partir do Minix. O trabalho avançou de tal forma que chegou um ponto em que Torvalds já tinha um kernel funcional em mãos.

Em 1991, Linus Torvalds decidiu divulgar abertamente o projeto. Para isso, publicou mensagens na Usenet (uma espécie de antecessora da internet baseada em troca de mensagens) pedindo sugestões e colaborações para a sua iniciativa.

Eis a íntegra da primeira mensagem, em inglês, postada em 25 de agosto de 1991. Logo em seguida, sua tradução para português:

From: torvalds@klaava.Helsinki.Fi (Linus Benedict Torvalds)
Newsgroups: comp.os.Minix
Subject: What would you like to see most in Minix?
Summary: small poll for my new operating system
Keywords: 386, preferences
Message-ID: <1991Aug25.205708.9541@klaava.Helsinki.FI>
Date: 25 Aug 91 20:57:08 GMT
Organization: University of Helsinki
Lines: 20

Hello everybody out there using Minix -

I'm doing a (free) operating system (just a hobby, won't be big and
professional like gnu) for 386(486) AT clones. This has been brewing
since april, and is starting to get ready. I'd like any feedback on
things people like/dislike in Minix, as my OS resembles it somewhat
(same physical layout of the file-system (due to practical reasons)
among other things).

I've currently ported bash(1.08) and gcc(1.40), and things seem to work.
This implies that I'll get something practical within a few months, and
I'd like to know what features most people would want. Any suggestions
are welcome, but I won't promise I'll implement them :-)

Linus (torvalds@klaava.Helsinki.Fi)

PS. Yes - it's free of any Minix code, and it has a multi-threaded fs.
It is NOT protable (uses 386 task switching etc), and it probably never
will support anything other than AT-harddisks, as that's all I have :-(.

Tradução livre para português:

Assunto: O que você gostaria de ver no Minix?
Summary: Pequena pesquisa para o meu novo sistema operacional

Olá a todos que usam o Minix -

Estou fazendo um sistema operacional (livre - apenas como um hobby,
não será algo grande e profissional como o GNU) para
máquinas AT 386 (486). Ele tem sido trabalhado desde abril, e
está começando a ficar pronto. Eu gostaria de
opiniões sobre coisas que as pessoas gostam/não gostam no
Minix, já que o meu SO lembra um pouco ele (mesmo layout
físico do sistema de arquivos (por motivos práticos),
entre outros).

Eu já portei o bash (1.08) e o gcc (1.40) e as coisas parecem
funcionar. Isso indica que conseguirei alguma coisa prática
dentro de alguns meses, e gostaria de saber quais recursos as pessoas
mais gostaria de ter. Todas as sugestões serão
bem-vindas, mas não prometo implementá-las :-)

Linus (torvalds@kruuna.helsinki.fi)

PS. Sim - ele está livre de qualquer código do Minix, e
tem sistema de arquivos com multi-threading. Ele NÂO é
portável (usa 386, chaveamento de tarefas, etc) e provavelmente
nunca suportará qualquer coisa além de discos
rígidos AT, pois é tudo o que eu tenho :-(.

Por essa mensagem, é possível perceber que Linus Torvalds não esperava que seu projeto fosse crescer tanto e se tornar tão importante para o advento da computação e da Tecnologia da Informação.
