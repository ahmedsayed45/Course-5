#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message){
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Freq = 0;
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder)
        {
            Freq++;
        }
    }
    return Freq;
}
void PrintAllDigitsFrequency(int Number){
    cout << endl;
    for (int i = 0; i < 10; i++){
        short DigitFrequency = 0;   // Each iteration has its own separate scope. So don't worry about re-initialization.
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
            cout << "Digit " << i << " Frequency is "
             << DigitFrequency << " Time(s)." << endl;
    }
}
int main(){
    int Number = ReadPositiveNumber("Please enter a number : ");
    PrintAllDigitsFrequency(Number);
    return 0;
}