#include <iostream>
using namespace std;

int main() {
    // Recebendo a quantidade de alunos em cada sala
    int sala1, sala2, sala3, sala4, sala5, sala6;
    cout << "Digite a quantidade de alunos na Sala 1: ";
    cin >> sala1;
    cout << "Digite a quantidade de alunos na Sala 2: ";
    cin >> sala2;
    cout << "Digite a quantidade de alunos na Sala 3: ";
    cin >> sala3;
    cout << "Digite a quantidade de alunos na Sala 4: ";
    cin >> sala4;
    cout << "Digite a quantidade de alunos na Sala 5: ";
    cin >> sala5;
    cout << "Digite a quantidade de alunos na Sala 6: ";
    cin >> sala6;
    
    // Calculando a média
    float media = (sala1 + sala2 + sala3 + sala4 + sala5 + sala6) / 6.0;
    
    // Verificando qual a sala com a maior quantidade de alunos
    int maior = sala1;
    if (sala2 > maior) maior = sala2;
    if (sala3 > maior) maior = sala3;
    if (sala4 > maior) maior = sala4;
    if (sala5 > maior) maior = sala5;
    if (sala6 > maior) maior = sala6;
    
    // Verificando qual a sala com a menor quantidade de alunos
    int menor = sala1;
    if (sala2 < menor) menor = sala2;
    if (sala3 < menor) menor = sala3;
    if (sala4 < menor) menor = sala4;
    if (sala5 < menor) menor = sala5;
    if (sala6 < menor) menor = sala6;
    
    // Apresentando o resultado
    cout << "A média de alunos por sala é: " << media << endl;
    cout << "A sala com a maior quantidade de alunos é: ";
    if (maior == sala1) {
        cout << "Sala 1";
    } else if (maior == sala2) {
        cout << "Sala 2";
    } else if (maior == sala3) {
        cout << "Sala 3";
    } else if (maior == sala4) {
        cout << "Sala 4";
    } else if (maior == sala5) {
        cout << "Sala 5";
    } else {
        cout << "Sala 6";
    }
    cout << endl;
    cout << "A sala com a menor quantidade de alunos é: ";
    if (menor == sala1) {
        cout << "Sala 1";
    } else if (menor == sala2) {
        cout << "Sala 2";
    } else if (menor == sala3) {
        cout << "Sala 3";
    } else if (menor == sala4) {
        cout << "Sala 4";
    } else if (menor == sala5) {
        cout << "Sala 5";
    } else {
        cout << "Sala 6";
    }
    cout << endl;
    
    return 0;
}

