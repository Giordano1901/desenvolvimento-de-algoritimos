#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void gotoxy(int x, int y)
{
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
} 

main(){
	setlocale(LC_CTYPE, "Portuguese");
	/*======================
	Declaração de Variaveis
	======================*/
	char nome [50], endereco [50], complemento [30], cidade [20], estado [20];
	int opcao, cep, nr, idade;
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
		
		
		scanf("opcao");
		system("cls");
		if (opcao = 1)
		{
			printf("Hello World");
			system("pause");
			system("cls");
		}else
		{
		}
	}
	while (opcao != 5);
	
}
