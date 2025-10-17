#include <iostream>
using namespace std;
 
class Fraction
{
    private:
    int numerator;
    int denominator;
    public:

    Fraction() 
    {
        cout << "Constructor by default: ";
        numerator = 1;
        denominator = 2;
    }

    Fraction(int n, int d) 
    {
        numerator = n;
        denominator = d;
        cout << "Contstructor by 2 paras: ";
    }

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

ostream& operator<<(ostream& os, Fraction& obj)
{
    os << "Numerator: " << obj.GetNum() << "Detominator: " << obj.GetDen() << endl;
    return os;
}

istream& operator>>(istream& is, Fraction obj)
{
    int temp;
    is >> temp;
    obj.SetNum(temp);
    is >> temp;
    obj.SetDen(temp);
    return is;
}

int main()
{
    Fraction frac;
    cout << frac << endl;
    cin >> frac;

    // int Num;
    // int Den;

    // frac.Init();
    // cout << "Your fraction is = ";
    // frac.Print();


    // cout << "Enter your new numerator: ";
    // cin >> Num;
    // frac.SetNum(Num);
    // cout << "Enter your new denominator: ";
    // cin >> Den;
    // frac.SetDen(Den);
    // cout << "Your new fraction is = ";
    // frac.Print();

    // Fraction newFrac(15, 20);
    // newFrac.Print();

    // cout << "\n";

    // int n = frac.GetNum();
    // cout << n << endl;

    // int d = frac.GetNum();
    // cout << d << endl;


}