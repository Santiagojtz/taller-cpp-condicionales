#include <iostream>      
#include <iomanip>       
using namespace std;     

    double celsius;

int main() {
cout << "Ingrese temperatura en Celsius: ";
cin >> celsius;

double rankine = (celsius + 273.15) * 9 / 5;
double fahrenheit = (celsius * 9 / 5) + 32;
double kelvin = (celsius + 273.15);

  cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    cout << "Rankine: " << rankine << endl;


      return 0; 
}