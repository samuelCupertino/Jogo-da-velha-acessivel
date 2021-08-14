#include<stdio.h>
#include<string.h>
#include<locale.h>
#include"livro.h" // biblioteca do livro
#include"acessibilidade.h" // biblioteca do menu acessibilidade

//declaração de funcoes 
int JOGAR(void);
int acessibilidade(void);
int pro_pagina (int a, int b);
int ant_pagina (int a, int b);
void top10(int r, int p, int n);
void ordenacao (int pontuacao10[10], char jogador10[10][17]);
int encontranoranking(char nome[17]);

//variaveis globlais 
int pontuacao10[10]={10,9,8,7,6,5,4,3,2,1};
char jogador10[10][17]={"José Geraldo", "Vera lúcia", "Márcia Pontes", "júlio Domingues", "Maria Aparecida", "Débora Silva", "Márcio José", "Phalloma Vieira", "Maria Cupertino", "Rafael Dutra"}, backuptop3[3][15]={"José Geraldo  ","Vera lúcia    ","Márcia Pontes "},
ranking[27][41]={
		"     .- - - - - - - - - - - - - - -.- . ",
		"    / ´ ´ ´ ´ ´ ´ ´ ´ ´ ´ ´ ´ ´ ´/  _  `",
		"   |                            | ´ .' '",
		"   | 1º                  ->     |-`- -´ ",
		"   |                            |       ",
		"   | 2º                  ->     |       ",
		"   |                            |       ",
		"   | 3º                  ->     |       ",
		"   |                            |       ",
		"   | 4º                  ->     |       ",
		"   |                            |       ",
		"   | 5º                  ->     |       ",
		"   |                            |       ",
		"   | 6º                  ->     |       ",
		"   |                            |       ",
		"   | 7º                  ->     |       ",
		"   |                            |       ",
		"   | 8º                  ->     |       ",
		"   |                            |       ",
		"   | 9º                  ->     |       ",
		"   |                            |       ",
		"   | 10º                  ->    |       ",
		"  _|_ _ _ _ _ _ _ _ _ _ _ _ _   |       ",
		" ´........................´ . ` |       ",
		"´........................'  `-´ /       ",
		"'. _ _ _ _ _ _ _ _ _ _ _ _` _ .´        "};
		
