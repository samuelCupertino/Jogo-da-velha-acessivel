#include<stdio.h>
#include<string.h>
#include<locale.h>
//funcao para exibir o menu acessibilidade
int acessibilidade(void){
	int i=0, c=0;
	char op, i_visual[12][54]={
	"                _ .  -  -  -  .  _                   ",
	"           . '                      ' .              ",
	"         /´                             `\\           ",
	"       /´           _ . - - - . _         `\\         ",
	"     /´       _ - ´      _        ` - _     `\\       ",
	"   /´   _ - ´  ´      ´     `        `  ` - _ `\\     ",
	" /´_- ´       ´      '       '        `      `-_`\\   ",
	" `\\ `--_      '      '       '        '       -´ /´  ",
	"    `.  `- _   `      `  -  ´        ´   _ -´ .´     ",
	"       ` .   ` -`- . _ _ _ _ _ . - -´- ´  . ´        ",
	"           ` . _                      . ´            ",
	"                 ' -  -   .   -  - '                 "},
	i_toque[17][37]={
	"                 __                 ",
	"          __   /´  `\\   __          ",
	"        /´  `\\ |\\__/| /´  `\\        ",
	"        |\\__/| |    | |\\__/|        ",
	"        |    | |    | |    |        ",
	"        |    | |    | |    |        ",
	"  - -_  |    | |    | |    |  _- -  ",
	" ´    \\ |    | |    | |    | /    : ",
	" \\     \\|    |/     |/     :/    /  ",
	"  \\                        '    /   ",
	"   \\                           ´    ",
	"    `                         ´     ",
	"     `                       ´      ",
	"      `                     ´       ",
	"       `.                 ´         ",
	"          - - - - - -- .´           "},
	i_fala[11][51]={
	"            .  -  -  .     .  -  -  .             ",
	"         /´            `v´            `\\          ",
	"       /´                               `\\        ",
	"     /´                                   `\\      ",
	"   /´                                       `\\    ",
	" /´- _ . . - - - - - .  _  . - - - - - . . _ -`\\  ",
	" `\\                                           /´  ",
	"   `.                                       .´    ",
	"      ` .                               . ´       ",
	"          ` .                       . ´           ",
	"               ' -  -   .   -  - '                "};
		
	printf("\t                     .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.\n");
	printf("\t                     |                            ..  .__ .__ .__  .__  . .    .     .    .  ..     . .__                            |\n");
	printf("\t                     |                            /\\  |   |__ |__  |__  | |__  | |   |  __|  /\\   __| |__                            |\n");
	printf("\t     ________________|                           /--\\ |__ |__  __|  __| | |__| | |__ | |__| /--\\ |__| |__                            |________________\n");
	printf("\t    |                |                                                                                                               |                |\n");
	printf("\t    |                |                        Pessoas não possuem deficiências, pessoas possuem necessidades,                        |                |\n");
	printf("\t    |                |                        O que tem deficiência é o mundo que não se faz acessível a elas                        |                |\n");
	printf("\t    |                `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´                |\n");
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
	printf("\t\t\t             1 - Interação Visual               2 - Interação por Toque                  3 - Interação por fala                                    \n");
	printf("\t\t\t                                                        __                                                                                         \n");
	printf("\t\t\t                                                   (( /´  `\\ ))                                                                                   \n");
	printf("\t\t\t                    _ _ _                             |\\__/|                                . - - .   . - - .                                     \n");
	printf("\t\t\t               _ /´       `\\ _                        |    |                             /´        `´        `\\                                  \n");
	printf("\t\t\t            _ /       _        \\_               - -_  |    |  , -.   - -               /´                      `\\                                \n");
	printf("\t\t\t         _/   ´    ,´   `.      ` \\            ´    \\ |    |/:    : '   '            /´_ . - - - . __ . - - - . _`\\                             \n");
	printf("\t\t\t        / _  '     .     ,      '_/            \\     \\|    |/     |/    '            \\.                          ./                             \n");
	printf("\t\t\t        ''  \\_`_    ` . ´     ´_/               \\                      '                ` .                   . ´                                \n");
	printf("\t\t\t                \\           _/                   \\                    ´                      ` - - . .. - - ´                                    \n");
	printf("\t\t\t                  ` - - - ´                       `                  ´                                                                             \n");
	printf("\t\t\t                                                   `                ´                                                                              \n");
	printf("\t\t\t                                                     ` - - - - - -´                                                                                \n");
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
			printf("\t\t\t\t\t\t\t|                      1 - Seleção Automática                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                    2 - Selecão por movimento                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Seleção Automática: O computador irá selecionar as posições |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| válidas no tabuleiro,  com um intervalo de 2 segundos em cada |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| posição,  para marcar a posição desejada  você deverá esperar |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| que ela  seja selecionada e, quando for, piscar 2x consecuti- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| vas, desta forma, a posição desejada será marcada.            |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Seleção Por Movimento:  O computador irá  escancear os seus |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| movimentos  faciais e irá selecionar  a posição que você dese |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| jar,  por meio de sua movimentação facial, ao piscar 2x conse |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| cutivas a posição desejada será marcada.                      |\n");
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
			printf("\t\t\t\t\t\t\t|                    ESTA É UMA VERSÃO BETA!!                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Infelizmente, este recurso não está presente nesta versão,   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  pois o programa é limitado aos conhecimentos adquiridos no   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  primeiro periodo. Mas uma atualização está em planejamento.  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Aguarde novas atualizações.                                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                            . - - .                            |\n");
			printf("\t\t\t\t\t\t\t|                       . ´           ` .                       |\n");
			printf("\t\t\t\t\t\t\t|                     .´  __        __   `.                     |\n");
			printf("\t\t\t\t\t\t\t|                    .   |  |      |  |    .                    |\n");
			printf("\t\t\t\t\t\t\t|                   .    '--'      '--'     .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .                       .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .   \\               /   .                   |\n");
			printf("\t\t\t\t\t\t\t|                    .   `.           .´   .                    |\n");
			printf("\t\t\t\t\t\t\t|                     .     `- . . -´     .                     |\n");
			printf("\t\t\t\t\t\t\t|                       .               .                       |\n");
			printf("\t\t\t\t\t\t\t|                         ` - . . . - ´                         |\n");
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
			printf("\t\t\t\t\t  | .. | .. | .. |:                           /\\__/\\                          /´       `\\    \n");
			printf("\t\t\t\t\t  |____|____|____|:                       \\/  \\   _/                         :----------:/|  \n");
			printf("\t\t\t\t\t  | .. | .. | .. |:                       /\\  / X/                           | x Loja O | | \n");
			printf("\t\t\t\t\t  |____|____|____|:                          /O /  ..                        | __|__|__ | |  \n");
			printf("\t\t\t\t\t  | .. | .. | .. |:                         / x/  :  :                       | __|__|__ | |  \n");
			printf("\t\t\t\t\t  |_ _ |_ _ | _ _|:                        /o /    `´                        |   |  |   | |  \n");
			printf("\t\t\t\t\t  '---------------'                        `-´                               '----------'-'  \n\n\n\n\n");
			printf("\t\t                                    ._____________________________________________________________________________________________.\n");
			printf("\t\t                                    |                                                                                             |\n");
			printf("\t\t                 __                 | O JVA é um hardware criado com o intuito de possibilitar a interação com o jogo, através do |\n");
			printf("\t\t          __   /´  `\\   __          |                                                                                             |\n");
			printf("\t\t        /´  `\\ |\\__/| /´  `\\        | tato. Este dispositivo expressa tridimensionalmente o tabuleiro, possibilitando o usuário a |\n");
			printf("\t\t        |\\__/| |    | |\\__/|        |                                                                                             |\n");
			printf("\t\t        |    | |    | |    |        | sentir as posições ocupadas pelo 'X', 'O' ou que estão vazias e, caso queira, marcá-las.    |\n");
			printf("\t\t        |    | |    | |    |        |                                                                                             |\n");
			printf("\t\t  - -_  |    | |    | |    |  _- -  |                                                                                             |\n");
			printf("\t\t ´    \\ |    | |    | |    | /    : | # Conectar: Você poderá conectar o dispositivo JVA (versão 2.0 ou versão 3.0)               |\n");
			printf("\t\t \\     \\|    |/     |/     :/    /  |                                                                                             |\n");
			printf("\t\t  \\                        '    /   | JVA v2.0 - Conexão USB | JVA v3.0 - Conexão USB ou Bluetooth                                |\n");
			printf("\t\t   \\                           ´    |                                                                                             |\n");
			printf("\t\t    `                         ´     | # Construir: Você poderá construir o dispositivo JVA (versão 1.0 ou versão 2.0)             |\n");
			printf("\t\t     `                       ´      |                                                                                             |\n");
			printf("\t\t      `                     ´       | JVA v1.0 - Necessita de uma impressora 3D | JVA v2.0 - impressora 3D + Arduino e módulos... |\n");
			printf("\t\t       `.                 ´         |                                                                                             |\n");
			printf("\t\t          - - - - - -- .´           | # Comprar: Você poderá comprar o dispositivo JVA v1.0 ou v2.0 a preço de custo, ou adquirir |\n");
			printf("\t\t                                    |                                                                                             |\n");
			printf("\t\t                                    |a versão 3.0 Premium Edition.                                                                |\n");
			printf("\t\t                                    |_____________________________________________________________________________________________|\n");
			fflush(stdin);
			scanf("%c",& op);
			system("cls");
			printf("\n 0 - Voltar");
			for (i=0; i<16; i++)
				printf("\n\t\t\t\t\t\t\t\t        %s", i_toque[i]);
			printf("\n\t\t\t\t\t\t\t._______________________________________________________________.\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                    ESTA É UMA VERSÃO BETA!!                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Infelizmente, este recurso não está presente nesta versão,   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  pois o programa é limitado aos conhecimentos adquiridos no   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  primeiro periodo. Mas uma atualização está em planejamento.  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Aguarde novas atualizações.                                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                            . - - .                            |\n");
			printf("\t\t\t\t\t\t\t|                       . ´           ` .                       |\n");
			printf("\t\t\t\t\t\t\t|                     .´  __        __   `.                     |\n");
			printf("\t\t\t\t\t\t\t|                    .   |  |      |  |    .                    |\n");
			printf("\t\t\t\t\t\t\t|                   .    '--'      '--'     .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .                       .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .   \\               /   .                   |\n");
			printf("\t\t\t\t\t\t\t|                    .   `.           .´   .                    |\n");
			printf("\t\t\t\t\t\t\t|                     .     `- . . -´     .                     |\n");
			printf("\t\t\t\t\t\t\t|                       .               .                       |\n");
			printf("\t\t\t\t\t\t\t|                         ` - . . . - ´                         |\n");
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
			printf("\t\t\t\t\t\t\t| # Somente Comandos Por voz: O computador irá Receber seus co- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| mandos de voz,  referente as posições do tabuleiro, por exem- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| plo: \"Marcar posição 4\",  desta forma, irá marcar a opção so- |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| licitanda pelo Jogador.                                       |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| # Comando Por Voz e Assistente de Voz:  Receber seus comandos |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| de voz referente as posições do tabuleiro, e também irá falar |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| as posições que estão vazias a cada atualização do tabuleiro  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t| ou quando você der o comando \"Ei, me fale sobre o tabuleiro\". |\n");
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
			printf("\t\t\t\t\t\t\t|                    ESTA É UMA VERSÃO BETA!!                   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Infelizmente, este recurso não está presente nesta versão,   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  pois o programa é limitado aos conhecimentos adquiridos no   |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  primeiro periodo. Mas uma atualização está em planejamento.  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|  Aguarde novas atualizações.                                  |\n");
			printf("\t\t\t\t\t\t\t|                                                               |\n");
			printf("\t\t\t\t\t\t\t|                            . - - .                            |\n");
			printf("\t\t\t\t\t\t\t|                       . ´           ` .                       |\n");
			printf("\t\t\t\t\t\t\t|                     .´  __        __   `.                     |\n");
			printf("\t\t\t\t\t\t\t|                    .   |  |      |  |    .                    |\n");
			printf("\t\t\t\t\t\t\t|                   .    '--'      '--'     .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .                       .                   |\n");
			printf("\t\t\t\t\t\t\t|                   .   \\               /   .                   |\n");
			printf("\t\t\t\t\t\t\t|                    .   `.           .´   .                    |\n");
			printf("\t\t\t\t\t\t\t|                     .     `- . . -´     .                     |\n");
			printf("\t\t\t\t\t\t\t|                       .               .                       |\n");
			printf("\t\t\t\t\t\t\t|                         ` - . . . - ´                         |\n");
			printf("\t\t\t\t\t\t\t|_______________________________________________________________|");
			fflush(stdin);
			scanf("%c",& op);
			op=0;
			system("cls");
			break;
	}
	return 0;
}
