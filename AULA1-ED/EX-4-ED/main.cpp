#include <iostream>

using namespace std;

int main()
{
 int mat[4][4],i,j;

 for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cout << "Digite um número para posição " << i+1 <<","<<j+1<<" da matriz: ";
        cin >> mat[i][j];
        cout << endl;
    }
 }

 for(i=0;i<4;i++){
    cout << endl;
    for(j=0;j<4;j++){
        cout <<  mat[i][j] <<"\t";
    }
 }
cout << endl;
cout << endl;

 for(i=0;i<4;i++){
    cout << endl;
    for(j=0;j<4;j++){
            if(i==j){
        cout <<  mat[i][j] <<"\t";
            }
            cout <<"\t";
    }
 }

 cout << endl;
cout << endl;
cout << endl;

 for(i=0;i<4;i++){
    for(j=0;j<4;j++){
            if(i==3){
        cout <<  mat[i][j] <<"\t";
            }
    }
 }
}