int main(void){
	setlocale(LC_ALL, "portuguese");
	int i, menu, pos;
	char faixa[10][157]={
	"                   .~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.",
	"                   |                                                                                                                     |",
	"                   |               ..    __      ___       __        ..__      ..      ..      .. ..___ ..    ..        ..               |",
	" __________________|               ||  //  \\\\   //´      //  \\\\      ||  \\\\   //\\\\      \\\\    //  ||    ||    ||       //\\\\              |_________________",
	"|                  |            || || || :  || ||  .__. ||  : ||     ||   || //__\\\\      \\\\  //   ||--- ||    ||--..  //__\\\\             |                 |",
	"|       .--.       |            |__||  \\\\__//   \\\\__|    \\\\__//      ||__// //    \\\\      \\\\//    ||___ ||___ ||  || //    \\\\            |       .-.10     |",
	"|    (( |`´| ))    |                                                                                                                     |      ' O '      |",
	"|       '/\\'       `~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~´      |`-´|      |",
	"|        ||         \\                                                                                                                  /         `T´       |",
	"|____________________\\                                                                                                                /____________________|"},
	m_interativo[14][190]={
	"                1                                       2                                   3",
	"                                                 _______________",
	"   .---.------.___.------.---.                  |              ||                      ..   **   ..",
	" /´                          `\\                 |              ||                   ..              ..",
	"/     A       _   _      /\\    \\                |              ||                  O       ´´``        O",
	"/  C  +  B   |_| |_|   <  O >  \\                |              ||                .. \\_    ''  ''    _/ ..",
	"|     D                  \\/    |                |              ||               ..     \\_  ``´´  _/     ..",
	" |                            |                 |              ||               ..         \\__/         ..",
	"  \\          /´´``\\          /                  |              ||               ..    Acessibilidade    ..",
	"    \\       /      \\       /                    |              ||                ..       /    \\       ..",
	"     |     |        |     |                     |              ||                 ..    /        \\    ..",
	"     |     /        \\     |                     |              ||                   ../            \\..",
	"      \\___/          \\___/                      |______________||                    O  ..      ..  O",
	"                                                 `--------------´                           **"},
	trofeus[11][146]={
	"     ____________                                                  ____________                                                 ____________",
	".´\\ /            \\ /`.                                        .´\\ /            \\ /`.                                       .´\\ /            \\ /`.",
	"\\  \\|      , O   |/  /                                        \\  \\|     ..  O  |/  /                                       \\  \\|      _  O  |/  /",
	"/  /|     /|     |\\  \\                                        /  /|    ' .'    |\\  \\                                       /  /|     ´_)    |\\  \\",
	"`./ |     _|_    | \\.´                                        `./ |     /__    | \\.´                                       `./ |     ._)    | \\.´",
	"     `\\        /´                                                  `\\        /´                                                 `\\        /´",
	"        `\\  /´                                                        `\\  /´                                                       `\\  /´",
	"          ||                                                            ||                                                           ||",
	"          ||                                                            ||                                                           ||",
	"       __/  \\__                                                      __/  \\__                                                     __/  \\__",
	"      /________\\                                                    /________\\                                                   /________\\"};
	do{
		for(i=0; i<10; i++)
			printf("\t%s\n", faixa[i]);
		printf("\n\n");
		for(i=0; i<14; i++)
			printf("\n\t\t\t\t%s", m_interativo[i]);
		printf("\n\n\n\n\n\t\t       %d                                                            %d                                                            %d", pontuacao10[0], pontuacao10[1], pontuacao10[2]);
		for(i=0; i<11; i++)
			printf("\n\t     %s", trofeus[i]);
		printf("\n\t\t  %s                                                 %s                                              %s", backuptop3[0], backuptop3[1], backuptop3[2]);
		scanf("%d",& menu);	
		system("cls");
		if (menu==1)
			pos=JOGAR();
		if (menu==2)
			pos=pro_pagina(0, 42);
		if (menu==3)
			pos=acessibilidade();
		system("cls");
	}while(pos==0);	
}

