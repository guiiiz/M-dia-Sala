#include <iostream>
using namespace std;

int main() {
    const int numSalas = 6; // Definindo o número de salas
    int sala[numSalas]; // Array que armazena a quantidade de alunos em cada sala
    
    // Recebendo a quantidade de alunos em cada sala
    for (int i = 0; i < numSalas; i++) {
        cout << "Digite a quantidade de alunos na Sala " << i+1 << ": ";
        cin >> sala[i];
    }
    
    // Calculando a média
    float media = 0;
    for (int i = 0; i < numSalas; i++) {
        media += sala[i];
    }
    media /= numSalas;
    
    // Verificando qual a sala com a maior quantidade de alunos
    int maior = sala[0], posMaior = 0;
    for (int i = 1; i < numSalas; i++) {
        if (sala[i] > maior) {
            maior = sala[i];
            posMaior = i;
        }
    }
    
    // Verificando qual a sala com a menor quantidade de alunos
    int menor = sala[0], posMenor = 0;
    for (int i = 1; i < numSalas; i++) {
        if (sala[i] < menor) {
            menor = sala[i];
            posMenor = i;
        }
    }
    
    // Apresentando o resultado
    cout << "A média de alunos por sala é: " << media << endl;
    cout << "A sala com a maior quantidade de alunos é: Sala " << posMaior+1 << endl;
    cout << "A sala com a menor quantidade de alunos é: Sala " << posMenor+1 << endl;
    
    return 0;
}

