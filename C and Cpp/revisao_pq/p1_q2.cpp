#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x, y, x2 = -1, y2 = -1;//iniciar x2 e y2 com -1. Só faz o código caso o usuário digite valores válidos
    int deslocamento, deslocamento_total = 0;

    cout << "- cruzamento de partida: ";
    cin >> x >> y;//ler o cruzamento inicial

    if(x != -1 || y != -1){
        cout << "- proximo cruzamento: ";
        cin >> x2 >> y2;//ler o proximo cruzamento
    }
    while(x2 != -1 || y2 != -1){
        deslocamento = abs(x2 - x) + abs(y2 - y);
        deslocamento_total = deslocamento_total + deslocamento;
        cout << "Deslocamento: " << deslocamento << " quadras" << endl;
        cout << "Deslocamento total: " << deslocamento_total << " quadras" << endl;

        x = x2;//coordenadas atuais viram as coordenadas antigas
        y = y2;//coordenadas atuais viram as coordenadas antigas
        cout << "- proximo cruzamento: ";
        cin >> x2 >> y2;//ler as novas coordenadas
    }

    cout << "Fim!";

    return 0;
}
