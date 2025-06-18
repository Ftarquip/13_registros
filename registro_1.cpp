//registro clase
#include <iostream>
using namespace std;
struct EMP{
    int num;
    string nom;
    float ven[12], sal;
};

int main(){
    EMP empleados[100];
    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        cout << "num y nom:";
        cin>>empleados[i].num>>empleados[i].nom;
        for(int j=0;j<12;j++){
            cin >> empleados[i].ven[j];
        }
        cout <<"salario: ";
        cin >> empleados[i].sal;    

    }
    return 0;
}
