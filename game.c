#include<stdio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>
 
int sec=0;
int min=0;
int pntot=0,ponto1=0,ponto2=0,ponto3=0;
int perg=0;
int gameState=0;
char nome[7],msgName[20]="digite seu nome: ";
char score1[7]="------",score2[7]="------",score3[7]="------";
int jogo();
int pausa(char opcp);
int cred();
int score();
int escnome();
 
int main()
{
   // indice de funções para menu de opções
   SetConsoleTitle("tempo");
   int ini=0;
   system("cls");
   printf("Bem vindo ao Game Quest!\n");
   printf("1 - Iniciar\n2 - Scoreboard\n3 - Creditos\n4 - Sair\n");
   printf("Escolha uma opcao: ");
   scanf("%d",&ini);
   if(ini==1)
   {
       // pegar nome, e apresentar temporizador
       escnome();
   }
   else if(ini==2)
   {
       // pontuação
       score();
   }
   else if(ini==3)
   {
       // creditos
       cred();
   }
   else if(ini==4)
   {
       //sair do jogo
       exit(0);
   }
}
 
int escnome()
{
   // pega o nome do jogador para armazenar sua pontuação
   isupper(msgName[0]);
   printf(msgName);
   getchar();
   gets(nome);
   nome[6]='\0';
   strupr(nome);
   for (sec=5;sec>0;sec--) {
       // apresenta que o jogo vai comecar e diz quantos segundos falta
       system("cls");
       printf("Atencao %s o jogo esta para comecar! %d...\n",nome,sec);
       Sleep(1000);
   }
   jogo();
}
 
int score()
{
   // ranking de pontuação de jogadores
   int escScore=0;
   system("cls");
   printf("Scoreboard:\n");
   printf("%s\t\t%d\n",score1,ponto1);
   printf("%s\t\t%d\n",score2,ponto2);
   printf("%s\t\t%d\n",score3,ponto3);
   printf("Digite qualquer numero para VOLTAR\n");
   scanf("%d",&escScore);
   if(escScore>0||escScore<0)
   {
       system("cls");
       main();
   }
}
 
int cred()
{
   // creditos dos criadores do jogo
   int escCred=0;
   system("cls");
   printf("Creditos:\n");
   printf("Eduardo Gabriel\n");
   printf("Gabriel Batistuta\n");
   printf("Lucas Victor\n");
   printf("Salomao Eduardo\n");
   printf("Zezineto Segundo\n");
   printf("Main Game Designer:\n");
   printf("Ceres Germanna\n");
   printf("Digite qualquer numero para VOLTAR\n");
   scanf("%d",&escCred);
   if(escCred>0||escCred<0)
   {
       system("cls");
       main();
   }
}
 
