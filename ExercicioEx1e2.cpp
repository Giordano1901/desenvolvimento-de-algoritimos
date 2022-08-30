#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

/*======================
Atividade para entrega dia: 30/08/2022

Continuar os exemplos já construidos em outras aulas, concluindo
um menu condicional com entrada de dados.

Gustavo Henrique Silva de Camargo Giordano - RMG: 30093023
======================*/


void gotoxy(int x, int y)
{
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
} 

main(){
	setlocale(LC_CTYPE, "Portuguese");
	/*======================
	Declaração de Variaveis
	======================*/
	int ncadastro, opcao, i, cep[ncadastro], nr[ncadastro], idade[ncadastro];
	float num = 0;
	char cadastrados[ncadastro][50], nome[ncadastro][50], endereco[ncadastro][50], comp[ncadastro][30], cidade[ncadastro][20], estado[ncadastro][20];
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
		printf("Selecione uma opção (Não use 'espaço'): ");
		scanf("%d",&opcao);
		system("cls");
		if (opcao==1)
		{
			gotoxy(1,1);
			printf("A opção 'Cadastrar' foi selecionada!'");
			gotoxy(1,3);
			printf("Selecione a quantidade de pessoas a serem cadastradas: ");
			scanf("%d",&ncadastro);
			system("cls");
			for(i=1; i<=ncadastro; i++)
			{
				gotoxy(3,1);
				printf("=====  Cadastro de numero: %d  =====",i);
				gotoxy(5,3);
				printf("- Nome: ");
				gotoxy(5,5);
				printf("- Idade: ");
				gotoxy(5,7);
				printf("- Cidade: ");
				gotoxy(5,9);
				printf("- Estado: ");
				gotoxy(5,11);
				printf("- Nr da Residência: ");
				gotoxy(5,13);
				printf("- Complemento: ");
				gotoxy(5,15);
				printf("- CEP: ");
				//----------------------
				gotoxy(13,3);
				scanf("%s",&nome[i]);
				gotoxy(14,5);
				scanf("%d",&idade[i]);
				gotoxy(15,7);
				scanf("%s",&cidade[i]);
				gotoxy(15,9);
				scanf("%s",&estado[i]);
				gotoxy(25,11);
				scanf("%d",&nr[i]);
				gotoxy(20,13);
				scanf("%s",&comp[i]);
				gotoxy(12,15);
				scanf("%d",&cep[i]);
				//----------------------
				gotoxy(3,18);
				system("pause");
				system("cls");
			}
			system("cls");
			gotoxy(1,1);
			printf("O cadastro foi concluído com êxito!");
			gotoxy(1,3);
			printf("Retomando o menu. . .");
			gotoxy(1,4);
			system("pause");
			system("cls");
		}
		else
		{
			if (opcao==2)
			{
				gotoxy(1,1);
				printf("A opção 'Pesquisar' foi selecionada!'");
				gotoxy(1,3);
				printf("Selecione o numero de cadastro do usuário: ");
				scanf("%d",i);
				system("cls");
				gotoxy(3,1);
				printf("=====  Cadastro de numero: %s  =====",ncadastro);
				gotoxy(5,3);
				printf("- Nome: %s",nome[i]);
				gotoxy(5,5);
				printf("- Idade: %d",idade[i]);
				gotoxy(5,7);
				printf("- Cidade: %s",cidade[i]);
				gotoxy(5,9);
				printf("- Estado: %s",estado[i]);
				gotoxy(5,11);
				printf("- Nr da Residência: %d",nr[i]);
				gotoxy(5,13);
				printf("- Complemento: %s",comp[i]);
				gotoxy(5,15);
				printf("- CEP: %d",cep[i]);
				system("pause");
				system("cls");
			}
			else
			{
				if (opcao==3)
				{
					gotoxy(1,1);
					printf("A opção 'Alterar' foi selecionada!'");
					gotoxy(1,2);
					system("pause");
					system("cls");
					gotoxy(1,1);
					printf("Ops, Parece que ainda não completamos esta parte!");
					gotoxy(1,3);
					printf("Estamos redirecionando de volta ao menu. . .");
					gotoxy(1,4);
					system("pause");
					system("cls");
				}
			}
		}
	}
	while (opcao!=4);
}
