#include <iostream>

using namespace :: std;
// double capacitorandResistor(double R1, double R2, double capacitor){
//     double C;
//     double R;
//     double period;
//     cout << "Enter R1 value: ";
//     cin >> R1;
//     cout << "Enter R2 value: ";
//     cin >> R2;
//     cout<< "Enter Capacitor value: ";
//     cin >> capacitor;
//     T = 0.693*(R1+2*R2)*capacitor;
//     F = 1/T;
//     cout <<"Frequency is: "<<F <<"hz" << endl;
//     period = 1/F;
//     cout << "Period is: " << period;
// }

int main(){
    double R1;
    char R2;
    double capacitor;
    double T;
    double F;
    double R;
    cout << "Enter frequency value: ";
    cin >> F;
    cout << "Enter R1 value: ";
    cin >> R1;
    cout << "Enter R2 value: ";
    cin >> R2;
    cout<< "Enter Capacitor value: ";
    cin >> capacitor;
    T = 1/F;
    R = T=0.693*(R1+2*R2)*capacitor;
    cout << "R2 = "<< R;

}