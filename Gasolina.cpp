#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
int main()
{
	system("cls");
    setlocale(LC_ALL, "Portuguese");
    double tempo, velocidade, distancia, litros;
    cout << " O tempo gasto em horas: ";
    cin >> tempo;
    cout << "\n A velocidade em km/h: ";
    cin >> velocidade;
	distancia = tempo * velocidade;
	litros = distancia / 12;
    cout << "\n Tempo gasto foi: " << tempo << endl;
    cout << "\n Velocidade média: " << velocidade << endl ;
    cout << "\n Distancia total: " << distancia << endl;
    cout << "\n litros gastos: " << litros << endl;
    system("pause");

    return 0;
}