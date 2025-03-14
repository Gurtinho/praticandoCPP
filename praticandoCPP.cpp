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
	cout << armaSelecionada << "\n";



	// pilha - stack
	stack <string> cartas;
	cartas.push("rei");
	cartas.push("rainha");
	cartas.push("valete"); // vai sair
	cout << "tamanho da pilha: " << cartas.size() << "\n";
	cartas.pop();
	cout << cartas.top() << "\n";



	// filas - queue




	return 0;
}