int jogo()
{
   // jogos de perguntas, se acabar uma vai para a proxima ate acabar
   char opc,opcp;
   if(perg==0)
   {
       system("cls");
       printf("Qual a profissao do mario?\n");
       printf("a - faxineiro\n");
       printf("b - predeiro\n");
       printf("c - encanador\n");
       printf("d - cozinheiro\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='c'||opc=='C')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {  
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==1)
   {
       system("cls");
       printf("Qual o nome dos personagens de minecraft\n");
       printf("a - steve e alex\n");
       printf("b - satan e jesus\n");
       printf("c - bob esponja e patrick\n");
       printf("d - ruan e abigail\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='a'||opc=='A')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==2)
   {
       system("cls");
       printf("Quem e personagem de tekken\n");
       printf("a - ryu\n");
       printf("b - naruto\n");
       printf("c - scorpion\n");
       printf("d - eddy gordo\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='d'||opc=='D')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==3)
   {
       system("cls");
       printf("Quais os personagens que aparecem na capa de pokemon red e green respectivamente?\n");
       printf("a - eminem e 2pack\n");
       printf("b - nando moura e felipe neto\n");
       printf("c - charizard e venossauro\n");
       printf("d - pikachu e squirtle\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='c'||opc=='C')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==4)
   {
       system("cls");
       printf("Qual a arma mais famosa de link de legend of zelda?\n");
       printf("a - arco e flecha\n");
       printf("b - espada\n");
       printf("c - escudo\n");
       printf("d - pexeira\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='b'||opc=='B')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==5)
   {
       system("cls");
       printf("Qual o significado da palavra Pac-Man?\n");
       printf("a - paku-paku, que significa a boca de alguem abrindo e fechando\n");
       printf("b - lav-lav, que significa amarelo\n");
       printf("c - yulin-jing, que significa devorar\n");
       printf("d - Big Mouth, que significa boca grande\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='a'||opc=='A')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==6)
   {
       system("cls");
       printf("Na franquia Mortal Kombat quem e o primeiro sub-zero?\n");
       printf("a - Kuai liang\n");
       printf("b - Bi han\n");
       printf("c - Reinaldo\n");
       printf("d - Frezeer\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='b'||opc=='B')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==7)
   {
       system("cls");
       printf("Na serie de jogos Tomb Raider(Reboot),\nqual a arma que aparece junto a personagem principal Lara Croft na capa de seus jogos?\n");
       printf("a - Duas pistolas\n");
       printf("b - Shotgun\n");
       printf("c - Facao\n");
       printf("d - Arco e flecha\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='d'||opc=='D')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==8)
   {
       system("cls");
       printf("No primeiro jogo do Sonic, Sonic the Hedgehog, qual desses � o vilao jogo?\n");
       printf("a - Doutor robot ink\n");
       printf("b - Doutor 28800X\n");
       printf("c - Doutor Robotnik\n");
       printf("d - Doutor robot\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='c'||opc=='C')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==9)
   {
       system("cls");
       printf("No jogo The Last of Us, qual a principal inspiracao REAL, para o Fungo que ameaca os protagonistas no jogo?\n");
       printf("a - Cordyceps, um fungo que infecta insetos os tronando (zumbis)\n");
       printf("b - Cryptococcus, um fungo que afeta o sistema nervoso de humano\n");
       printf("c - Caracara, um fungo que corta a conex�o entre o cerebro e a coluna\n");
       printf("d - lacringy, um fungo que infecta roedores os deixando agressivos e imprudentes\n");
       printf("(p-abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='a'||opc=='A')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
       if(perg==10)
   {
       system("cls");
       printf("Qual foi o primeiro Pokemon a ser criado pelo ilustrador Sugimori Ken?\n");
       printf("a - Pikachu\n");
       printf("b - Mew\n");
       printf("c - Charizard\n");
       printf("d - Rhydon\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='d'||opc=='A')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
       if(perg==11)
   {
       system("cls");
       printf("No jogo God of War 4, qual o nome que foi dado a Atreus por sua mae?\n");
       printf("a - Loki\n");
       printf("b - Tyr\n");
       printf("c - Odinson\n");
       printf("d - Bjorn\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='a'||opc=='A')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
       if(perg==12)
   {
       system("cls");
       printf("Qual filme serviu de inspiracao para o jogo Among Us?\n");
       printf("a - A Chegada\n");
       printf("b - O Enigma de Outro Mundo\n");
       printf("c - Alien- O oitavo passageiro\n");
       printf("d - Vida\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='b'||opc=='B')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
       if(perg==13)
   {
       system("cls");
       printf("Qual o Final Boss do Resident Evil 1?\n");
       printf("a - Whesker\n");
       printf("b - William Burkin\n");
       printf("c - Tyrant\n");
       printf("d - Nemesis\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='c'||opc=='C')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   if(perg==14)
   {
       system("cls");
       printf("No jogo Shadow of the Colossus, Wander usa uma egua para se locomover e matar os colossos, qual o nome dado a egua?\n");
       printf("a - Agro\n");
       printf("b - Iris\n");
       printf("c - Raven\n");
       printf("d - Lucy\n");
       printf("(p - abre o menu de pausa)\n");
       scanf("%s",&opc);
       if(opc=='p'||opc=='P')
       {
           pausa(opcp);
       }
       else if(opc=='a'||opc=='A')
       {
           pntot+=10;
           printf("acertou! +10 pontos\n");
           system("pause");
           perg++;
       }
       else
       {
           printf("errou!\n");
           system("pause");
           perg++;
       }
   }
   system("cls");
   if(gameState==0)
   {
       ponto1=pntot;
       printf("parabens %s voce fez:%d pontos\n",nome,pntot);
       strcpy(score1,nome);
   }
   else if(gameState==1)
   {
       ponto2=ponto1;
       ponto1=pntot;
       printf("parabens %s voce fez:%d pontos\n",nome,pntot);
       strcpy(score2,score1);
       strcpy(score1,nome);
   }
   else if(gameState==2)
   {
       ponto3=ponto2;
       ponto2=ponto1;
       ponto1=pntot;
       printf("parabens %s voce fez:%d pontos\n",nome,pntot);
       strcpy(score3,score2);
       strcpy(score2,score1);
       strcpy(score1,nome);
   }
   else if(gameState>2)
   {
       ponto3=ponto2;
       ponto2=ponto1;
       ponto1=pntot;
       printf("parabens %s voce fez:%d pontos\n",nome,pntot);
       strcpy(score3,score2);
       strcpy(score2,score1);
       strcpy(score1,nome);
   }
   perg=0;
   pntot=0;
   gameState++;
   printf("Deseja jogar de novo?\n");
   printf("(s - sim|n - nao)\n");
   getchar();
   scanf("%s",&opc);
   if(opc=='s')
   {
       system("cls");
       main();
   }
   else if(opc=='n')
   {
       printf("Jogo terminado.\n");
       exit(0);
   }
}
 
int pausa(char opcp)
{  
   system("cls");
   printf("Jogo pausado.(c - continuar | s - sair)\n");
   scanf("%s",&opcp);
   if(opcp=='c'||opcp=='C')
   {
       jogo();
   }
   else if(opcp=='s'||opcp=='S')
   {
       exit(0);
   }
   else
   {
       pausa(opcp);
   }
}

