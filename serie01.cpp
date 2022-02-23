# include <iostream>
# include <math.h>
float potencia(float b, int p);
double factorial(int n);
using namespace std;

int main(){
    float  n, y ;
    float exp=1, x, e, m;
    //double m, n;
    cout<<"\n\tUNIVERSIDAD MAYOR DE SAN ANDRES\n";
    cout<<"\tFACULTAD DE INGENIERAIA\n";
    cout<<"\tFLORES QUISPE NILO\n";
    cout<<"\n\t ingrese el valor de x = ";
    cin>>x;
    cout<<"\ncantidad de terminos a usar = ";
    cin>>n;
    for(y=1;y<n;y++)
    {
        exp=exp+e/m;
        e = potencia(x,y);
        m = factorial(y);
        //cout<<z<<"  ";
        cout<<"X^"<<y<<"/"<<m<<"  ";
    }
    cout<<"\ne^("<<x<<") ="<<exp;

    return 0;
}

float potencia(float b, int p){
    int k;
    float resultado=1;
    for(k=1;k<=p;k++){
        resultado=resultado*b;
    }
    return(resultado);
}

double factorial(int n){
    int  i;
    double f=1;
    for (i=1;i<=n;i++){
        f=f*i;
    }
    return(f);
}