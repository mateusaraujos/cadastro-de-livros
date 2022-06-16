/*
	O problema consiste em elaborar um cadastro
	para 3 livros, contendo as seguintes informações:
	código, título, autor, área, ano e editora.
	Desenvolver um menu com as seguintes opções:
		1. Cadastrar os livros.
		2. Imprimir as informações dos livros.
		3. Pesquisar livros por código.
		4. Ordenar os livros por ano.
		5. Sair do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criando o tipo struct livro para armazenar todas as informações do livro.
struct livro {
	int codigo, ano;
	char titulo[50], autor[30], area[30], editora[30];
};

// Vão ser cadastrados 3 livros
struct livro cadastro[3];
int i, escolha;

// Prototipação das Funções.
void menu(void);
void cadastrarLivros(void);
void imprimirInfosLivros(void);
void pesquisarLivrosPorCodigo(void);
void ordenarLivrosPorAno(void);

// A Função Principal é responsável por redirecionar o programa para outros Menus.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	while (escolha != 5) {
		menu();
		
		// Tratando cada opção.
		switch (escolha) {
			case 1 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Menu Principal > Cadastrar Livros\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a função para o cadastro dos livros.
				cadastrarLivros();
				break;
			case 2 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Menu Principal > Livros Cadastrados\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a função para mostrar as informações dos livros cadastrados.
				imprimirInfosLivros();
				break;
			case 3 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Menu Principal > Pesquisar Livros\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a função para pesquisar os livros por código.
				pesquisarLivrosPorCodigo();
				break;
			case 4 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Ordenando os livros por ano...\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a função que ordena os livros por ano.
				ordenarLivrosPorAno();
				break;
			case 5 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Saindo...\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a função de para encerrar o programa com êxito.
				exit(EXIT_SUCCESS);
				break;
			default:
				system("cls");
			
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| ERRO: Digite uma escolha válida.\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
				break;
		}
	}
	
	return (0);
}

// Função do Menu Principal.
void menu(void) {
	// Mostrando todas as opções.
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf(":::::::::::::::::MENU PRINCIPAL::::::::::::::\n");
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| 1. Cadastrar os livros.\n");
	printf("| 2. Imprimir as informações dos livros.\n");
	printf("| 3. Pesquisar livros por código.\n");
	printf("| 4. Ordenar os livros por ano.\n");
	printf("| 5. Sair do programa.\n");
	printf("::ESCOLHA::: ");
	scanf("%d", &escolha);
	fflush(stdin);
	
	return;
}

// Função Cadastro de Livros.
void cadastrarLivros(void) {
	// Fazendo o cadastro dos livros.
	for (i=0; i<3; i++) {
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("::::::::::::::CADASTRAR LIVROS::::::::::::::::\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		
		printf("| Código: ");
		scanf("%d", &cadastro[i].codigo);
		fflush(stdin);
		
		printf("| Título: ");
		gets(cadastro[i].titulo);
		fflush(stdin);
		
		printf("| Autor: ");
		gets(cadastro[i].autor);
		fflush(stdin);
		
		printf("| Área: ");
		gets(cadastro[i].area);
		fflush(stdin);
		
		printf("| Ano: ");
		scanf("%d", &cadastro[i].ano);
		fflush(stdin);
		
		printf("| Editora: ");
		gets(cadastro[i].editora);
		fflush(stdin);
		
		system("cls");
	}
	
	// Redirecionando para o Menu.
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Retornando ao Menu Principal...\n");
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	return;
}

// Função de exibição dos livros cadastrados.
void imprimirInfosLivros(void) {
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf(":::::::::::::LIVROS CADASTRADOS:::::::::::::::\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("----------------------------------------------\n");
	
	// Mostrando os informações dos livros que estão cadastrados.
	for (i=0; i<3; i++) {
		printf("\n| Código: %d", cadastro[i].codigo);
		
		printf("\n| Título: ");
		puts(cadastro[i].titulo);
		
		printf("| Autor: ");
		puts(cadastro[i].autor);
		
		printf("| Área: ");
		puts(cadastro[i].area);
		
		printf("| Ano: %d", cadastro[i].ano);
		
		printf("\n| Editora: ");
		puts(cadastro[i].editora);
		
		printf("\n----------------------------------------------\n");
	}
	system("pause");
	system("cls");
	
	// Redirecionando para o Menu.
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Retornando ao Menu Principal...\n");
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	return;
}

// Fução para fazer uma pesquisa de livros pelo código.
void pesquisarLivrosPorCodigo(void) {
	int busca, acha;
	
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("::::::::::::::PESQUISAR LIVROS::::::::::::::::\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("::Digite o código do livro::: ");
	scanf("%d", &busca);
	
	i = 0;
	acha = 0;
	
	// Buscando o livro de código "busca".
	while (acha==0 && i<3) {
		// Se a busca for igual ao código.
		if (cadastro[i].codigo == busca) {
			// Achou!
			acha = 1;
		} else {
			// Se não achar, incrementa.
			i++;
		}
	}
	
	if (acha == 1) {
		// Mostrando qual livro foi achado.
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Livro encontrado: ");
		puts(cadastro[i].titulo);
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		system("pause");
		system("cls");
		
		// Mostrando todos as informações do livro.
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Mais informações do livro ");
		puts(cadastro[i].titulo);
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("----------------------------------------------\n");
		
		printf("\n| Código: %d", cadastro[i].codigo);
		
		printf("\n| Título: ");
		puts(cadastro[i].titulo);
		
		printf("| Autor: ");
		puts(cadastro[i].autor);
		
		printf("| Área: ");
		puts(cadastro[i].area);
		
		printf("| Ano: %d", cadastro[i].ano);
		
		printf("\n| Editora: ");
		puts(cadastro[i].editora);
		printf("\n----------------------------------------------\n");
		system("pause");
		system("cls");
		
		// Redirecionando para o Menu.
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Retornando ao Menu Principal...\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		system("pause");
		system("cls");
	} else {
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Não foi encontrado nenhum livro.\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		system("pause");
		system("cls");
	}
	
	return;
}

// Função para ordenar os livros por ano.
void ordenarLivrosPorAno(void) {
	struct livro troca[3];
	int j;
	
	// Colocando os livros na ordem do mais antigo ao mais novo.
	for (i=0; i<2; i++) {
		for (j=i+1; j<3; j++) {
			// Se o ano do primeiro livro for mair que o ano do segundo livro.
			if (cadastro[i].ano > cadastro[j].ano) {
				/*
					Todas as informações do vetor "cadastro" são guardadas
					no vetor do mesmo tipo (livro) "troca".
				*/
				troca[i] = cadastro[i];
				/*
					Todas as informações do livro com ano menor são guardados
					em primeiro lugar.
				*/
				cadastro[i] = cadastro[j];
				/*
					Enquanto, no segundo lugar, vão as informações que estavam
					em primeiro lugar, que estão no vetor "troca".
				*/
				cadastro[j] = troca[i];
			}
		}
	}
	
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Livros ordenados por ano.\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Retornando ao Menu Principal...\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	return;
}
