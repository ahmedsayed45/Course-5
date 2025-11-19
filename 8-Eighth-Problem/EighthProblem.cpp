    // My First Solution
    
#include <iostream>
using namespace std;
int ReadNumber(string Message){
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}
int CalculateDigitFrequency(int Digit, int Number){
    int F = 0;
    while (Number != 0){
        if (Digit == Number % 10)
            F++;
        Number /= 10;
    }
    return F;
}
void PrintDigitFrequency(int Digit, int Number){
    cout << "The digit " << Digit << " frequency is " << CalculateDigitFrequency(Digit, Number) << " time(s)." << endl;
}
int main(){
    PrintDigitFrequency(ReadNumber("Please, enter the digit you want to calculate its frequency : "), ReadNumber("Please, enter a number : "));
    return 0;
}


    // My Solution using Structures

// #include <iostream>
// using namespace std;
// struct strDigitFrequency{
//     int Number;
//     short Digit;
// };
// int ReadNumber(string Message){
//     int Number = 0;
//     cout << Message;
//     cin >> Number;
//     return Number;
// }
// strDigitFrequency ReadDigitAndNumber(){
//     strDigitFrequency DF;
//     DF.Number = ReadNumber("Please, enter a number : ");
//     DF.Digit = ReadNumber("Please, enter the digit you want to calculate its frequency : ");
//     return DF;
// }
// int CalculateDigitFrequency(strDigitFrequency DF){
//     int DigitFrequency = 0;
//     while (DF.Number != 0){
//         if (DF.Digit == DF.Number % 10)
//             DigitFrequency++;
//         DF.Number /= 10;
//     }
//     return DigitFrequency;
// }
// void PrintDigitFrequency(strDigitFrequency DF){
//     cout << "Digit " << DF.Digit << " frequency is : " << CalculateDigitFrequency(DF) << " time(s)." << endl;
// }
// int main(){
//     PrintDigitFrequency(ReadDigitAndNumber());
//     return 0;
// }


    // His Solution

// #include <iostream>
// using namespace std;
// int ReadPositiveNumber(string Message){
//     int Number = 0;
//     do {
//         cout << Message << endl;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// int CountDigitFrequency(short DigitToCheck, int Number){
//     int FreqCount = 0, Remainder = 0;
//     while(Number > 0){
//         Remainder = Number % 10;
//         Number /= 10;
//         if (DigitToCheck == Remainder)
//             FreqCount++;
//     }
//     return FreqCount;
// }
// int main(){
//     int Number = ReadPositiveNumber("Please enter the main number?");
//     short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");
//     cout << "\nDigit " << DigitToCheck << " Frequency is "
//      << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
//      return 0;
// }