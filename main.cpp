#include <iostream>


int reproduccion;
int poblacionTotal = 0;
int determinarPoblacion(int determinarP)
{
    if ( determinarP != 0 )
    {
        if ( determinarP == 1 )
            poblacionTotal += 6;
        else
            poblacionTotal += 3;

        determinarPoblacion(determinarP - 1);
    }
    return poblacionTotal;
}

using namespace std;

int main()
{
    int determinarP;

    cout << "Digite la cantidad que desea determinar " << endl;
    cin >> determinarP;

    cout <<"La poblacion total es" << determinarPoblacion(determinarP);


}
