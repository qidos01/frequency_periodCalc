#include <iostream>
#include <cmath>

using namespace ::std;

// write a program to calculate the frequency and period of a given capacitance and resistance
//and workback if either frequency or period was given.

double frequency(double R1, double R2, double capacitor){
    double F;
    double T;
    double result;
    T = 0.693*(R1+2*R2)*capacitor;
    F = 1/T;
    cout << F <<endl;
    result = T;
    cout << result <<endl; 
    return result;

}

double period(double F){
    double T;    
    double result;
    result = 1/F;
    cout << result;
    return result;
}

double Resistor(double R1, double capacitor){
    double R2;
    double T;
    double F;
    double result;
    T = 1/F;
    R2 = T/(0.693*capacitor);
    R2 = R2 - R1;
    R2 = R2/2;
    result = R2;
    return result;
}

double dutyCycle(double R1, double R2){
    double DC;
    double result;
    DC = ((R1 + R2)/(R1 + 2*R2)*100);
    result = DC;
    return DC;
}


int main(){
    double R1;
    double R2;
    double capacitor;
    double F;
    double T;
    double DC;
    double result;
    string choice;

    cout <<"Frequency =(F=1/T) and period = (T=1/F)" <<endl;
    cout << "where T = 0.693(R1+2R2)C" << endl;
    cout<< endl;
    cout << "What do you want to calculate for: ";
    cin >> choice;

    if (choice == "frequency"){
        cout << "Enter R1 value: ";
        cin >> R1;
        cout <<R1;
        cout << "Enter R2 value: ";
        cin >> R2;
        cout <<R2;
        cout<< "Enter Capacitor value: ";
        cin >> capacitor;
        cout <<capacitor;
        frequency(R1, R2, capacitor);
        cout << frequency <<endl;
        cout <<"Frequency is: "<<result <<"hz" << endl;
    }

    else if(choice == "period"){
        cout << "enter Frequency value: ";
        cin>> F;
        period(F);
        cout << "Period is: " << result <<"secs";
    }

    else if (choice == "resistor"){
        cout << "Enter frequency value: ";
        cin >> F;
        cout << "Enter R1 value: ";
        cin >> R1;
        cout<< "Enter Capacitor value: ";
        cin >> capacitor;
        Resistor(R1, capacitor);
        cout << "R2 = "<< result <<"ohms"<<endl;
    }

    else if (choice == "duty cycle"){
        cout << "Enter R1 value: ";
        cin >> R1;
        cout << "Enter R2 value: ";
        cin >> R2;
        dutyCycle(R1, R2);
        cout << "Duty cycle: "<< result << "%";
    }
    else{
        cout <<"Wrong Choice.";
    }

    return 0;

}

