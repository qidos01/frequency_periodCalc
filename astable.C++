#include <iostream>
#include <cmath>

using namespace ::std;

// write a program to calculate the frequency and period of a given capacitance and resistance
//and workback if either frequency or period was given.

double frequency(double R1, double R2, double capacitor){
    double F;
    double T;
    cout << "Enter R1 value: ";
    cin >> R1;
    cout << "Enter R2 value: ";
    cin >> R2;
    cout<< "Enter Capacitor value: ";
    cin >> capacitor;
    T = 0.693*(R1+2*R2)*capacitor;
    F = 1/T;
    cout <<"Frequency is: "<<F <<"hz" << endl;

}

double period(){
    double T;    
    double F;
    cout << "enter Frequency value: ";
    cin>> F;
    T= 1/F;
    cout << "Period is: " << T <<"secs";
}

double Resistor(double R1, double capacitor){
    double R2;
    double T;
    double F;
    double DC;
    cout << "Enter frequency value: ";
    cin >> F;
    cout << "Enter R1 value: ";
    cin >> R1;
    cout<< "Enter Capacitor value: ";
    cin >> capacitor;
    T = 1/F;
    R2 = T/(0.693*capacitor);
    R2 = R2 - R1;
    R2 = R2/2;
    cout << "R2 = "<< R2 <<"ohms"<<endl;
    DC = ((R1 + R2)/(R1 + 2*R2)*100);
    cout << "Duty cycle: "<< DC << "%";

}


int main(){
    double R1;
    double R2;
    double capacitor;
    string choice;

    cout <<"Frequency =(F=1/T) and period = (T=1/F)" <<endl;
    cout << "where T = 0.693(R1+2R2)C" << endl;
    cout<< endl;
    cout << "What do you want to calculate for: ";
    cin >> choice;

    if (choice == "frequency"){
        frequency(R1, R2, capacitor);
    }

    else if(choice == "period"){
        period();
    }

    else if (choice == "resistor"){
        Resistor(R1, capacitor);   
    }
    else{
        cout<<"Wrong Choice.";
    }

    return 0;

}

