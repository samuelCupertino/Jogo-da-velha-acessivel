#include<stdio.h>
#include<string.h>
#include<locale.h>

	char livro[420][120]={
	"      ,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.~.",
	"     /                                                      |::|",
	"    |  ..     ..    ..    ..    .. ..    ..    ..    ..     |::|",
	"    |  ||\\\\ //||   //\\\\   ||\\\\  || ||    ||   //\\\\   ||     |::|",
	"    |  ||  v  ||  //__\\\\  || \\\\ || ''    ''  //__\\\\  ||     |::|",
	"    |  ||     || //    \\\\ ||  \\\\||  ``__��  //    \\\\ ||___  |::|",
	"    |                                                       |::|",
	"    |                    ..__      ..                       |::|",
	"    |                    ||  \\\\   //\\\\                      |::|",
	"    |                    ||   || //__\\\\                     |::|",
	"    |                    ||__// //    \\\\                    |::|",
	"    |                                                       |::|",
	"    |        ..      .. ..___ ..    ..        ..            |::|",
	"    |         \\\\    //  ||    ||    ||       //\\\\           |::|",
	"    |          \\\\  //   ||--- ||    ||--..  //__\\\\          |::|",
	"    |           \\\\//    ||___ ||___ ||  || //    \\\\         |::|",
	"    |                                                       |::|",
	"    |                                                       |::|",
	"    |                                                       |::|",
	"    |                                       _               |::|",
	"    |            \\     /  |  \\     /  |  �     `            |::|",
	"    |             `\\_/�   |   `\\_/�   | '       '           |::|",
	"    |              /\�\\    |    /\�\\    | '       '           |::|",
	"    |            /�   `\\  |  /�   `\\  |  `  -  �            |::|",
	"    |         ____________|___________|____________         |::|",
	"    |               _     |     _     |                     |::|",
	"    |            �     `  |  �     `  |  \\     /            |::|",
	"    |           '       ' | '       ' |   `\\_/�             |::|",
	"    |           '       ' | '       ' |    /\�\\              |::|",
	"    |	         `  -  �  |  `  -  �  |  /�   `\\            |::|",
	"    |         ____________|___________|____________         |::|",
	"    |                     |     _     |                     |::|",
	"    |           \\     /   |  �     `  |  \\     /            |::|",
	"    |            `\\_/�    | '       ' |   `\\_/�             |::|",
	"    |             /\�\\     | '       ' |    /\�\\              |::|",
	"    |	        /�   `\\   |  `  -  �  |  /�   `\\            |::|",
	"    |                                                       |::|",
	"    |   X - Sair                                O - Abrir   |::|",
	"    |                                                       |::|",
	"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'::|",
	"    \\::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|",
	"     `-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~�",	
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|                                                         `v� .-----------------------------------------------------..|",
	"|                                                          |:�                                                      ::|",
	"|                                                          |:            __               ,   __      _             ::|",
	"|                                                          |:           |__  !   ! |\\/|  /\\  |__| ' �   `           ::|",
	"|                                                          |:           .__| '._.' |  | /--\\ | \\  | `._.�           ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  1 - REGRAS B�SICAS................................1  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2 - FUNCIONAMENTO DO PROGRAMA.....................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.0 - Menu Principal:.............................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.1 - Op��o 1: Jogar..............................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.1.0 - Cadastro..................................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.2 - Op��o 2: O Livro............................6  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.2.0 - Controle do livro.........................6  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.3 - Op��o 3: Acessibilidade.....................7  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.3.0 - Direitos Humanos..........................7  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.3.1 - Menu Acessibilidade.......................8  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.3.2 - Criar Perfil Acessivel....................9  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  3 - DESTINADO AO LEITOR..........................14  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|  x - Fechar                                              |:                                           1 - Pr�ximo ::|",
	"|                                                          |`-------------------------------------------------------'�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"| .-----------------------------------------------------. `v� .-----------------------------------------------------..|",
	"| : 1                                                    `:|:�                                                    2 ::|",
	"| :                    REGRAS B�SICAS                     :|:                                                       ::|",
	"| :                                                       :|:       O primeiro a  conseguir 3 s�mbolos consecutivos ::|",
	"| :                                                       :|:                                                       ::|",
	"| :       Os jogadores dever�o escolher entre usar 'X' ou :|: em uma carreira, n�o importando se est�o na vertical, ::|",
	"| :                                                       :|:                                                       ::|",
	"| : 'O'. Esses s�mbolos devem ser dispostos sobre a tabe- :|: horizontal ou diagonal, ser� o vencedor.  Caso nenhum ::|",
	"| :                                                       :|:                                                       ::|",
	"| : la, na inten��o de obter 3 deles em uma carreira.     :|: consiga, dizemos que deu velha e ningu�m pontua.      ::|",
	"| :                                                       :|:                                                       ::|",
	"| :       Os jogadores se revezam colocando os seus       :|:                                                       ::|",
	"| :                                                       :|:   X | O |                                             ::|",
	"| : respectivos s�mbolos na tabela.                       :|:  ---|---|---                                          ::|",
	"| :                                                       :|:  'X'|'X'|'X' }-->  X - � o vencedor!                  ::|",
	"| :                                                       :|:  ---|---|---                                          ::|",
	"| :                                     _                 :|:   O |   | O                                           ::|",
	"| :          \\     /  |  \\     /  |  �     `              :|:                                                       ::|",
	"| :           `\\_/�   |   `\\_/�   | '       '             :|:     | O |'O'                                          ::|",
	"| :            /\�\\    |    /\�\\    | '       '             :|:  ---|---|---                                          ::|",
	"| :          /�   `\\  |  /�   `\\  |  `  -  �              :|:   X | X |'O'  }-->  O - � o vencedor!                 ::|",
	"| :       ____________|___________|____________           :|:  ---|---|---                                          ::|",
	"| :             _     |     _     |                       :|:   X |   |'O'                                          ::|",
	"| :          �     `  |  �     `  |  \\     /              :|:                                                       ::|",
	"| :         '       ' | '       ' |   `\\_/�               :|:  'X'| O | X                                           ::|",
	"| :         '       ' | '       ' |    /\�\\                :|:  ---|---|---                                          ::|",
	"| :          `  -  �  |  `  -  �  |  /�   `\\              :|:     |'X'| O   }-->  X - � o vencedor!                 ::|",
	"| :       ____________|___________|____________           :|:  ---|---|---                                          ::|",
	"| :                   |     _     |                       :|:   O |   |'X'                                          ::|",
	"| :         \\     /   |  �     `  |  \\     /              :|:                                                       ::|",
	"| :          `\\_/�    | '       ' |   `\\_/�               :|:   O | X | O                                           ::|",
	"| :           /\�\\     | '       ' |    /\�\\                :|:  ---|---|---                                          ::|",
	"| :         /�   `\\   |  `  -  �  |  /�   `\\              :|:   X | O | X   }--> Empatou - Deu Velha!               ::|",
	"| :                                                       :|:  ---|---|---                                          ::|",
	"| :                                                       :|:   X | O | X                                           ::|",
	"| :                                                       :|:                                                       ::|",
	"| :                                                       :|:                                                       ::|",
	"| : 0 - Anterior                                          :|:                                           1 - Pr�ximo ::|",
	"| '-------------------------------------------------------�|`-------------------------------------------------------'�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",	
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v� .-----------------------------------------------------..|",
	"|:: 3                                                    `:|:�                                                    4 ::|",
	"|::             FUNCIONAMENTO DO PROGRAMA                 :|:                                                       ::|",
	"|::                                                       :|:       Ap�s os nomes, � dado ao 'Jogador 1' o poder de ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Menu Principal:                                       :|: escolha entre: 'X' e 'O'.  Ao 'Jogador 2' � concedido ::|",
	"|::                                                       :|:                                                       ::|",
	"|::       O  menu principal  deste jogo  � composto por 3 :|: o  privil�gio de  iniciar o jogo,  sendo o primeiro a ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: menus interativos, (Jogar,  Livro  e Acessibilidade), :|: escolher uma  posi��o do tabuleiro. Conforme o resul- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: sendo  estes  acessados  atrav�s  do  pressionar  das :|: tado de cada partida for concebido  h� a intercala��o ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: teclas '1', '2' ou '3' precedido de 'Enter'.          :|: do jogador a iniciar a partida seguinte.              ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: # Os 3 Trof�us:  Estes  trof�us,  presentes  no  menu :|:       No menu p�s cadastro �  exibido o tabuleiro, na ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: principal,  indicam  as  3  melhores  pontua��es, com :|: sua direita h� um placar, onde fica registrado a pon- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: os  respectivos  jogadores  que  conseguiram  atingir :|: tua��o do jogador 'X', a pontua��o do tabuleiro/velha,::|",
	"|::                                                       :|:                                                       ::|",
	"|::                                                       :|: e a pontua��o do jogador 'O'.  A quantidade de parti- ::|",
	"|:: Op��o 1: Jogar                                        :|:                                                       ::|",
	"|::                                                       :|: das �  ilimitada, dependendo exclusivamente dos joga- ::|",
	"|:: Cadastro:                                             :|:                                                       ::|",
	"|::                                                       :|: dores o encerramento  do jogo.  Ao se encerrar, n�o � ::|",
	"|::       Esta escolha te levar� para o menu de cadastro, :|:                                                       ::|",
	"|::                                                       :|: mais capaz de retomar a sua posi��o no ranking.       ::|",
	"|:: que antecede o in�cio da partida.                     :|:                                                       ::|",
	"|::                                                       :|:   ._ _ _ _ _ _ _ _ _ _ _ _._ _ _ _ _ _ _ _ _ _ _ _.   ::|",
	"|::                   .--> Nome do Jogador 1              :|:   |                       |                  _    |   ::|",
	"|::                   |                                   :|:     \\   /             __|__|__            ,�   `.     ::|",
	"|:: O Cadastro Requer {--> Nome do Jogador 2              :|:      `X�              __|__|__            .     ,     ::|",
	"|::                   |                                   :|:     /� `\\               |  |               ` . �      ::|",
	"|::                   '--> Escolha de 'X' ou 'O'          :|:                                                       ::|",
	"|::                                                       :|:  Jogador 'X'           Velha             Jogador 'O'  ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Pr�ximo ::|",
	"|`'-------------------------------------------------------�|`-------------------------------------------------------'�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",	
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v� .-----------------------------------------------------..|",
	"|:: 5                                                    `:|:�                                                    6 ::|",
	"|::                                                       :|:                                                       ::|",
	"|::       A esquerda do tabuleiro h� um  ranking contendo :|: destacados na parte inferior  e suas respectivas pon- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: o top 10, onde os melhores jogadores se fazem presen- :|: tua��es s�o destacados na parte superior dos trof�us* ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: tes. Conforme o seu desempenho, voc� poder� entrar no :|:                                                       ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ranking e, estando entre os 3 melhores jogadores, seu :|: Op��o 2: O Livro                                      ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: nome e pontua��o ser�o  destacados no menu principal, :|:       Esta escolha  te levar�  ao livro, no qual voc� ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: sendo atribu�do a voc� o trof�u referente a sua posi- :|: se encontra neste  exato momento.  No livro, voc� en- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ��o do top 3.                                         :|: contrar� suporte para o entendimento deste jogo. Voc� ::|",
	"|::                                                       :|:                                                       ::|",
	"|::                                 'Pontua��o'           :|: ent�o pode abrir o livro e foliar, folha por folha ou ::|",
	"|::      ,----------,-~-.          ____________           :|:                                                       ::|",
	"|::     / 1- xxxxxx |,-, '    .�\\ /            \\ /`.      :|: atrav�s do sum�rio, ir direto ao que te interessa.    ::|",
	"|::     | 2- xxxxxx |j_ .`    \\  \\|      , O   |/  /      :|:                                                       ::|",
	"|::     | 3- xxxxxx |         /  /|     /|     |\\  \\      :|:                                                       ::|",
	"|::     | 5- xxxxxx |         `./ |     _|_    | \\.�      :|: + CONTROLE DO LIVRO:                                  ::|",
	"|::     | 7- xxxxxx |              `\\        /�           :|:                                                       ::|",
	"|::     | 9- xxxxxx |                 `\\  /�              :|:  'X' - Sair/Fechar o livro                            ::|",
	"|::     | 10- xxxxx |                   ||                :|:                                                       ::|",
	"|::     |_ _ _ __ _ |                   ||                :|:  'O' - Abrir o livro                                  ::|",
	"|::   .�_ __ _ _.�.:|                __/  \\__             :|:                                                       ::|",
	"|::   '._ _ __ _'._.'               /________\\            :|:  Em Sum�rio-.-> 1,2,3,4,5-.                           ::|",
	"|::                                   'Nome'              :|:             |             |                           ::|",
	"|::                                                       :|:             '-> Abre a p�gina do interesse            ::|",
	"|:: *Nos trof�us do menu principal,  referentes ao 1�, 2� :|:                                                       ::|",
	"|::                                                       :|:  '0' - P�gina anteror                                 ::|",
	"|:: e 3� lugar, o nome dos 3 melhores jogadores, que con- :|:                                                       ::|",
	"|::                                                       :|:  '1' - P�gina seguinte                                ::|",
	"|:: seguiram  conquistar e se destacar no ranking 10, s�o :|:                                                       ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Pr�ximo ::|",
	"|`'-------------------------------------------------------�|`-------------------------------------------------------'�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v� .-----------------------------------------------------. |",
	"|:: 7                                                    `:|:�                                                    8 ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Op��o 3: Acessibilidade                               :|: que  pessoas  n�o  possuem  defici�ncias, mas sim, os ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Direitos Humanos                                      :|: produtos que n�o se fazem acess�veis a elas.          ::|",
	"|::                                                       :|:                                                       ::|",
	"|::        No artigo 24� da  Declara��o Universal dos Di- :|:                                                       ::|",
	"|::                                                       :|: Menu Acessibilidade:                                  ::|",
	"|:: reitos Humanos diz:  \"Toda pessoa tem  direito ao re- :|:                                                       ::|",
	"|::                                                       :|:       O jogador encontrar� outras formas de intera��o ::|",
	"|:: pouso e aos lazeres...\". Esta � uma das premissas pa- :|:                                                       ::|",
	"|::                                                       :|: com o jogo, formas que n�o representam desvantagem ou ::|",
	"|:: ra garantir os direitos da pessoa humana.             :|:                                                       ::|",
	"|::                                                       :|: vantagem em rela��o aos demais jodadores. O menu �    ::|",
	"|::       \"Direitos humanos s�o todos os direitos relaci- :|:                                                       ::|",
	"|::                                                       :|: composto por Intera��o: visual, por toque e por fala. ::|",
	"|:: onados � garantia de uma vida digna a todas as pesso- :|:            _ _ _ _       _                            ::|",
	"|::                                                       :|:        _ /�. . . .\\__     | Esta fun��o requer o mo-  ::|",
	"|:: as. Os direitos humanos s�o direitos que s�o garanti- :|:     _ /  �   _      . \\_  | nitoramento dos movimen-  ::|",
	"|::                                                       :|:  _/    �  ,�   `.    `  \\ | tos faciais. Podendo mo-  ::|",
	"|:: dos � pessoa  pelo  simples fato de ser humana.  Eles :|: / _   '   .     ,    ' _/ }-> vimentar a cabe�a para  ::|",
	"|::                                                       :|: ''  \\__`   ` . �   ,�_/   | selecionar a posi��o (ou  ::|",
	"|:: devem ser garantidos a todos os cidad�os, de qualquer :|:         \\         _/      | atrav�s da auto sele��o)  ::|",
	"|::                                                       :|:          ``- - - �       _| pisca 2x marca a posi��o  ::|",
	"|:: parte do mundo e sem qualquer tipo  de discrimina��o, :|:                                                       ::|",
	"|::                                                       :|:          _               _                            ::|",
	"|:: como cor, religi�o, nacionalidade, g�nero, orienta��o :|:     (( /� `\\ ))           | Esta fun��o requer o apa- ::|",
	"|::                                                       :|:        |._.|              | relho JVA(v.2 ou v.3) co- ::|",
	"|:: sexual e pol�tica.\" E por que n�o f�sica?!            :|:    -   |   | , -.         | nectado ao dispositivo. O ::|",
	"|::                                                       :|:   �  \\ |   |;   : . -     | JVA  representa  o  tabu- ::|",
	"|::       Neste contexto, o presente jogo ambiciona a in- :|:   \\   \\|   |/   |/   '    }-> leiro em 3D, e faz lei- ::|",
	"|::                                                       :|:    \\                '     | tura da posi��o escolhida ::|",
	"|:: clus�o social de todos  os indiv�duos, inclusive por- :|:     \\              �      | possibilitando ao usu�rio ::|",
	"|::                                                       :|:      `.           �       | a saber como est� seu jo- ::|",
	"|:: tadores  de  necessidades especiais, pois acreditamos :|:        `- - - - �        _| go e escolher uma posi��o ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Pr�ximo ::|",
	"|`'-------------------------------------------------------�| `-------------------------------------------------------�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v� .-----------------------------------------------------..|",
	"|:: 9                                                    `:|:�                                                   10 ::|",
	"|::                           _                           :|:                                                       ::|",
	"|::       . - .     . - .      | Esta fun��o requer o mo- :|: de um perfil de acessibilidade previamente criado.    ::|",
	"|::     /�       `�      `\\    | nitoramento do microfone.:|:                                                       ::|",
	"|::   /�                   `\\  | Podendo o usu�rio d� co- :|:       Como o jogo visa a autonomia de todos,  a cria- ::|",
	"|::  /�_ . - - . _ . - - . _`\\ }-> mando de voz referente :|:                                                       ::|",
	"|::  \\.                     ./ | a posi��o que desejar e, :|: ��o do perfil de acessibilidade n�o poderia ser dife- ::|",
	"|::    ` .               . �   | caso ativo,  o assitente :|:                                                       ::|",
	"|::        ` - - . - - �      _| de voz ir� narrar o jogo :|: rente, sendo assim,  � poss�vel o pr�prio portador de ::|",
	"|::                                                       :|:                                                       ::|",
	"|::                                                       :|: necessidades especiais crie o seu perfil, sem aux�lio ::|",
	"|::       Ao selecionar uma op��es voc� ter� acesso a co- :|:                                                       ::|",
	"|::                                                       :|: de terceiros.                                         ::|",
	"|::  mo ativ�-las,  diretamente  no  menu de cadastro ou, :|:                                                       ::|",
	"|::                                                       :|:       Sempre que o jogo � iniciado ele acessa a c�me- ::|",
	"|:: caso prefira, poder� criar  um perfil, desta forma, o :|:                                                       ::|",
	"|::                                                       :|: ra (caso o usu�rio queira ele pode desativar este re- ::|",
	"|:: jogo te  identificar�,  atrav�s do acesso a c�mera do :|:                                                       ::|",
	"|::                                                       :|: curso, mas por padr�o vem ativo).  Com o acesso esta- ::|",
	"|:: dispositivo e, atrav�s do reconhecimento facial, aci- :|:                                                       ::|",
	"|::                                                       :|: belecido,  o jogo ir� procurar  em sua  base de dados ::|",
	"|:: onar� automaticamente o modo de acessibilidade perso- :|:                                                       ::|",
	"|::                                                       :|: pelo perfil  do usu�rio  em quest�o, atrav�s do reco- ::|",
	"|:: nalizado por voc�.                                    :|:                                                       ::|",
	"|::                                                       :|: nhecimento f�cil.  Caso n�o encontre,  o jogo entrar� ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Criar Perfil Acessivel:                               :|: em modo de cria��o de perfil em potencial, ativando o ::|",
	"|::                                                       :|:                                                       ::|",
	"|::       Como citado no t�pico anterior, o presente jogo :|: acesso ao microfone, esperando uma  intera��o do usu- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: visa a inclus�o,  de tal forma, pessoas portadoras de :|: �rio que indique o requerimento da cria��o de um per- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: necessidades especiais, conseguem jogar com quem elas :|: fil. A cria��o deste perfil ser� realizada por porta- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: quiserem,  atrav�s da ativa��o no menu de cadastro ou :|: dores de necessidades especiais das seguintes formas: ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Pr�ximo ::|",
	"|`'-------------------------------------------------------�| `------------------------------------------------------'�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v� .-----------------------------------------------------..|",
	"|:: 11                                                   `:|:�                                                   12 ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: + Intera��o visual -  Como o jogo tem acesso a c�mera :|: +Intera��o por toque - Ao jogo ser inicializado e n�o ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: do dispositivo,  ele monitora os  movimentos do usu�- :|: identificar um  perfil, correspondente  ao usu�rio em ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: rio,  sendo desta forma, ao usu�rio clicar 3x, o jogo :|: quest�o,  ele entrar� em modo  cadastro em potencial, ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: entrar� no modo de cria��o de perfil atrav�s da inte- :|: esperando uma intera��o  do usu�rio que indique o re- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ra��o visual. Neste menu interatico, adaptado as suas :|: querimento da  cria��o de perfil,  no caso do usu�rio ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: necessidades,  o usu�rio ser� apresentado a 2 op��es, :|: que precisa interagir por toque, o jogo ir� identifi- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: que seria a de gerar um nome aleat�rio ou,  ele mesmo :|: c�-lo  por  meio  da  conex�o USB do dispositivo JVA. ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: escrever o nome, caso escolha escrever, ele informar� :|: Estando ele conectado, o usu�rio dever� pressionar 2x ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: seu nome atrav�s  dos seus  movimentos  faciais ou da :|: no centro do JVA (correspondente a posi��o 5),  desta ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: auto sele��o,  piscando 2x para selecionar cada letra :|: forma, o menu de cadastro adaptado a ele ser� aberto, ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: no teclado virtual que lhe � apresentado. Ap�s o per- :|: ao usu�rio pressionar novamente  1x  no cetro do JVA, ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: fil ter o nome do usu�rio,  ser� exibido se ele dese- :|: o menu de cadastro ir� gerar um nome aleat�rio para o ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ja jogar atrav�s da sele��o autom�tica ou, pela sele- :|: usu�rio, e ent�o, o seu perfil ser� conclu�do. Mas se ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ��o por movimento, ao escolher uma, o seu perfil ser� :|: o  usu�rio  quer escrever o  pr�prio nome, ele poder� ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: criado e sempre que o mesmo abrir o jogo ele se adap- :|: usar o seu teclado em Braille, se possuir um, ou usar ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: tar� as necessidades deste usu�rio,  atrav�s do reco- :|: o pr�prio JVA, clicando 2x no cento do JVA, sendo as- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: nhecimento facial do mesmo.                           :|: sim, ele  passar� a ser reconhecido  como um teclado. ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Pr�ximo ::|",
	"|`'-------------------------------------------------------�|`-------------------------------------------------------'�|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v� .-----------------------------------------------------. |",
	"|:: 13                                                    `:|:�                                                  14 : |",
	"|::                                                       :|:                                                       : |",
	"|:: Usando o JVA para escrever o nome,  o usu�rio ir� in- :|: usu�rio poder� simplesmente dizer \"Gerar nome aleat�- : |",
	"|::                                                       :|:                                                       : |",
	"|:: formar cada letra por meio do pressionar de uma posi- :|: rio\" ou \"op��o 1\"  e ser� criado um  perfil para ele, : |",
	"|::                                                       :|:                                                       : |",
	"|:: ��o e da quantidade de cliques consecutivos.          :|: com um nome aleat�rio, ou o usu�rio poder� dizer \"in- : |",
	"|::                                                       :|:                                                       : |",
	"|::    Dispositivo JVA   P1- 1x=Espa�o || 2x=Enter        :|: formar nome\" ou \"op��o 2\" e o assistente virtual per- : |",
	"|::   .--------------.,  P2- 1x=a || 2x=b || 3x=c         :|:                                                       : |",
	"|::   | P1 | P2 | P3 |:  p3- 1x=d || 2x=e || 3x=f         :|: guntar� o seu nome e bastar� ele diz�-lo.             : |",
	"|::   |____|____|____|:  P4- 1x=g || 2x=h || 3x=i         :|:                                                       : |",
	"|::   | P4 | P5 | P6 |:  P5- 1x=j || 2x=k || 3x=l         :|:                                                       : |",
	"|::   |____|____|____|:  P6- 1x=m || 2x=n || 3x=o         :|:                                                       : |",
	"|::   | P7 | P8 | P9 |:  P7- 1x=p || 2x=q || 3x=r || 4x=s :|: DESTINADO AO LEITOR                                   : |",
	"|::   |_ _ |_ _ | _ _|:  P8- 1x=t || 2x=u || 3x=v         :|:                                                       : |",
	"|::   '---------------'  P9- 1x=w || 2x=x || 3x=y || 4x=z :|:       Prezado leito, o menu de acessibilidade n�o foi : |",
	"|::                                                       :|:                                                       : |",
	"|::                                                       :|: idealizado  para ser visto  como um diferencial deste : |",
	"|::                                                       :|:                                                       : |",
	"|:: +Intera��o por voz- Ao jogo ser inicializado e n�o i- :|: projeto integrador, mas sim, como um protesto  com um : |",
	"|::                                                       :|:                                                       : |",
	"|:: dentificar um perfil  correspondente ao usu�rio,  ele :|: papel social. Ele almeja mostrar que o mundo pode ser : |",
	"|::                                                       :|:                                                       : |",
	"|:: entrar�  em modo cria��o de perfil em potencial, este :|: acess�vel a todos, como est� destacado dentro do pr�- : |",
	"|::                                                       :|:                                                       : |",
	"|:: modo ativa  o acesso  ao  seu microfone, desta forma, :|: prio \"pessoas n�o possuem defici�ncias,  pessoas pos- : |",
	"|::                                                       :|:                                                       : |",
	"|:: basta o usu�rio falar \"Ei, criar perfil\".  Ao jogo i- :|: suem necessidades, quem tem defici�ncia � o mundo que : |",
	"|::                                                       :|:                                                       : |",
	"|:: dentificar esta frase, ele entrar� no modo de cria��o :|: n�o se faz  acess�vel a elas\". O que queremos mostrar : |",
	"|::                                                       :|:                                                       : |",
	"|:: de perfil, adaptado para comandos de voz,  e o assis- :|: com o menu acessibilidade  � que � poss�vel fazer com : |",
	"|::                                                       :|:                                                       : |",
	"|:: tente virtual, ir�  lhe  apresentar ao menu. Ent�o, o :|: que todos seres  humanos  tenham seus direitos funda- : |",
	"|::                                                       :|:                                                       : |",
	"|:: 0 - Anterior                                          :|:                                           1 - Pr�ximo : |",
	"|`'-------------------------------------------------------�|`-------------------------------------------------------' |",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v�                                                         |",
	"|:: 15                                                   `:|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: mentais garantidos,  inclusive o  direito ao lazer. E :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: para fechar essa discuss�o,  lhes deixo um questiona- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: mento:  se o primeiro per�odo � capaz de idealizar um :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: jogo acess�vel,  por que jogos assim n�o s�o uma rea- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: lidade? Ser� que o idealizador deste jogo � um g�nio? :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: #J� lhes adianto a resposta: n�o, n�o h� nenhum g�nio :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: envolvido neste projeto, a �nica diferen�a do presen- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: te jogo para as empresas que n�o fazem produtos aces- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: s�veis se  resume nestas palavras:  querer,  empatia, :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: respeito e conscientiza��o.                           :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: 0 - Anterior                                          :|                                              X - Fechar  |",
	"|`'-------------------------------------------------------�|                                                          |",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~� "};
//funcao para passar as folhas do livro para a proxima  
int pro_pagina (int a, int b){
	int i;
	char capa, sumario, pag;
	// Capa do livro
	if (a==0 && b==42){
		for(i=0; i<42; i++)
		printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& capa);
		system("cls");
	}
	// Sum�rio
	if (capa=='O' || capa=='o' || capa=='0' || a==42 && b==84){
		for(i=42; i<84; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& sumario);
		system("cls");
	}
	if (sumario=='X' || sumario=='x'){
		ant_pagina (0, 42);
	}
	// P�gina 1|2
	else if(sumario=='1' || sumario=='2' || a==84 && b==126){
		for(i=84; i<126; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (42, 83);
	}
	// P�gina 3|4	
	else if(pag=='1' || sumario=='3'|| sumario=='4' || a==126 && b==168){
		for(i=126; i<168; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (84, 126);
	}
	// P�gina 5/6
	else if(pag=='1' || sumario=='5'|| sumario=='6'|| a==168 && b==210){
		for(i=168; i<210; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (126, 168);
	}
	// P�gina 7/8
	else if(pag=='1' || sumario=='7'|| sumario=='8' || a==210 && b==294){
		for(i=210; i<252; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (168, 210);
	}
	// P�gina 9/10
	else if(pag=='1' || sumario=='9' || sumario=='10' || a==252 && b==294){
		for(i=252; i<294; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (210, 294);
	}
	// P�gina 11/12
	else if(pag=='1' || sumario=='11' || sumario=='12' || a==252 && b==294){
		for(i=294; i<336; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (252, 294);
	}
	// P�gina 13/14
	else if(pag=='1' || sumario=='13' || sumario=='14' || a==252 && b==294){
		for(i=336; i<378; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (294, 336);
	}
	// P�gina 15
	else if(pag=='1' || sumario=='9' || a==252 && b==294){
		for(i=378; i<420; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='0'){
		pag=' ';
		ant_pagina (336, 378);
	}
	else if (capa=='X' || capa=='x')
		return 0;
	else{
		ant_pagina (0, 42);	
	}
}

//funcao para passar as folhas do livro para a anterior  
int ant_pagina (int a, int b){
	int i;
	char capa, sumario, pag;
	// P�gina 15
	if(a==378 && b==420){
		for(i=378; i<420; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	// P�gina 13/14
	else if(pag=='0' || a==336 && b==378){
		for(i=336; i<378; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (378, 420);
	}
	// P�gina 11/12
	else if(pag=='0' || a==294 && b==336){
		for(i=294; i<336; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (336, 378);
	}
	// P�gina 9/10
	else if(pag=='0' || a==252 && b==294){
		for(i=252; i<294; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (294, 336);
	}
	// P�gina 7/8
	else if(pag=='0' || a==210 && b==294){
		for(i=210; i<252; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (252, 294);
	}
	// P�gina 5/6
	else if(pag=='0' || a==168 && b==210){
		for(i=168; i<210; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (210, 294);
	}
	// P�gina 3|4	
	else if(pag=='0' || a==126 && b==168){	
		for(i=126; i<168; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (168, 210);
	}
	// P�gina 1|2
	else if(pag=='0' || a==84 && b==126){
		for(i=84; i<126; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	if (pag=='1'){
		pag=' ';
		pro_pagina (126, 168);
	}
	// Sum�rio
	else if (pag=='0' || a==42 && b==83){
		pro_pagina (42, 84);
		system("cls");
	}
	if (sumario=='1'){
		pag=' ';
		pro_pagina (84, 126);
	}
	// Capa do livro
	else if ( a==0 && b==42){
		for(i=0; i<42; i++)
		printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& capa);
		system("cls");
	}
	if (capa=='O' || capa=='o' || capa=='0'){
		pro_pagina (42, 84);
	}
	else if (capa=='X' || capa=='x')
		return 0;
	else {
		pro_pagina (0, 42);	
	}
}
