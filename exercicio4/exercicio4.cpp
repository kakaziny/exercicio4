//ex1

#include <iostream>
using namespace std;

string mostrarDiaSemana(int numero) {
    switch (numero) {
    case 1:
        return "domingo";
    case 2:
        return "segunda feira";
    case 3:
        return "terça feira";
    case 4:
        return "quarta feira";
    case 5:
        return "quinta feira";
    case 6:
        return "sexta feira";
    case 7:
        return "sábado";
    default:
        return "dia inválido";
    }
}

int main() {
    int numero;
    cout << "Digite um número de 1 a 7: ";
    cin >> numero;

    cout << mostrarDiaSemana(numero);

    return 0;
}

//ex2 

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacao;

    cout << "digite o primeiro número: ";
    cin >> num1;

    cout << "digite o segundo número: ";
    cin >> num2;

    cout << "escolha a operação matemática (+, -, * ou /): ";
    cin >> operacao;

    double resultado;
    switch (operacao) {
    case '+':
        resultado = num1 + num2;
        cout << "o resultado da soma é: " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "o resultado da subtração é: " << resultado <<endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "o resultado da multiplicação é: " << resultado << endl;
        break;
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "o resultado da divisão é: "<< resultado <<endl;
        }
        else {
            cout << "erro: Divisão por zero!" << endl;
        }
        break;
   default:
        cout << "operação inválida!" << endl;
    }

return 0;
}

//ex 3

#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "digite uma letra: ";
    cin >> letra;

  if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "vogal" << endl;
    }
    else {
        cout << "consoante" << endl;
    }

    return 0;
}


