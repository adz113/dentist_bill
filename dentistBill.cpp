// dentistBill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double isMember(double serviceCharge, double testCharge) {
    double total = serviceCharge + testCharge;
    return total;
}

double isNotMember(double serviceCharge, double testCharge, double medicineCharge) {
    double total = serviceCharge + testCharge + medicineCharge;
    return total;
}

int main()
{
    int member = 0;
    double serviceCharge = 0.0;
    double testCharge = 0.0;
    double medicineCharge = 0.0;
    double total = 0.0;
    cout << "Please input a one if you are a member of the dental plan\nInput any other number if you are not" << endl;
    cin >> member;

  
    if (member == 1) {
        cout << "Please input service charge: " << endl;
        cin >> serviceCharge;
        cout << "Please input the test charge: " << endl;
        cin >> testCharge;
        double total = isMember(serviceCharge, testCharge);
        cout << "The total bill is $" << total << endl;
    }
    else {
        cout << "Please input service charge: " << endl;
        cin >> serviceCharge;
        cout << "Please input the test charge: " << endl;
        cin >> testCharge;
        cout << "Please input the test charge: " << endl;
        cin >> medicineCharge;
        double total = isNotMember(serviceCharge, testCharge, medicineCharge);
        cout << "The total bill is $" << total << endl;
    }

}