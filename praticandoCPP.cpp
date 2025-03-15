// praticandoCPP.cpp: define o ponto de entrada para o aplicativo.
//

#include "praticandoCPP.h"

using namespace std;

#define PI 3.14;

int main()
{
	cout << PI;
	cout << "\n";


	// enums
	enum armas { fuzil = 100, carabina = 200, shotgun = 300 };
	armas armaSelecionada;
	armaSelecionada = fuzil; // 100
	cout << armaSelecionada << "\n\n";



	// pilha - stack
	stack <string> cartas;
	cartas.push("rei");
	cartas.push("rainha");
	cartas.push("valete"); // vai sair
	cout << "tamanho da pilha: " << cartas.size() << "\n\n";
	cartas.pop();
	cout << cartas.top() << "\n\n";



	// filas - queue
	queue <string> carros;
	carros.push("sw4");
	carros.push("gol");
	carros.push("nivus");
	cout << "tamanho da fila: " << carros.size() << "\n";
	cout << "quem está na frente: " << carros.front() << "\n";
	cout << "quem está atrás: " << carros.back() << "\n\n";


	list <int> numeros, numerosMergidos;
	int tamanho;
	tamanho = 10;
	list <int>::iterator it;

	numerosMergidos.push_front(1);
	numerosMergidos.push_front(1);
	numerosMergidos.push_front(1);
	numerosMergidos.push_front(1);

	for (int i = 0; i < tamanho; i++) {
		numeros.push_back(i);
	}

	it = numeros.begin();
	advance(it, 5);
	numeros.insert(it, 0);

	// apagando elementos
	numeros.erase(--it); // volta 1 pra apagar o correto

	numeros.clear(); // limpa tudo

	numeros.merge(numerosMergidos);

	cout << "tamanho lista: " << numeros.size() << "\n";

	tamanho = numeros.size();
	for (int i = 0; i < tamanho; i++) {
		cout << "numero: " << numeros.front() << "\n";
		numeros.pop_front();
	}

	return 0;
}
