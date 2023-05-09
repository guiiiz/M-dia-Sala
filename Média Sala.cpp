#include <iostream>
using namespace std;

int main() {
    // Definindo a quantidade de alunos em cada sala
    int sala1 = 35, sala2 = 4, sala3 = 22, sala4 = 20, sala5 = 36, sala6 = 30;
    // Calculando a média
    float media = (sala1 + sala2 + sala3 + sala4 + sala5 + sala6) / 6.0;
    
    // Verificando quais salas possuem quantidade de alunos acima da média e apresentando o resultado
    if (sala1 > media) {
        cout << "Sala 1 tem uma quantidade de pessoas acima da média." << endl;
    }
    if (sala2 > media) {
        cout << "Sala 2 tem uma quantidade de pessoas acima da média." << endl;
    }
    if (sala3 > media) {
        cout << "Sala 3 tem uma quantidade de pessoas acima da média." << endl;
    }
    if (sala4 > media) {
        cout << "Sala 4 tem uma quantidade de pessoas acima da média." << endl;
    }
    if (sala5 > media) {
        cout << "Sala 5 tem uma quantidade de pessoas acima da média." << endl;
    }
    if (sala6 > media) {
        cout << "Sala 6 tem uma quantidade de pessoas acima da média." << endl;
    }
    
    return 0;
}
