#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, x=0, y=0, z=0;
    cout<<"Inserire i coefficenti a e b: ";
    cin>>a>>b;
    cout<<"Inserire le incognite x e y: ";
    cin>>x>>y;

    if ((x<0) && (y>0)){
        z = a*x - b*y;
        cout<<"Risultato equazione = "<<z<<endl;
    } else if ((x>=0) && (y<=0)){
        z = a*(x*x) - b*y;
        cout<<"Risultato equazione = "<<z<<endl;
    } else{
        z = a*x + b*(y*y);
        cout<<"Risultato equazione = "<<z<<endl;

    }
   return 0;
}