//funcao para iniciar o jogo
int JOGAR(void){
	int i, j, io, ix, entrar1vx=0, entrar1vo=0, confirmado=0, placar_baixo=0, pos=0, placar_x=0, placar_v=0, placar_o=0, cont_jogada=0, pos_inv=0, nova_partida, num;
	char X[10][28]={ 
			"                           ",
			"  `\\\\\\`             ´///´  ",
			"    `\\\\\\`         ´///´    ",
			"      `\\\\\\`     ´///´      ",
			"        `\\\\\\`.´///´        ",
			"         `.\\\\*//.´         ",
			"        ´///´ `\\\\\\`        ",
			"      ´///´     `\\\\\\`      ",
			"    ´///´         `\\\\\\`    ",
			"  ´///´             `\\\\\\`  "},
		O[10][28]={ 
			"             _             ",
			"        ´´´´   ````        ",
			"     ´´´´         ````     ",
			"   ´´´´             ````   ",
			"  ::::               ::::  ",
			"  ::::               ::::  ",
			"                           ",
			"   ````             ´´´´   ",
			"     ````         ´´´´     ",
			"        ```` _ ´´´´        "},
		trof[15][38]={ 
			"     ____________        ",
			".´\\ /            \\ /`.   ",
			"\\  \\|  __|__|__  |/  /   ",
			"/  /|  __|__|__  |\\  \\   ",
			"`./ |    |  |    | \\.´   ",
			"     `\\        /´        ",
			"        `\\  /´           ",
			"          ||             ",
			"          ||             ",
			"       __/  \\__          "},
		x[10][28]={ 
			"                           ",
			"                           ",
			"                           ",
			"                     _     ",
			"             \\     /  |   ",
			"              `\\_/´   |-> ",
			"               /\¨\\    |  ",
			"             /´   `\\ _|   ",
			"                           ",
			"                           "},
		v[10][28]={ 
			"                           ",
			"                           ",
			"                      _    ",
			"             |   |     |   ",
			"          ---|---|---  |   ",
			"             |   |     |-> ",
			"          ---|---|---  |   ",
			"             |   |    _|   ",
			"                           ",
			"                           "},
		o[10][28]={ 
			"                           ",
			"                           ",
			"                           ",
			"                _    _     ",
			"             ´     `  |    ",
			"            '       ' |->  ",
			"            '       ' |    ",
			"             `  -  ´ _|    ",
			"                           ",
			"                           "},
		limpo[10][28]={ 
			"                           ",
			"                           ",
			"                           ",
			"                           ",
			"                           ",
			"            [ ]            ",
			"                           ",
			"                           ",
			"                           ",
			"                           "},
		p1[10][28], p2[10][28],	p3[10][28],	p4[10][28],	p5[10][28],	p6[10][28], p7[10][28],	p8[10][28], p9[10][28], x_o, nome_j1[16], nome_j2[16], enter, jogadores[2][17]={"                ","                "};
		// inicio do cadastro
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t _Informe o nome do 1º jogador\n\t\t\t\t\t\t\t\t\t'-> ");
		fflush(stdin);
		scanf("%s",& nome_j1);
		printf("\t\t\t\t\t\t\t\t\t _Informe o nome do 2º jogador\n\t\t\t\t\t\t\t\t\t'-> ");
		fflush(stdin);
		scanf("%s",& nome_j2);
		do{
			printf("\n\t\t\t\t\t\t\t\t   %s, você quer jogar com 'X' ou 'O': ", nome_j1);
			fflush(stdin);
			scanf("%c",& x_o);
		}while(x_o!='X' && x_o!='x' && x_o!='O' && x_o!='o');
		if(x_o=='X' || x_o=='x'){
			num=0;
			printf("\t\t\t\t\t\t\t\t   %s, você é o 1º a jogar e ficou com: O", nome_j2);
			printf("\n\n\t\t\t\t\t\t\t\t\t       %s  vs  %s\n", nome_j1, nome_j2);
			printf("\t\t\t\t\t\t\t\t\t                       _\n");
			printf("\t\t\t\t\t\t\t\t\t    \\     /         ´     `\n");
			printf("\t\t\t\t\t\t\t\t\t     `\\_/´    VS   '       '\n");
			printf("\t\t\t\t\t\t\t\t\t      /\¨\\          '       '\n");
			printf("\t\t\t\t\t\t\t\t\t    /´   `\\         `  -  ´\n");
			for(j=0; j<16; j++){
				if(nome_j1[j]>!'\0')
					jogadores[1][j]=nome_j1[j];
				else
					jogadores[1][j]=' ';
					
				if(nome_j2[j]>!'\0')
					jogadores[0][j]=nome_j2[j];
				else
					jogadores[0][j]=' ';
			}
		}
		else if(x_o=='O' || x_o=='o'){
			num=1;
			printf("\t\t\t\t\t\t\t\t   %s, você é o 1º a jogar e ficou com: X", nome_j2);
			printf("\n\n\t\t\t\t\t\t\t\t\t       %s  vs  %s\n", nome_j1, nome_j2);
			printf("\t\t\t\t\t\t\t\t\t        _               \n");
			printf("\t\t\t\t\t\t\t\t\t     ´     `         \\     /\n");
			printf("\t\t\t\t\t\t\t\t\t    '       '   VS    `\\_/´\n");
			printf("\t\t\t\t\t\t\t\t\t    '       '          /\¨\\\n");
			printf("\t\t\t\t\t\t\t\t\t     `  -  ´         /´   `\\\n");
			for(j=0; j<16; j++){
				if(nome_j2[j]>!'\0')
					jogadores[1][j]=nome_j2[j];
				else
					jogadores[1][j]=' ';
				
				if(nome_j1[j]>!'\0')
					jogadores[0][j]=nome_j1[j];
				else
					jogadores[0][j]=' ';
			}
		}
		printf("\n\t\t\t\t\t\t\t\t       Precione enter para iniviar o Jogo");
		fflush(stdin);
		scanf("%c",& enter);//fim do cadastro
		ix=10;
		io=10;
	do{
		system("cls");
		cont_jogada=0;
		for(i=0; i<10; i++){//limpa as strings de posição
			for(j=0; j<32; j++){
				p1[i][j]= limpo[i][j];
				p2[i][j]= limpo[i][j];
				p3[i][j]= limpo[i][j];
				p4[i][j]= limpo[i][j];
				p5[i][j]= limpo[i][j];
				p6[i][j]= limpo[i][j];
				p7[i][j]= limpo[i][j];
				p8[i][j]= limpo[i][j];
				p9[i][j]= limpo[i][j];
				if(i==5 && j==13){
					p1[i][j]='1';
					p2[i][j]='2';
					p3[i][j]='3';
					p4[i][j]='4';
					p5[i][j]='5';
					p6[i][j]='6';
					p7[i][j]='7';
					p8[i][j]='8';
					p9[i][j]='9';
				}
			}
		};
		
		// condicional para ultrapassagem
		ordenacao (pontuacao10, jogador10);
		io=encontranoranking(jogadores[1]);
		ix=encontranoranking(jogadores[0]);
		
		if (placar_x>pontuacao10[9] && ix==11){ // condicional para o jogador 'X' entrar no ranking
			pontuacao10[9]=placar_x;
			for(j=0; j<17; j++){
				jogador10[9][j]=' ';
				if(jogadores[1][j]!='\0')
				jogador10[9][j]=jogadores[1][j];
			}
			io=encontranoranking(jogadores[1]);
			ix=encontranoranking(jogadores[0]);
			entrar1vx=1; // variavel que assegura a entrada apenas 1x
		}
		if (placar_o>pontuacao10[9] && io==11){  // condicional para o jogador 'O' entrar no ranking
			pontuacao10[9]=placar_o;
			for(j=0; j<17; j++){
				jogador10[9][j]=' ';
				if(jogadores[0][j]!='\0')
				jogador10[9][j]=jogadores[0][j];
			}
			io=encontranoranking(jogadores[1]);
			ix=encontranoranking(jogadores[0]);
			entrar1vo=1; // variavel que assegura a entrada apenas 1x
		}
		
		if (placar_x>pontuacao10[ix] && ix!=11){ // condicional para o jogador 'X' subir no ranking 
			pontuacao10[ix]=placar_x;
			ordenacao (pontuacao10, jogador10);
		}	
		if (placar_o>pontuacao10[io] && io!=11){ // condicional para o jogador 'O' subir no ranking	
			pontuacao10[io]=placar_o;
			ordenacao (pontuacao10, jogador10);
		}
		ordenacao (pontuacao10, jogador10);
		
		
		
		if(nova_partida%2==0)
			cont_jogada++;
		do{
			cont_jogada++;
			do{
				system("cls");
				printf("\n  0 - Menu Principal\n\n");//inicio do tabuleiro printado 
				for(i=0; i<10; i++){
					if(i==5)
						printf("         %s            %s|%s|%s    %s %d\n", trof[i], p1[i],p2[i],p3[i], x[i],placar_x);
					else
						printf("         %s            %s|%s|%s    %s\n", trof[i], p1[i],p2[i],p3[i], x[i]);
				}
				printf("               /________\\                     ___________________________|___________________________|___________________________\n");
				for(i=0; i<10; i++){
					if(i==5)
						printf(" %s     %s|%s|%s    %s %d\n", ranking[i], p4[i],p5[i],p6[i], v[i],placar_v);
					else 
						printf(" %s     %s|%s|%s    %s\n", ranking[i], p4[i],p5[i],p6[i], v[i]);
				}
				printf(" %s     ___________________________|___________________________|___________________________\n", ranking[10]);
				for(i=0; i<10; i++){
					if(i==5)
						printf(" %s     %s|%s|%s    %s %d\n", ranking[i+11], p7[i],p8[i],p9[i], o[i],placar_o);
					else 
						printf(" %s     %s|%s|%s    %s\n", ranking[i+11], p7[i],p8[i],p9[i], o[i]);
				}
				printf(" %s                                |                           |", ranking[21]);
				for(i=22; i<26; i++)
					printf("\n %s", ranking[i]);//fim do tabuleiro printado 
					
				if(cont_jogada%2==0){
					printf("                                %s, ix=%d io=%d Informe uma posição: ", nome_j2,ix,io);
				}
				else if(cont_jogada%2==1)	
					printf("                                %s, ix=%d io=%d Informe uma posição: ", nome_j1, ix,io);
				scanf("%d",& pos);
				if(pos==0){
					
	for(i=0; i<=3; i++){
			for(j=0; j<=12; j++){
				if(backuptop3[i][j]!='\0')
					backuptop3[i][j]=jogador10[i][j];
				else
				backuptop3[i][j]=' ';
			}
    }
					return 0;
				}
				if(num==1)
					cont_jogada++;
				pos_inv=0;
				if(pos==1 && p1[8][8]==' ' && cont_jogada%2==1){ 
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p1[i][j]= X[i][j];
						}
					}	
				}				
				else if(pos==1 && p1[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p1[i][j]= O[i][j];
						}
					}	
				}				
				else if(pos==2 && p2[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p2[i][j]= X[i][j];
						}
					}	
				}				
				else if(pos==2 && p2[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p2[i][j]= O[i][j];
						}
					}	
				}
				else if(pos==3 && p3[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p3[i][j]= X[i][j];
						}
					}	
				}
				else if(pos==3 && p3[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p3[i][j]= O[i][j];
						}
					}	
				}			
				else if(pos==4 && p4[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p4[i][j]= X[i][j];
						}
					}
				}				
				else if(pos==4 && p4[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p4[i][j]= O[i][j];
						}
					}	
				}				
				else if(pos==5 && p5[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p5[i][j]= X[i][j];
						}
					}	
				}
				else if(pos==5 && p5[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p5[i][j]= O[i][j];
						}
					}
				}
				else if(pos==6 && p6[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p6[i][j]= X[i][j];
						}
					}
				}
				else if(pos==6 && p6[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p6[i][j]= O[i][j];
						}
					}
				}
				else if(pos==7 && p7[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p7[i][j]= X[i][j];
						}
					}
				}
				else if(pos==7 && p7[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p7[i][j]= O[i][j];
						}
					}
				}
				else if(pos==8 && p8[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p8[i][j]= X[i][j];
						}
					}
				}
				else if(pos==8 && p8[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p8[i][j]= O[i][j];
						}
					}
				}
				else if(pos==9 && p9[8][8]==' ' && cont_jogada%2==1){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p9[i][j]= X[i][j];
						}
					}
				}
				else if(pos==9 && p9[8][8]==' ' && cont_jogada%2==0){
					for(i=0; i<10; i++){
						for(j=0; j<32; j++){
							p9[i][j]= O[i][j];
						}
					}
				}
				else{
					pos_inv=1;
				}
				if(num==1)
				cont_jogada--;
			}while(pos_inv==1);
			//verifica se há vencedor
			if((p1[8][8]=='´' && p2[8][8]=='´' && p3[8][8]=='´')||(p4[8][8]=='´' && p5[8][8]=='´' && p6[8][8]=='´')||(p7[8][8]=='´' && p8[8][8]=='´' && p9[8][8]=='´')||
        	(p1[8][8]=='´' && p4[8][8]=='´' && p7[8][8]=='´')||(p2[8][8]=='´' && p5[8][8]=='´' && p8[8][8]=='´')||(p3[8][8]=='´' && p6[8][8]=='´' && p9[8][8]=='´')||
        	(p1[8][8]=='´' && p5[8][8]=='´' && p9[8][8]=='´')||(p3[8][8]=='´' && p5[8][8]=='´' && p7[8][8]=='´')){
				placar_x++;
				cont_jogada=0;
				nova_partida++;
			}
			else if((p1[8][8]=='`' && p2[8][8]=='`' && p3[8][8]=='`')||(p4[8][8]=='`' && p5[8][8]=='`' && p6[8][8]=='`')||(p7[8][8]=='`' && p8[8][8]=='`' && p9[8][8]=='`')||
        	(p1[8][8]=='`' && p4[8][8]=='`' && p7[8][8]=='`')||(p2[8][8]=='`' && p5[8][8]=='`' && p8[8][8]=='`')||(p3[8][8]=='`' && p6[8][8]=='`' && p9[8][8]=='`')||
        	(p1[8][8]=='`' && p5[8][8]=='`' && p9[8][8]=='`')||(p3[8][8]=='`' && p5[8][8]=='`' && p7[8][8]=='`')){
				placar_o++;
				cont_jogada=0;
				nova_partida++;
			}
			else if(p1[8][8]!=' ' && p2[8][8]!=' ' && p3[8][8]!=' ' && p4[8][8]!=' ' && p5[8][8]!=' ' && p6[8][8]!=' ' && p7[8][8]!=' ' && p8[8][8]!=' ' && p9[8][8]!=' '){
            	placar_v++;
				cont_jogada=0;
				nova_partida++;
			}
		}while(cont_jogada!=0);	//se não tem vencedor volta para o tabuleiro
	}while(cont_jogada==0);	//se tem vencedor limpa o tabuleiro	(inicia nova partida)
}

