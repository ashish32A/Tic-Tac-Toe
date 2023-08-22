#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<mmsystem.h>
char square[10]={'o','1','2','3','4','5','6','7','8','9'};
char name[15];
char name1[15];
int x;
void mark();
void header();
int checkwin();
void drawboard();
void help();
void players();
int main()
{
char ch;
while(1) 
{
//PlaySound(TEXT("Music win sound.wav",NULL,SND_SYNC);
system("color 70");
printf("\n\n\t\t\t\t\t***|*|*****|*| *****TIC TOE GAME***** |*|*****|*|***\n");
printf("\n\t\t\t\t\t               |*| *****MENU***** |*|            \n");
printf("\n\n\t\t\t\t\t\t 1.YOU NEED ANY HELP & UNDERSTAND RULES  PRESS.... <h>");
printf("\n\n\t\t\t\t\t\t 2.EXIT THE GAME PRESS......... <E>");
printf("\n\n\t\t\t\t\t\t 3.CONTINUE THE GAME PRESS...(ENTER)");
scanf("%c",&ch);
system("cls");
if(ch=='h')
{
	help();             
}
else if(ch=='e')
{
	exit(1);                    
}
system("color 70");      
header();
players();
mark();
}
}
void header()
{
printf("\t\t\t==========================================================================================\n");
printf("\t\t\t\t\t|*|     ************TIC TAC TOE GAME**************     |*|\n");
printf("\t\t\t==========================================================================================\n");
}
void mark()
{
int player=1,i,choice;
char mark;//X,O
start:
header();
system("color 70"); 
printf("\n\n\t\t\t\t\t\t============================================");
printf("\n\t\t\t\t\t\tEnter the choice player's '(X= 1) or (O= 2):");
scanf("%d",&player);
printf("\n\t\t\t\t\t\t******************Press Enter*****************");
getch();
do{
drawboard();
player=(player%2)?1:2;//value is not divisible by 2 then player is 1 otherwise player is 2
if(player==1)
{
printf("\n\n\t\t\t\t\t\t player :- %s  your turn:", name);	
}
else if(player==2)
{
printf("\n\n\t\t\t\t\t\t player :- %s  your turn:", name1);	
	
}
scanf("%d",&choice);
mark=(player==1)?'X':'O';
if(choice==1&&square[1]=='1')
square[1]=mark;
else if(choice==2&&square[2]=='2')
square[2]=mark;
else if(choice==3&&square[3]=='3')
square[3]=mark;
else if(choice==4&&square[4]=='4')
square[4]=mark;
else if(choice==5&&square[5]=='5')
square[5]=mark;
else if(choice==6&&square[6]=='6')
square[6]=mark;
else if(choice==7&&square[7]=='7')
square[7]=mark;
else if(choice==8&&square[8]=='8')
square[8]=mark;
else if(choice==9&&square[9]=='9')
square[9]=mark;
else
{
printf("Invalid ption! Enter agin:");
player--;
getch();
}
i=checkwin();
player++;
}while(i==-1);   

//drawboard();
if(i==1)
{
square[1]='1'; square[2]='2';square[3]='3';square[4]='4',square[5]='5'; square[6]='6';square[7]='7';square[8]='8';square[9]='9';  
printf("\n\n\t\t\t\t\t\t**player %d win**",--player);     
printf("\npress ('1') enter to start again......");  
printf("\npress ('0') exit to the  game.........");   
scanf("%d",&x);
if(x==0)
{
	exit(0);
}
else if(x==1)
{
system("cls");
goto start;
//getch();
}

}
else
{
system("color 70");
square[1]='1'; square[2]='2';square[3]='3';square[4]='4',square[5]='5'; square[6]='6';square[7]='7';square[8]='8';square[9]='9'; 
printf("\n\n\t\t\t\t\t\t******Game is draw try again*******");      
printf("\npress ('1') enter to start again......");    
printf("\npress ('0') exit to the  game.........");    
scanf("%d",&x);
if(x==0)
{
	exit(0);
}
else if(x==1)    
{
goto start;

//getch();
}     
}     
getch();   
}

int checkwin()   
{
 
if(square[1]==square[2]&&square[2]==square[3])
return 1;
else if(square[4]==square[5]&&square[5]==square[6])
return 1;
else if(square[7]==square[8]&&square[8]==square[9])
return 1;
else if(square[1]==square[4]&&square[4]==square[7])
return 1;
else if(square[2]==square[5]&&square[5]==square[8])
return 1;
else if(square[3]==square[6]&&square[6]==square[9])
return 1;
else if(square[1]==square[5]&&square[5]==square[9])
return 1;
else if(square[3]==square[5]&&square[5]==square[7])
return 1;
else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
return 0;
else
return-1;
}
void drawboard()
{

system ("cls");
	header();
//		printf("\t\t\t\t\t\t****************\n");
//		printf("\t\t\t\t\t\t Tic Tac Toe \n");
//		printf("\t\t\t\t\t\t****************\n\n");
		printf("\t\t\t\t\t\t\tplayer (%s) player (%s)\t\t\t\t\t \n\n",name,name1);
		printf("\t\t\t\t\t\t\t __________________\n");
		printf("\t\t\t\t\t\t\t|     |      |     |\n");
		printf("\t\t\t\t\t\t\t|   %c |  %c   |  %c  |\n",square[1],square[2],square[3]);
		printf("\t\t\t\t\t\t\t|_____|______|_____|\n");
		printf("\t\t\t\t\t\t\t|     |      |     |\n");
		printf("\t\t\t\t\t\t\t|   %c |  %c   |  %c  |\n",square[4],square[5],square[6]);
		printf("\t\t\t\t\t\t\t|_____|______|_____|\n");
		printf("\t\t\t\t\t\t\t|     |      |     |\n");
		printf("\t\t\t\t\t\t\t|   %c |  %c   |  %c  |\n",square[7],square[8],square[9]);
		printf("\t\t\t\t\t\t\t|_____|______|_____|\n");
	
	
}
void help()
{
	header();
	system("color 70");
	printf("\n\n\t\tA: prees 1 to  ( X ) :\n");
	printf("\n\n\t\tB: prees 2 to  ( O ) :\n");
	printf("\n\n\t\tC: IF YOU CHOICE X THEN IT WILL START PLAY PLAYER 1:\n");
	printf("\n\n\t\tC: IF YOU CHOICE O THEN IT WILL START PLAY PLAYER 2:\n");
	printf("\n\n\t\t\t\t\t\t  PRESS ENTER TO GO WITHIN THE GAME:");	
	getch();
	system("cls");
}
void players()
{
printf(" \n\n\t\tENTER THE FIRST  PLAYERS NAME==> ");
scanf("%s",&name);
printf("\n\n\t\tENTER THE SECOND  PLAYERS NAME==> ");
scanf("%s",&name1);
printf("\n\n\t\t\t\t\t\t\t\t***ENTER***");

getch();
system("cls");
}
