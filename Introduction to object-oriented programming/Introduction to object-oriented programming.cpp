#include <iostream>
using namespace std;

class drib {
private:
    double numerator;
    double denominator;
public:
    void Enternumerator() {
        double num;
        cout << "Enter your numerator : ";
        cin >> num;
        this->numerator = num;
    }
    void Enterdenumerator() {
        double denum;
        cout << "Enter your denumerator : ";
        cin >> denum;
        this->denominator = denum;
    }
    double Getnumerator() {
        return this->numerator;
    }
    double Getdenumerator() {
        return this->denominator;
    }
    double Returntoint() {
        return numerator / denominator;
    }
};


int main()
{
    drib drib1;
    drib1.Enternumerator();
    drib1.Enterdenumerator();
    drib drib2;
    drib2.Enternumerator();
    drib2.Enterdenumerator();
    cout << drib1.Returntoint()+drib2.Returntoint();
}