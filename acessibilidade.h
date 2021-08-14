#include<stdio.h>
#include<string.h>
#include<locale.h>
//funcao para exibir o menu acessibilidade
int acessibilidade(void){
	int i=0, c=0;
	char op, i_visual[12][54]={
	"                _ .  -  -  -  .  _                   ",
	"           . '                      ' .              ",
	"         /�                             `\\           ",
	"       /�           _ . - - - . _         `\\         ",
	"     /�       _ - �      _        ` - _     `\\       ",
	"   /�   _ - �  �      �     `        `  ` - _ `\\     ",
	" /�_- �       �      '       '        `      `-_`\\   ",
	" `\\ `--_      '      '       '        '       -� /�  ",
	"    `.  `- _   `      `  -  �        �   _ -� .�     ",
	"       ` .   ` -`- . _ _ _ _ _ . - -�- �  . �        ",
	"           ` . _                      . �            ",
	"                 ' -  -   .   -  - '                 "},
	i_toque[17][37]={
	"                 __                 ",
	"          __   /�  `\\   __          ",
	"        /�  `\\ |\\__/| /�  `\\        ",
	"        |\\__/| |    | |\\__/|        ",
	"        |    | |    | |    |        ",
	"        |    | |    | |    |        ",
	"  - -_  |    | |    | |    |  _- -  ",
	" �    \\ |    | |    | |    | /    : ",
	" \\     \\|    |/     |/     :/    /  ",
	"  \\                        '    /   ",
	"   \\                           �    ",
	"    `                         �     ",
	"     `                       �      ",
	"      `                     �       ",
	"       `.                 �         ",
	"          - - - - - -- .�           "},
	i_fala[11][51]={
	"            .  -  -  .     .  -  -  .             ",
	"         /�            `v�            `\\          ",
	"       /�                               `\\        ",
	"     /�                                   `\\      ",
	"   /�                                       `\\    ",
	" /�- _ . . - - - - - .  _  . - - - - - . . _ -`\\  ",
	" `\\                                           /�  ",
	"   `.                                       .�    ",
	"      ` .                               . �       ",
	"          ` .                       . �           ",
	"               ' -  -   .   -  - '                "};
		
	printf("\t                     .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.\n");
	printf("\t                     |                            ..  .__ .__ .__  .__  . .    .     .    .  ..     . .__                            |\n");
	printf("\t                     |                            /\\  |   |__ |__  |__  | |__  | |   |  __|  /\\   __| |__                            |\n");
	printf("\t     ________________|                           /--\\ |__ |__  __|  __| | |__| | |__ | |__| /--\\ |__| |__                            |________________\n");
	printf("\t    |                |                                                                                                               |                |\n");
	printf("\t    |                |                        Pessoas n�o possuem defici�ncias, pessoas possuem necessidades,                        |                |\n");
	printf("\t    |                |                        O que tem defici�ncia � o mundo que n�o se faz acess�vel a elas                        |                |\n");
	printf("\t    |                `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~�                |\n");
	printf("\t    |                 \\                                                                                                            /                  |\n");
	printf("\t    |__________________\\                                                                                                          /___________________|\n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t                                                                                                                                                   \n");
	printf("\t\t\t             1 - Intera��o Visual               2 - Intera��o por Toque                  3 - Intera��o por fala                                    \n");
	printf("\t\t\t                                                        __                                                                                         \n");
	printf("\t\t\t                                                   (( /�  `\\ ))                                                                                   \n");
	printf("\t\t\t                    _ _ _                             |\\__/|                                . - - .   . - - .                                     \n");
	printf("\t\t\t               _ /�       `\\ _                        |    |                             /�        `�        `\\                                  \n");
	printf("\t\t\t            _ /       _        \\_               - -_  |    |  , -.   - -               /�                      `\\                                \n");
	printf("\t\t\t         _/   �    ,�   `.      ` \\            �    \\ |    |/:    : '   '            /�_ . - - - . __ . - - - . _`\\                             \n");
	printf("\t\t\t        / _  '     .     ,      '_/            \\     \\|    |/     |/    '            \\.                          ./                             \n");
	printf("\t\t\t        ''  \\_`_    ` . �     �_/               \\                      '                ` .                   . �                                \n");
	printf("\t\t\t                \\           _/                   \\                    �                      ` - - . .. - - �                                    \n");
	printf("\t\t\t                  ` - - - �                       `                  �                                                                             \n");
	printf("\t\t\t                                                   `                �                                                                              \n");
	printf("\t\t\t                                                     ` - - - - - -�                                                                                \n");
	fflush(stdin);
	scanf("%c",& op);
	switch(op){
		case'1':
			system("cls");
			printf("\n 0 - Voltar");
			for (i=0; i<12; i++)
				printf("\n\t\t\t\t\t\t\t      %s", i_visual[i]);
			printf("\n\t\t\t\t\t\t\t._______________________________________________________________.\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                      1 - Sele��o Autom�tica                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                    2 - Selec�o por movimento                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Sele��o Autom�tica: O computador ir� selecionar as posi��es |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| v�lidas no tabuleiro,  com um intervalo de 2 segundos em cada |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| posi��o,  para marcar a posi��o desejada  voc� dever� esperar |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| que ela  seja selecionada e, quando for, piscar 2x consecuti- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| vas, desta forma, a posi��o desejada ser� marcada.            |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Sele��o Por Movimento:  O computador ir�  escancear os seus |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| movimentos  faciais e ir� selecionar  a posi��o que voc� dese |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| jar,  por meio de sua movimenta��o facial, ao piscar 2x conse |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| cutivas a posi��o desejada ser� marcada.                      |\n");
			printf("\t\t\t\t\t\t\t|_______________________________________________________________|\n");
			fflush(stdin);
			scanf("%c",& op);
			system("cls");
			printf("\n 0 - Voltar");
			for (i=0; i<12; i++)
				printf("\n\t\t\t\t\t\t\t      %s", i_visual[i]);
			printf("\n\t\t\t\t\t\t\t._______________________________________________________________.\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                    ESTA � UMA VERS�O BETA!!                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Infelizmente, este recurso n�o est� presente nesta vers�o,   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  pois o programa � limitado aos conhecimentos adquiridos no   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  primeiro periodo. Mas uma atualiza��o est� em planejamento.  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Aguarde novas atualiza��es.                                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                            . - - .                            |\n");
			printf("\t\t\t\t\t\t\t|                       . �           ` .                       |\n");
			printf("\t\t\t\t\t\t\t|                     .�  __        __   `.                     |\n");
			printf("\t\t\t\t\t\t\t|                    .   |  |      |  |    .                    |\n");
			printf("\t\t\t\t\t\t\t|                   .    '--'      '--'     .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .                       .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .   \\               /   .                   |\n");
			printf("\t\t\t\t\t\t\t|                    .   `.           .�   .                    |\n");
			printf("\t\t\t\t\t\t\t|                     .     `- . . -�     .                     |\n");
			printf("\t\t\t\t\t\t\t|                       .               .                       |\n");
			printf("\t\t\t\t\t\t\t|                         ` - . . . - �                         |\n");
			printf("\t\t\t\t\t\t\t|_______________________________________________________________|");
			fflush(stdin);
			scanf("%c",& op);
			op=0;
			system("cls");
			break;
		case'2':
			system("cls");
			printf("\n 0 - Voltar\n\n\n");
			printf("\t\t\t\t\t    1 - conectar                           2 - Construir                       3- Comprar      \n");
			printf("\t\t\t\t\t                                                 _                                           \n");
			printf("\t\t\t\t\t  .--------------.,                             '-'                              . - .       \n");
			printf("\t\t\t\t\t  | .. | .. | .. |:                           /\\__/\\                          /�       `\\    \n");
			printf("\t\t\t\t\t  |____|____|____|:                       \\/  \\   _/                         :----------:/|  \n");
			printf("\t\t\t\t\t  | .. | .. | .. |:                       /\\  / X/                           | x Loja O | | \n");
			printf("\t\t\t\t\t  |____|____|____|:                          /O /  ..                        | __|__|__ | |  \n");
			printf("\t\t\t\t\t  | .. | .. | .. |:                         / x/  :  :                       | __|__|__ | |  \n");
			printf("\t\t\t\t\t  |_ _ |_ _ | _ _|:                        /o /    `�                        |   |  |   | |  \n");
			printf("\t\t\t\t\t  '---------------'                        `-�                               '----------'-'  \n\n\n\n\n");
			printf("\t\t                                    ._____________________________________________________________________________________________.\n");
			printf("\t\t                                    |                                                                                             |\n");
			printf("\t\t                 __                 | O JVA � um hardware criado com o intuito de possibilitar a intera��o com o jogo, atrav�s do |\n");
			printf("\t\t          __   /�  `\\   __          |                                                                                             |\n");
			printf("\t\t        /�  `\\ |\\__/| /�  `\\        | tato. Este dispositivo expressa tridimensionalmente o tabuleiro, possibilitando o usu�rio a |\n");
			printf("\t\t        |\\__/| |    | |\\__/|        |                                                                                             |\n");
			printf("\t\t        |    | |    | |    |        | sentir as posi��es ocupadas pelo 'X', 'O' ou que est�o vazias e, caso queira, marc�-las.    |\n");
			printf("\t\t        |    | |    | |    |        |                                                                                             |\n");
			printf("\t\t  - -_  |    | |    | |    |  _- -  |                                                                                             |\n");
			printf("\t\t �    \\ |    | |    | |    | /    : | # Conectar: Voc� poder� conectar o dispositivo JVA (vers�o 2.0 ou vers�o 3.0)               |\n");
			printf("\t\t \\     \\|    |/     |/     :/    /  |                                                                                             |\n");
			printf("\t\t  \\                        '    /   | JVA v2.0 - Conex�o USB | JVA v3.0 - Conex�o USB ou Bluetooth                                |\n");
			printf("\t\t   \\                           �    |                                                                                             |\n");
			printf("\t\t    `                         �     | # Construir: Voc� poder� construir o dispositivo JVA (vers�o 1.0 ou vers�o 2.0)             |\n");
			printf("\t\t     `                       �      |                                                                                             |\n");
			printf("\t\t      `                     �       | JVA v1.0 - Necessita de uma impressora 3D | JVA v2.0 - impressora 3D + Arduino e m�dulos... |\n");
			printf("\t\t       `.                 �         |                                                                                             |\n");
			printf("\t\t          - - - - - -- .�           | # Comprar: Voc� poder� comprar o dispositivo JVA v1.0 ou v2.0 a pre�o de custo, ou adquirir |\n");
			printf("\t\t                                    |                                                                                             |\n");
			printf("\t\t                                    |a vers�o 3.0 Premium Edition.                                                                |\n");
			printf("\t\t                                    |_____________________________________________________________________________________________|\n");
			fflush(stdin);
			scanf("%c",& op);
			system("cls");
			printf("\n 0 - Voltar");
			for (i=0; i<16; i++)
				printf("\n\t\t\t\t\t\t\t\t        %s", i_toque[i]);
			printf("\n\t\t\t\t\t\t\t._______________________________________________________________.\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                    ESTA � UMA VERS�O BETA!!                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Infelizmente, este recurso n�o est� presente nesta vers�o,   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  pois o programa � limitado aos conhecimentos adquiridos no   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  primeiro periodo. Mas uma atualiza��o est� em planejamento.  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Aguarde novas atualiza��es.                                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                            . - - .                            |\n");
			printf("\t\t\t\t\t\t\t|                       . �           ` .                       |\n");
			printf("\t\t\t\t\t\t\t|                     .�  __        __   `.                     |\n");
			printf("\t\t\t\t\t\t\t|                    .   |  |      |  |    .                    |\n");
			printf("\t\t\t\t\t\t\t|                   .    '--'      '--'     .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .                       .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .   \\               /   .                   |\n");
			printf("\t\t\t\t\t\t\t|                    .   `.           .�   .                    |\n");
			printf("\t\t\t\t\t\t\t|                     .     `- . . -�     .                     |\n");
			printf("\t\t\t\t\t\t\t|                       .               .                       |\n");
			printf("\t\t\t\t\t\t\t|                         ` - . . . - �                         |\n");
			printf("\t\t\t\t\t\t\t|_______________________________________________________________|");
			fflush(stdin);
			scanf("%c",& op);
			op=0;
			system("cls");
			break;
		case'3':
			system("cls");
			printf("\n 0 - Voltar");
			for (i=0; i<11; i++)
				printf("\n\t\t\t\t\t\t\t       %s", i_fala[i]);
			printf("\n\t\t\t\t\t\t\t._______________________________________________________________.\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                  1 - Somente Comandos Por voz                 |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|             2- Comando Por Voz e Assistente de Voz            |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Somente Comandos Por voz: O computador ir� Receber seus co- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| mandos de voz,  referente as posi��es do tabuleiro, por exem- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| plo: \"Marcar posi��o 4\",  desta forma, ir� marcar a op��o so- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| licitanda pelo Jogador.                                       |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Comando Por Voz e Assistente de Voz:  Receber seus comandos |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| de voz referente as posi��es do tabuleiro, e tamb�m ir� falar |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| as posi��es que est�o vazias a cada atualiza��o do tabuleiro  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| ou quando voc� der o comando \"Ei, me fale sobre o tabuleiro\". |\n");
			printf("\t\t\t\t\t\t\t|_______________________________________________________________|\n");
			fflush(stdin);
			scanf("%c",& op);
			op=0;
			system("cls");
			printf("\n 0 - Voltar");
			for (i=0; i<11; i++)
				printf("\n\t\t\t\t\t\t\t      %s", i_fala[i]);
			printf("\n\t\t\t\t\t\t\t._______________________________________________________________.\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                    ESTA � UMA VERS�O BETA!!                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Infelizmente, este recurso n�o est� presente nesta vers�o,   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  pois o programa � limitado aos conhecimentos adquiridos no   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  primeiro periodo. Mas uma atualiza��o est� em planejamento.  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Aguarde novas atualiza��es.                                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                            . - - .                            |\n");
			printf("\t\t\t\t\t\t\t|                       . �           ` .                       |\n");
			printf("\t\t\t\t\t\t\t|                     .�  __        __   `.                     |\n");
			printf("\t\t\t\t\t\t\t|                    .   |  |      |  |    .                    |\n");
			printf("\t\t\t\t\t\t\t|                   .    '--'      '--'     .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .                       .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .   \\               /   .                   |\n");
			printf("\t\t\t\t\t\t\t|                    .   `.           .�   .                    |\n");
			printf("\t\t\t\t\t\t\t|                     .     `- . . -�     .                     |\n");
			printf("\t\t\t\t\t\t\t|                       .               .                       |\n");
			printf("\t\t\t\t\t\t\t|                         ` - . . . - �                         |\n");
			printf("\t\t\t\t\t\t\t|_______________________________________________________________|");
			fflush(stdin);
			scanf("%c",& op);
			op=0;
			system("cls");
			break;
	}
	return 0;
}
