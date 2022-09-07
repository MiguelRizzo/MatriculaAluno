#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct 
{
	int matricula;
	char nome[50];
	char data[10];
	char endereco[255];
	char telefone[15];
	char turma[20];
}Aluno;

int exibirAluno(Aluno a)
{
	printf("Matricula: %d\n",a.matricula);
	printf("Nome: %s\n",a.nome);
	printf("Data Nasc: %s\n",a.data);
	printf("Turma: %s\n",a.turma);
	
	return 0;
}

int lerAluno(Aluno* a)
{
	printf("Digite a matricula do aluno: \n");
	scanf("%d",&a->matricula);
	setbuf(stdin,NULL);
	
	printf("Digite o nome do aluno: \n");
	scanf("%[^\n]",&a->nome);
	setbuf(stdin,NULL);
	
	printf("Digite a data de nascimento no formato dd/mm/aaaa: \n");
	scanf("%[^\n]",&a->data);
	setbuf(stdin,NULL);
	
	printf("Digite a turma do aluno: \n");
	scanf("%[^\n]",&a->turma);
	setbuf(stdin,NULL);	
}

int main(int argc, char *argv[]) {
	Aluno emanuel;
	Aluno turmaA[40];
	
	lerAluno(&emanuel);
	
	exibirAluno(emanuel);	
	
	return 0;
}
