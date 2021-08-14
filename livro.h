#include<stdio.h>
#include<string.h>
#include<locale.h>

	char livro[420][120]={
	"      ,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.~.",
	"     /                                                      |::|",
	"    |  ..     ..    ..    ..    .. ..    ..    ..    ..     |::|",
	"    |  ||\\\\ //||   //\\\\   ||\\\\  || ||    ||   //\\\\   ||     |::|",
	"    |  ||  v  ||  //__\\\\  || \\\\ || ''    ''  //__\\\\  ||     |::|",
	"    |  ||     || //    \\\\ ||  \\\\||  ``__´´  //    \\\\ ||___  |::|",
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
	"    |            \\     /  |  \\     /  |  ´     `            |::|",
	"    |             `\\_/´   |   `\\_/´   | '       '           |::|",
	"    |              /\¨\\    |    /\¨\\    | '       '           |::|",
	"    |            /´   `\\  |  /´   `\\  |  `  -  ´            |::|",
	"    |         ____________|___________|____________         |::|",
	"    |               _     |     _     |                     |::|",
	"    |            ´     `  |  ´     `  |  \\     /            |::|",
	"    |           '       ' | '       ' |   `\\_/´             |::|",
	"    |           '       ' | '       ' |    /\¨\\              |::|",
	"    |	         `  -  ´  |  `  -  ´  |  /´   `\\            |::|",
	"    |         ____________|___________|____________         |::|",
	"    |                     |     _     |                     |::|",
	"    |           \\     /   |  ´     `  |  \\     /            |::|",
	"    |            `\\_/´    | '       ' |   `\\_/´             |::|",
	"    |             /\¨\\     | '       ' |    /\¨\\              |::|",
	"    |	        /´   `\\   |  `  -  ´  |  /´   `\\            |::|",
	"    |                                                       |::|",
	"    |   X - Sair                                O - Abrir   |::|",
	"    |                                                       |::|",
	"    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'::|",
	"    \\::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|",
	"     `-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´",	
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|                                                         `v´ .-----------------------------------------------------..|",
	"|                                                          |:´                                                      ::|",
	"|                                                          |:            __               ,   __      _             ::|",
	"|                                                          |:           |__  !   ! |\\/|  /\\  |__| ' ´   `           ::|",
	"|                                                          |:           .__| '._.' |  | /--\\ | \\  | `._.´           ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  1 - REGRAS BÁSICAS................................1  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2 - FUNCIONAMENTO DO PROGRAMA.....................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.0 - Menu Principal:.............................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.1 - Opção 1: Jogar..............................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.1.0 - Cadastro..................................3  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.2 - Opção 2: O Livro............................6  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.2.0 - Controle do livro.........................6  ::|",
	"|                                                          |:                                                       ::|",
	"|                                                          |:  2.3 - Opção 3: Acessibilidade.....................7  ::|",
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
	"|  x - Fechar                                              |:                                           1 - Próximo ::|",
	"|                                                          |`-------------------------------------------------------'´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"| .-----------------------------------------------------. `v´ .-----------------------------------------------------..|",
	"| : 1                                                    `:|:´                                                    2 ::|",
	"| :                    REGRAS BÁSICAS                     :|:                                                       ::|",
	"| :                                                       :|:       O primeiro a  conseguir 3 símbolos consecutivos ::|",
	"| :                                                       :|:                                                       ::|",
	"| :       Os jogadores deverão escolher entre usar 'X' ou :|: em uma carreira, não importando se estão na vertical, ::|",
	"| :                                                       :|:                                                       ::|",
	"| : 'O'. Esses símbolos devem ser dispostos sobre a tabe- :|: horizontal ou diagonal, será o vencedor.  Caso nenhum ::|",
	"| :                                                       :|:                                                       ::|",
	"| : la, na intenção de obter 3 deles em uma carreira.     :|: consiga, dizemos que deu velha e ninguém pontua.      ::|",
	"| :                                                       :|:                                                       ::|",
	"| :       Os jogadores se revezam colocando os seus       :|:                                                       ::|",
	"| :                                                       :|:   X | O |                                             ::|",
	"| : respectivos símbolos na tabela.                       :|:  ---|---|---                                          ::|",
	"| :                                                       :|:  'X'|'X'|'X' }-->  X - É o vencedor!                  ::|",
	"| :                                                       :|:  ---|---|---                                          ::|",
	"| :                                     _                 :|:   O |   | O                                           ::|",
	"| :          \\     /  |  \\     /  |  ´     `              :|:                                                       ::|",
	"| :           `\\_/´   |   `\\_/´   | '       '             :|:     | O |'O'                                          ::|",
	"| :            /\¨\\    |    /\¨\\    | '       '             :|:  ---|---|---                                          ::|",
	"| :          /´   `\\  |  /´   `\\  |  `  -  ´              :|:   X | X |'O'  }-->  O - É o vencedor!                 ::|",
	"| :       ____________|___________|____________           :|:  ---|---|---                                          ::|",
	"| :             _     |     _     |                       :|:   X |   |'O'                                          ::|",
	"| :          ´     `  |  ´     `  |  \\     /              :|:                                                       ::|",
	"| :         '       ' | '       ' |   `\\_/´               :|:  'X'| O | X                                           ::|",
	"| :         '       ' | '       ' |    /\¨\\                :|:  ---|---|---                                          ::|",
	"| :          `  -  ´  |  `  -  ´  |  /´   `\\              :|:     |'X'| O   }-->  X - É o vencedor!                 ::|",
	"| :       ____________|___________|____________           :|:  ---|---|---                                          ::|",
	"| :                   |     _     |                       :|:   O |   |'X'                                          ::|",
	"| :         \\     /   |  ´     `  |  \\     /              :|:                                                       ::|",
	"| :          `\\_/´    | '       ' |   `\\_/´               :|:   O | X | O                                           ::|",
	"| :           /\¨\\     | '       ' |    /\¨\\                :|:  ---|---|---                                          ::|",
	"| :         /´   `\\   |  `  -  ´  |  /´   `\\              :|:   X | O | X   }--> Empatou - Deu Velha!               ::|",
	"| :                                                       :|:  ---|---|---                                          ::|",
	"| :                                                       :|:   X | O | X                                           ::|",
	"| :                                                       :|:                                                       ::|",
	"| :                                                       :|:                                                       ::|",
	"| : 0 - Anterior                                          :|:                                           1 - Próximo ::|",
	"| '-------------------------------------------------------´|`-------------------------------------------------------'´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",	
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´ .-----------------------------------------------------..|",
	"|:: 3                                                    `:|:´                                                    4 ::|",
	"|::             FUNCIONAMENTO DO PROGRAMA                 :|:                                                       ::|",
	"|::                                                       :|:       Após os nomes, é dado ao 'Jogador 1' o poder de ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Menu Principal:                                       :|: escolha entre: 'X' e 'O'.  Ao 'Jogador 2' é concedido ::|",
	"|::                                                       :|:                                                       ::|",
	"|::       O  menu principal  deste jogo  é composto por 3 :|: o  privilégio de  iniciar o jogo,  sendo o primeiro a ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: menus interativos, (Jogar,  Livro  e Acessibilidade), :|: escolher uma  posição do tabuleiro. Conforme o resul- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: sendo  estes  acessados  através  do  pressionar  das :|: tado de cada partida for concebido  há a intercalação ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: teclas '1', '2' ou '3' precedido de 'Enter'.          :|: do jogador a iniciar a partida seguinte.              ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: # Os 3 Troféus:  Estes  troféus,  presentes  no  menu :|:       No menu pós cadastro é  exibido o tabuleiro, na ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: principal,  indicam  as  3  melhores  pontuações, com :|: sua direita há um placar, onde fica registrado a pon- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: os  respectivos  jogadores  que  conseguiram  atingir :|: tuação do jogador 'X', a pontuação do tabuleiro/velha,::|",
	"|::                                                       :|:                                                       ::|",
	"|::                                                       :|: e a pontuação do jogador 'O'.  A quantidade de parti- ::|",
	"|:: Opção 1: Jogar                                        :|:                                                       ::|",
	"|::                                                       :|: das é  ilimitada, dependendo exclusivamente dos joga- ::|",
	"|:: Cadastro:                                             :|:                                                       ::|",
	"|::                                                       :|: dores o encerramento  do jogo.  Ao se encerrar, não é ::|",
	"|::       Esta escolha te levará para o menu de cadastro, :|:                                                       ::|",
	"|::                                                       :|: mais capaz de retomar a sua posição no ranking.       ::|",
	"|:: que antecede o início da partida.                     :|:                                                       ::|",
	"|::                                                       :|:   ._ _ _ _ _ _ _ _ _ _ _ _._ _ _ _ _ _ _ _ _ _ _ _.   ::|",
	"|::                   .--> Nome do Jogador 1              :|:   |                       |                  _    |   ::|",
	"|::                   |                                   :|:     \\   /             __|__|__            ,´   `.     ::|",
	"|:: O Cadastro Requer {--> Nome do Jogador 2              :|:      `X´              __|__|__            .     ,     ::|",
	"|::                   |                                   :|:     /´ `\\               |  |               ` . ´      ::|",
	"|::                   '--> Escolha de 'X' ou 'O'          :|:                                                       ::|",
	"|::                                                       :|:  Jogador 'X'           Velha             Jogador 'O'  ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Próximo ::|",
	"|`'-------------------------------------------------------´|`-------------------------------------------------------'´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",	
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´ .-----------------------------------------------------..|",
	"|:: 5                                                    `:|:´                                                    6 ::|",
	"|::                                                       :|:                                                       ::|",
	"|::       A esquerda do tabuleiro há um  ranking contendo :|: destacados na parte inferior  e suas respectivas pon- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: o top 10, onde os melhores jogadores se fazem presen- :|: tuações são destacados na parte superior dos troféus* ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: tes. Conforme o seu desempenho, você poderá entrar no :|:                                                       ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ranking e, estando entre os 3 melhores jogadores, seu :|: Opção 2: O Livro                                      ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: nome e pontuação serão  destacados no menu principal, :|:       Esta escolha  te levará  ao livro, no qual você ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: sendo atribuído a você o troféu referente a sua posi- :|: se encontra neste  exato momento.  No livro, você en- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ção do top 3.                                         :|: contrará suporte para o entendimento deste jogo. Você ::|",
	"|::                                                       :|:                                                       ::|",
	"|::                                 'Pontuação'           :|: então pode abrir o livro e foliar, folha por folha ou ::|",
	"|::      ,----------,-~-.          ____________           :|:                                                       ::|",
	"|::     / 1- xxxxxx |,-, '    .´\\ /            \\ /`.      :|: através do sumário, ir direto ao que te interessa.    ::|",
	"|::     | 2- xxxxxx |j_ .`    \\  \\|      , O   |/  /      :|:                                                       ::|",
	"|::     | 3- xxxxxx |         /  /|     /|     |\\  \\      :|:                                                       ::|",
	"|::     | 5- xxxxxx |         `./ |     _|_    | \\.´      :|: + CONTROLE DO LIVRO:                                  ::|",
	"|::     | 7- xxxxxx |              `\\        /´           :|:                                                       ::|",
	"|::     | 9- xxxxxx |                 `\\  /´              :|:  'X' - Sair/Fechar o livro                            ::|",
	"|::     | 10- xxxxx |                   ||                :|:                                                       ::|",
	"|::     |_ _ _ __ _ |                   ||                :|:  'O' - Abrir o livro                                  ::|",
	"|::   .´_ __ _ _.´.:|                __/  \\__             :|:                                                       ::|",
	"|::   '._ _ __ _'._.'               /________\\            :|:  Em Sumário-.-> 1,2,3,4,5-.                           ::|",
	"|::                                   'Nome'              :|:             |             |                           ::|",
	"|::                                                       :|:             '-> Abre a página do interesse            ::|",
	"|:: *Nos troféus do menu principal,  referentes ao 1º, 2º :|:                                                       ::|",
	"|::                                                       :|:  '0' - Página anteror                                 ::|",
	"|:: e 3º lugar, o nome dos 3 melhores jogadores, que con- :|:                                                       ::|",
	"|::                                                       :|:  '1' - Página seguinte                                ::|",
	"|:: seguiram  conquistar e se destacar no ranking 10, são :|:                                                       ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Próximo ::|",
	"|`'-------------------------------------------------------´|`-------------------------------------------------------'´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´ .-----------------------------------------------------. |",
	"|:: 7                                                    `:|:´                                                    8 ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Opção 3: Acessibilidade                               :|: que  pessoas  não  possuem  deficiências, mas sim, os ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Direitos Humanos                                      :|: produtos que não se fazem acessíveis a elas.          ::|",
	"|::                                                       :|:                                                       ::|",
	"|::        No artigo 24° da  Declaração Universal dos Di- :|:                                                       ::|",
	"|::                                                       :|: Menu Acessibilidade:                                  ::|",
	"|:: reitos Humanos diz:  \"Toda pessoa tem  direito ao re- :|:                                                       ::|",
	"|::                                                       :|:       O jogador encontrará outras formas de interação ::|",
	"|:: pouso e aos lazeres...\". Esta é uma das premissas pa- :|:                                                       ::|",
	"|::                                                       :|: com o jogo, formas que não representam desvantagem ou ::|",
	"|:: ra garantir os direitos da pessoa humana.             :|:                                                       ::|",
	"|::                                                       :|: vantagem em relação aos demais jodadores. O menu é    ::|",
	"|::       \"Direitos humanos são todos os direitos relaci- :|:                                                       ::|",
	"|::                                                       :|: composto por Interação: visual, por toque e por fala. ::|",
	"|:: onados à garantia de uma vida digna a todas as pesso- :|:            _ _ _ _       _                            ::|",
	"|::                                                       :|:        _ /´. . . .\\__     | Esta função requer o mo-  ::|",
	"|:: as. Os direitos humanos são direitos que são garanti- :|:     _ /  ´   _      . \\_  | nitoramento dos movimen-  ::|",
	"|::                                                       :|:  _/    ´  ,´   `.    `  \\ | tos faciais. Podendo mo-  ::|",
	"|:: dos à pessoa  pelo  simples fato de ser humana.  Eles :|: / _   '   .     ,    ' _/ }-> vimentar a cabeça para  ::|",
	"|::                                                       :|: ''  \\__`   ` . ´   ,´_/   | selecionar a posição (ou  ::|",
	"|:: devem ser garantidos a todos os cidadãos, de qualquer :|:         \\         _/      | através da auto seleção)  ::|",
	"|::                                                       :|:          ``- - - ´       _| pisca 2x marca a posição  ::|",
	"|:: parte do mundo e sem qualquer tipo  de discriminação, :|:                                                       ::|",
	"|::                                                       :|:          _               _                            ::|",
	"|:: como cor, religião, nacionalidade, gênero, orientação :|:     (( /´ `\\ ))           | Esta função requer o apa- ::|",
	"|::                                                       :|:        |._.|              | relho JVA(v.2 ou v.3) co- ::|",
	"|:: sexual e política.\" E por que não física?!            :|:    -   |   | , -.         | nectado ao dispositivo. O ::|",
	"|::                                                       :|:   ´  \\ |   |;   : . -     | JVA  representa  o  tabu- ::|",
	"|::       Neste contexto, o presente jogo ambiciona a in- :|:   \\   \\|   |/   |/   '    }-> leiro em 3D, e faz lei- ::|",
	"|::                                                       :|:    \\                '     | tura da posição escolhida ::|",
	"|:: clusão social de todos  os indivíduos, inclusive por- :|:     \\              ´      | possibilitando ao usuário ::|",
	"|::                                                       :|:      `.           ´       | a saber como está seu jo- ::|",
	"|:: tadores  de  necessidades especiais, pois acreditamos :|:        `- - - - ´        _| go e escolher uma posição ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Próximo ::|",
	"|`'-------------------------------------------------------´| `-------------------------------------------------------´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´ .-----------------------------------------------------..|",
	"|:: 9                                                    `:|:´                                                   10 ::|",
	"|::                           _                           :|:                                                       ::|",
	"|::       . - .     . - .      | Esta função requer o mo- :|: de um perfil de acessibilidade previamente criado.    ::|",
	"|::     /´       `´      `\\    | nitoramento do microfone.:|:                                                       ::|",
	"|::   /´                   `\\  | Podendo o usuário dá co- :|:       Como o jogo visa a autonomia de todos,  a cria- ::|",
	"|::  /´_ . - - . _ . - - . _`\\ }-> mando de voz referente :|:                                                       ::|",
	"|::  \\.                     ./ | a posição que desejar e, :|: ção do perfil de acessibilidade não poderia ser dife- ::|",
	"|::    ` .               . ´   | caso ativo,  o assitente :|:                                                       ::|",
	"|::        ` - - . - - ´      _| de voz irá narrar o jogo :|: rente, sendo assim,  é possível o próprio portador de ::|",
	"|::                                                       :|:                                                       ::|",
	"|::                                                       :|: necessidades especiais crie o seu perfil, sem auxílio ::|",
	"|::       Ao selecionar uma opções você terá acesso a co- :|:                                                       ::|",
	"|::                                                       :|: de terceiros.                                         ::|",
	"|::  mo ativá-las,  diretamente  no  menu de cadastro ou, :|:                                                       ::|",
	"|::                                                       :|:       Sempre que o jogo é iniciado ele acessa a câme- ::|",
	"|:: caso prefira, poderá criar  um perfil, desta forma, o :|:                                                       ::|",
	"|::                                                       :|: ra (caso o usuário queira ele pode desativar este re- ::|",
	"|:: jogo te  identificará,  através do acesso a câmera do :|:                                                       ::|",
	"|::                                                       :|: curso, mas por padrão vem ativo).  Com o acesso esta- ::|",
	"|:: dispositivo e, através do reconhecimento facial, aci- :|:                                                       ::|",
	"|::                                                       :|: belecido,  o jogo irá procurar  em sua  base de dados ::|",
	"|:: onará automaticamente o modo de acessibilidade perso- :|:                                                       ::|",
	"|::                                                       :|: pelo perfil  do usuário  em questão, através do reco- ::|",
	"|:: nalizado por você.                                    :|:                                                       ::|",
	"|::                                                       :|: nhecimento fácil.  Caso não encontre,  o jogo entrará ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: Criar Perfil Acessivel:                               :|: em modo de criação de perfil em potencial, ativando o ::|",
	"|::                                                       :|:                                                       ::|",
	"|::       Como citado no tópico anterior, o presente jogo :|: acesso ao microfone, esperando uma  interação do usu- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: visa a inclusão,  de tal forma, pessoas portadoras de :|: ário que indique o requerimento da criação de um per- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: necessidades especiais, conseguem jogar com quem elas :|: fil. A criação deste perfil será realizada por porta- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: quiserem,  através da ativação no menu de cadastro ou :|: dores de necessidades especiais das seguintes formas: ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Próximo ::|",
	"|`'-------------------------------------------------------´| `------------------------------------------------------'´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´ .-----------------------------------------------------..|",
	"|:: 11                                                   `:|:´                                                   12 ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: + Interação visual -  Como o jogo tem acesso a câmera :|: +Interação por toque - Ao jogo ser inicializado e não ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: do dispositivo,  ele monitora os  movimentos do usuá- :|: identificar um  perfil, correspondente  ao usuário em ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: rio,  sendo desta forma, ao usuário clicar 3x, o jogo :|: questão,  ele entrará em modo  cadastro em potencial, ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: entrará no modo de criação de perfil através da inte- :|: esperando uma interação  do usuário que indique o re- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ração visual. Neste menu interatico, adaptado as suas :|: querimento da  criação de perfil,  no caso do usuário ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: necessidades,  o usuário será apresentado a 2 opções, :|: que precisa interagir por toque, o jogo irá identifi- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: que seria a de gerar um nome aleatório ou,  ele mesmo :|: cá-lo  por  meio  da  conexão USB do dispositivo JVA. ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: escrever o nome, caso escolha escrever, ele informará :|: Estando ele conectado, o usuário deverá pressionar 2x ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: seu nome através  dos seus  movimentos  faciais ou da :|: no centro do JVA (correspondente a posição 5),  desta ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: auto seleção,  piscando 2x para selecionar cada letra :|: forma, o menu de cadastro adaptado a ele será aberto, ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: no teclado virtual que lhe é apresentado. Após o per- :|: ao usuário pressionar novamente  1x  no cetro do JVA, ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: fil ter o nome do usuário,  será exibido se ele dese- :|: o menu de cadastro irá gerar um nome aleatório para o ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ja jogar através da seleção automática ou, pela sele- :|: usuário, e então, o seu perfil será concluído. Mas se ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: ção por movimento, ao escolher uma, o seu perfil será :|: o  usuário  quer escrever o  próprio nome, ele poderá ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: criado e sempre que o mesmo abrir o jogo ele se adap- :|: usar o seu teclado em Braille, se possuir um, ou usar ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: tará as necessidades deste usuário,  através do reco- :|: o próprio JVA, clicando 2x no cento do JVA, sendo as- ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: nhecimento facial do mesmo.                           :|: sim, ele  passará a ser reconhecido  como um teclado. ::|",
	"|::                                                       :|:                                                       ::|",
	"|:: 0 - Anterior                                          :|:                                           1 - Próximo ::|",
	"|`'-------------------------------------------------------´|`-------------------------------------------------------'´|",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´ .-----------------------------------------------------. |",
	"|:: 13                                                    `:|:´                                                  14 : |",
	"|::                                                       :|:                                                       : |",
	"|:: Usando o JVA para escrever o nome,  o usuário irá in- :|: usuário poderá simplesmente dizer \"Gerar nome aleató- : |",
	"|::                                                       :|:                                                       : |",
	"|:: formar cada letra por meio do pressionar de uma posi- :|: rio\" ou \"opção 1\"  e será criado um  perfil para ele, : |",
	"|::                                                       :|:                                                       : |",
	"|:: ção e da quantidade de cliques consecutivos.          :|: com um nome aleatório, ou o usuário poderá dizer \"in- : |",
	"|::                                                       :|:                                                       : |",
	"|::    Dispositivo JVA   P1- 1x=Espaço || 2x=Enter        :|: formar nome\" ou \"opção 2\" e o assistente virtual per- : |",
	"|::   .--------------.,  P2- 1x=a || 2x=b || 3x=c         :|:                                                       : |",
	"|::   | P1 | P2 | P3 |:  p3- 1x=d || 2x=e || 3x=f         :|: guntará o seu nome e bastará ele dizê-lo.             : |",
	"|::   |____|____|____|:  P4- 1x=g || 2x=h || 3x=i         :|:                                                       : |",
	"|::   | P4 | P5 | P6 |:  P5- 1x=j || 2x=k || 3x=l         :|:                                                       : |",
	"|::   |____|____|____|:  P6- 1x=m || 2x=n || 3x=o         :|:                                                       : |",
	"|::   | P7 | P8 | P9 |:  P7- 1x=p || 2x=q || 3x=r || 4x=s :|: DESTINADO AO LEITOR                                   : |",
	"|::   |_ _ |_ _ | _ _|:  P8- 1x=t || 2x=u || 3x=v         :|:                                                       : |",
	"|::   '---------------'  P9- 1x=w || 2x=x || 3x=y || 4x=z :|:       Prezado leito, o menu de acessibilidade não foi : |",
	"|::                                                       :|:                                                       : |",
	"|::                                                       :|: idealizado  para ser visto  como um diferencial deste : |",
	"|::                                                       :|:                                                       : |",
	"|:: +Interação por voz- Ao jogo ser inicializado e não i- :|: projeto integrador, mas sim, como um protesto  com um : |",
	"|::                                                       :|:                                                       : |",
	"|:: dentificar um perfil  correspondente ao usuário,  ele :|: papel social. Ele almeja mostrar que o mundo pode ser : |",
	"|::                                                       :|:                                                       : |",
	"|:: entrará  em modo criação de perfil em potencial, este :|: acessível a todos, como está destacado dentro do pró- : |",
	"|::                                                       :|:                                                       : |",
	"|:: modo ativa  o acesso  ao  seu microfone, desta forma, :|: prio \"pessoas não possuem deficiências,  pessoas pos- : |",
	"|::                                                       :|:                                                       : |",
	"|:: basta o usuário falar \"Ei, criar perfil\".  Ao jogo i- :|: suem necessidades, quem tem deficiência é o mundo que : |",
	"|::                                                       :|:                                                       : |",
	"|:: dentificar esta frase, ele entrará no modo de criação :|: não se faz  acessível a elas\". O que queremos mostrar : |",
	"|::                                                       :|:                                                       : |",
	"|:: de perfil, adaptado para comandos de voz,  e o assis- :|: com o menu acessibilidade  é que é possível fazer com : |",
	"|::                                                       :|:                                                       : |",
	"|:: tente virtual, irá  lhe  apresentar ao menu. Então, o :|: que todos seres  humanos  tenham seus direitos funda- : |",
	"|::                                                       :|:                                                       : |",
	"|:: 0 - Anterior                                          :|:                                           1 - Próximo : |",
	"|`'-------------------------------------------------------´|`-------------------------------------------------------' |",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ ",
	"                                                                                                                       ",
	" .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~. ",
	"|..-----------------------------------------------------. `v´                                                         |",
	"|:: 15                                                   `:|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: mentais garantidos,  inclusive o  direito ao lazer. E :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: para fechar essa discussão,  lhes deixo um questiona- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: mento:  se o primeiro período é capaz de idealizar um :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: jogo acessível,  por que jogos assim não são uma rea- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: lidade? Será que o idealizador deste jogo é um gênio? :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: #Já lhes adianto a resposta: não, não há nenhum gênio :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: envolvido neste projeto, a única diferença do presen- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: te jogo para as empresas que não fazem produtos aces- :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: síveis se  resume nestas palavras:  querer,  empatia, :|                                                          |",
	"|::                                                       :|                                                          |",
	"|:: respeito e conscientização.                           :|                                                          |",
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
	"|`'-------------------------------------------------------´|                                                          |",
	" `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~-^-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´ "};
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
	// Sumário
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
	// Página 1|2
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
	// Página 3|4	
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
	// Página 5/6
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
	// Página 7/8
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
	// Página 9/10
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
	// Página 11/12
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
	// Página 13/14
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
	// Página 15
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
	// Página 15
	if(a==378 && b==420){
		for(i=378; i<420; i++)
			printf("\n%s", livro[i]);
		fflush(stdin);
		scanf("%c",& pag);
		system("cls");
	}
	// Página 13/14
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
	// Página 11/12
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
	// Página 9/10
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
	// Página 7/8
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
	// Página 5/6
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
	// Página 3|4	
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
	// Página 1|2
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
	// Sumário
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
