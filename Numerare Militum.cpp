#include <iostream>
#include <stdlib.h>
using namespace std;

//void Add_Recruits(New_Recruits, Active_Duty) {

//};

int main()
{   
    int Total_Personnel = 0;
    int Active_Duty = 0;
    int Injured = 0;
    int Deceased = 0;
    int Missing = 0;
    int Captured = 0;
    int Discharged = 0;
    int Retired = 0;

    for (; ; ) {
        int input = 0;
        system("CLS");
        cout << "Numerare Militum\n";
        cout << "Main Menu (Enter '#' for each option)\n";
        cout << "\n'1' To View Personnel\n\n";
        cin >> input;

        if (input == 1){
            system("CLS");
            cout << "Personnel Menu\n\n";
            cout << "'1' To View Total Personnel\n";
            cout << "'2' To View Active Duty Personnel\n";
            cout << "'3' To View Injured Personnel\n";
            cout << "'4' To View Deceased Personnel\n";
            cout << "'5' To View Missing Personnel\n";
            cout << "'6' To View Captured Personnel\n";
            cout << "'7' To View Discharged Personnel\n";
            cout << "'8' To View Retired Personnel\n";
            cin >> input;
        }
    }
}