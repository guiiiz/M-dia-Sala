#include <iostream>
using namespace std;

int main() {
    // Definindo a quantidade de alunos em cada sala
    int salas[6][2] = {{1, 35}, {2, 4}, {3, 22}, {4, 20}, {5, 36}, {6, 30}};
    // Calculando a média
    float media = 0;
    for (int i = 0; i < 6; i++) {
        media += salas[i][1];
    }
    media /= 6.0;
    
    // Verificando quais salas possuem quantidade de alunos acima da média e apresentando o resultado
    for (int i = 0; i < 6; i++) {
        if (salas[i][1] > media) {
            cout << "Sala " << salas[i][0] << " tem uma quantidade de pessoas acima da média." << endl;
        }
    }
    
    return 0;
} 
