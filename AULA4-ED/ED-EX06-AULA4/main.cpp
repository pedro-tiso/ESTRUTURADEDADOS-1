#include <iostream>

using namespace std;
struct Circ{
int raio, circun;
};
int main()
{
    Circ *circulo = new Circ[2];
    int i;
     for (i=0 ; i < 2; i++){
        cout << "Digite o raio do circulo " << i+1 << ": ";
        cin >> circulo[i].raio;
        cout << "Digite a circunferencia do circulo " << i+1 << ": ";
        cin >> circulo[i].circun;
        cout << endl;
        cout << endl;
     }

      cout << endl;
      cout << endl;

      for (i=0 ; i < 2; i++){
        cout << "Raio do circulo " << i+1 << ": " << circulo[i].raio;
      cout<<endl;
        cout << "Diamêtro do circulo " << i+1 << ": " << circulo[i].raio * 2;
        cout << endl;
        cout << "Área do circulo " << i+1 << ": " << 3.14 * (circulo[i].raio * circulo[i].raio);
        cout << endl;
        cout << endl;
     }
    return 0;
}
