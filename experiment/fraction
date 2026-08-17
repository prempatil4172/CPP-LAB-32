#include <iostream>
using namespace namespace std;

class Fraction 
{
private:
    int numerator, denominator;

public:
    Fraction(int n, int d) 
    {
        numerator = n;
        denominator = d;
    }

    Fraction add(const Fraction &f) 
    {
        return Fraction(numerator * f.denominator + denominator * f.numerator, denominator * f.denominator);
    }

    Fraction subtract(const Fraction &f) 
    {
        return Fraction(numerator * f.denominator - denominator * f.numerator, denominator * f.denominator);
    }

    void display() 
    {
        cout << numerator << "/" << denominator << endl;
    }
}; 

int main() 
{

    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction resultAdd = f1.add(f2);
    cout << "Addition result: ";
    resultAdd.display();

    Fraction resultSub = f1.subtract(f2);
    cout << "Subtraction result: ";
    resultSub.display();

    return 0;
}