int encontranoranking(char nome[17]){
	setlocale(LC_ALL, "portuguese");
	int i, j, k=0, p=0, ind=11;
	for(i=0; i<10; i++){
		for(j=0; j<=15; j++){
			if(jogador10[i][j]==nome[j])
			p++;
			else{
				p=0;
				j++;
			}
		}
		if(p==14){
			p=0;
			ind=i;
		}
	}
	return ind;
}

void ordenacao (int pontuacao10[10], char jogador10[10][17]){
	int i, j, auxiliar_pontos;
	char auxiliar_pessoa[17];
	
	for ( i=0; (i < 10 && i+1 != 10); i++ ) {
    	if( pontuacao10[i] < pontuacao10[i+1] ) {
    		auxiliar_pontos = pontuacao10[i+1];
        	for (j=0; j<17; j++){
				if(jogador10[i+1][j]!='\0')
        			auxiliar_pessoa[j]=jogador10[i+1][j];
			}
        	pontuacao10[i+1] = pontuacao10[i];
        	for (j=0; j<17; j++){
				if(jogador10[i][j]!='\0')
        			jogador10[i+1][j]=jogador10[i][j];
			}
        	pontuacao10[i] = auxiliar_pontos;
        	for (j=0; j<17; j++){
				if(auxiliar_pessoa[j]!='\0')
        			jogador10[i][j]=auxiliar_pessoa[j];
			}	
        	i=-1;
        }
    }
		
	top10(3,0,pontuacao10[0]); // envia para a função que compom o ranking?
	top10(5,1,pontuacao10[1]); // 1º coluna: onde esta as posicoes do ranking 
	top10(7,2,pontuacao10[2]); // 2º coluna: posicao do vetor contendo os nomes das pessoas que estam no ranking  
	top10(9,3,pontuacao10[3]); // 3º coluna: pontacao referente as pessoas do vetor
	top10(11,4,pontuacao10[4]);
	top10(13,5,pontuacao10[5]);
	top10(15,6,pontuacao10[6]);
	top10(17,7,pontuacao10[7]);
	top10(19,8,pontuacao10[8]);
	top10(21,9,pontuacao10[9]);
}

