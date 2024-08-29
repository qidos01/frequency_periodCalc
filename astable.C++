#include <iostream>

using namespace ::std;

double frequencyAndPeriod(double R1, double R2, double capacitor){
    double F;
    double T;
    double period;
    cout << "Enter R1 value: ";
    cin >> R1;
    cout << "Enter R2 value: ";
    cin >> R2;
    cout<< "Enter Capacitor value: ";
    cin >> capacitor;
    T = 0.693*(R1+2*R2)*capacitor;
    F = 1/T;
    cout <<"Frequency is: "<<F <<"hz" << endl;
    period = 1/F;
    cout << "Period is: " << period;
}

double capacitorandResistor(double R1, double R2, double capacitor){
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


int main(){
    // write a program to calculate the frequency and period of a given capacitance and resistance
    //and workback if either frequency or period was given.
    double R1;
    double R2;
    double capacitor;

    cout <<"Frequency =(F=1/T) and period = (T=1/F)" <<endl;
    cout << "where T = 0.693(R1+2R2)C" << endl;

    frequencyAndPeriod(R1, R2, capacitor);
    return 0;
    
    if ((R1 = 0) || ( R2 =0)){

    }

    //to get either the resistor value or capacitor value


}

