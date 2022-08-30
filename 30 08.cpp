#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

void gotoxy(int x, int y)
{
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
} 

main(){
	setlocale(LC_CTYPE, "Portuguese");
	/*======================
	Declaração de Variaveis
	======================*/
	int ncadastro, opcao, i, cep, nr, idade;
	float num = 0;
	char cadastrados[ncadastro][50], endereco[ncadastro][50], complemento[ncadastro][30], cidade[ncadastro][20], estado[ncadastro][20];
	//======================
	do
	{
		gotoxy(1,1);
		printf("====================================");
		gotoxy(8,2);
		printf("Programa de Cadastro");
		gotoxy(1,3);
		printf("Menu condicional / Entrada de dados");
		gotoxy(8,6);
		printf("-- Work in Progress --");
		gotoxy(1,7);
		printf("====================================");
		gotoxy(1,8);
		printf("1 - Cadastrar");
		gotoxy(1,9);
		printf("2 - Pesquisar");
		gotoxy(1,10);
		printf("3 - Alterar");
		gotoxy(1,11);
		printf("4 - Sair");
		gotoxy(1,13);
		printf("Selecione uma opção: ");
		scanf("%d",&opcao);
		system("cls");
		if (opcao==1)
		{
			gotoxy(1,1);
			printf("Selecione a quantidade de pessoas a serem cadastradas: ");
			scanf("%d",&ncadastro);
			system("cls");
			for(i=1; i<=ncadastro; i++)
			{
				gotoxy(1,1);
				printf("Insira o nome da %d° pessoa: ",i);
				scanf("%s",&cadastrados[i]);
			}
			system("cls");
			printf("Ficha cadastro");
			gotoxy(1,10);
			system("pause");
			system("cls");
		}
		else
		{
			if (opcao==2)
			{
				gotoxy(1,1);
				printf("2");
				gotoxy(1,3);
				system("pause");
				system("cls");
			}
			else
			{
				if (opcao==3)
				{
					gotoxy(1,1);
					printf("3");
					gotoxy(1,3);
					system("pause");
					system("cls");
				}
			}
		}
	}
	while (opcao!=4);
}