//funcao para colocar a ponticao no ranking (covertendo ela de int para char)
void top10(int r, int p, int n){//r=pos ranking  &  p=posicao do nome do player (desntro do vetor jogador10)  &  n=numero de pontuacao 
	setlocale(LC_ALL, "portuguese");
	int i, j, tam1, tam2, cen, dez, uni;
	char num[10]={'0','1','2','3','4','5','6','7','8','9'};
	for(i=0; i<16; i++){
		tam1=8;
		tam2=24;
		if(r==21){
			tam1=9;
			tam2=25;
		}
		if(jogador10[p][i]!='\0')
			ranking[r][i+tam1]=jogador10[p][i];
		else{
			for(j=i+tam1; j<tam2; j++){
				ranking[r][j]=' ';
			}
		}
	}
	tam1=0;
	if(r==21)
		tam1=1;
	if(n>0 && n<=9){
		ranking[r][28+tam1]=num[n];
		ranking[r][29+tam1]=' ';
		ranking[r][30+tam1]=' ';
	}
	if(n>9 && n<=99){
		dez=n/10;
		uni=n-(dez*10);
		ranking[r][28+tam1]=num[dez];
		ranking[r][29+tam1]=num[uni];
		ranking[r][30+tam1]=' ';	
	}
	if(n>99 && n<=999){
		cen=n/100;
		n=n-(cen*100);
		dez=n/10;
		uni=n-(dez*10);
		ranking[r][28+tam1]=num[cen];
		ranking[r][29+tam1]=num[dez];
		ranking[r][30+tam1]=num[uni];
	}
}
