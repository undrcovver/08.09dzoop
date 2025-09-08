#include <iostream>
using namespace std;
 
class Fraction
{
    private:
    int numerator;
    int denominator;
    public:
    void Init()
    {
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;
        if(denominator <= 0)
        {
            cout << "Detominator cannot be 0. Denominator automaticly set to 1";
            denominator = 1;
        }
    }
    void Print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    void SetNum(int Num)
    {
        numerator = Num;
    }
    int GetNum()
    {
        return numerator;
    }

    void SetDen(int Den)
    {
        if(Den <= 0)
        {
            cout << "Detominator cannot be 0. Denominator automaticly set to 1";
            Den = 1;
        }
        denominator = Den;
    }
    int GetDen()
    {
        return numerator;
    }


};

int main()
{
    Fraction frac;

    int Num;
    int Den;

    frac.Init();
    cout << "Your fraction is = ";
    frac.Print();


    cout << "Enter your new numerator: ";
    cin >> Num;
    frac.SetNum(Num);
    cout << "Enter your new denominator: ";
    cin >> Den;
    frac.SetDen(Den);
    cout << "Your new fraction is = ";
    frac.Print();

    cout << "\n";

    int n = frac.GetNum();
    cout << n << endl;

    int d = frac.GetNum();
    cout << d << endl;

}