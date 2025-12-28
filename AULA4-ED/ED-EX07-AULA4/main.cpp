#include <iostream>

using namespace std;
struct Circ{
double raio, circun, area, diametro;
};
void recebe (Circ *circulo){
int i;
     for (i=0 ; i < 10; i++){
        cout << "Digite o raio do circulo " << i+1 << ": ";
        cin >> circulo[i].raio;
        cout << "Digite a circunferencia do circulo " << i+1 << ": ";
        cin >> circulo[i].circun;
        cout << endl;
        cout << endl;
     }
}
void calcarea (Circ *circulo){
    int i;
    for (i=0 ; i < 10; i++){
     circulo[i].area =  3.14 * (circulo[i].raio * circulo[i].raio);
     }
}

void calcdiam (Circ *circulo){
    int i;
    for (i=0 ; i < 10; i++){
     circulo[i].diametro = circulo[i].raio * 2;
     }
}
void mostra (Circ *circulo){
    int i;
    for (i=0 ; i < 10; i++){
        cout << "Raio do circulo " << i+1 << ": " << circulo[i].raio;
        cout<<endl;
        cout << "Circunferencia do circulo " << i+1 << ": " << circulo[i].circun;
        cout<<endl;
        cout << "Diamêtro do circulo " << i+1 << ": " << circulo[i].diametro;
        cout << endl;
        cout << "Área do circulo " << i+1 << ": " << circulo[i].area;
        cout << endl;
        cout << endl;
}
}
int main()
{
    Circ *circulo = new Circ[10];
    recebe(circulo);
    calcarea(circulo);
    calcdiam(circulo);
    mostra(circulo);

    delete[] circ;
      return 0;
}
