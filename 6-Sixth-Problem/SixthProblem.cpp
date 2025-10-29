    // My Solution

#include <iostream>
using namespace std;
int ReadNumber(string Message){
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}
int CalculateSumOfDigits(int Number){
    int Sum = 0;
    while (Number != 0){
        Sum += Number % 10;
        Number /= 10;
    }
    return Sum;
}
void PrintSumOfDigits(int Sum){
    cout << "The sum of the digits is : " << Sum << endl;
}
int main(){
    PrintSumOfDigits(CalculateSumOfDigits(ReadNumber("Please enter a number: ")));
    return 0;
}


    // His Solution

// #include <iostream>
// #include <string>
// using namespace std;
// int ReadPositiveNumber(string Message){
//     int Number = 0;
//     do {
//         cout << Message << endl;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// int SumOfDigits(int Number){
//     int Sum = 0, Remainder = 0;
//     while (Number > 0){
//         Remainder = Number % 10;
//         Number = Number / 10;
//         Sum = Sum + Remainder;
//     }
//     return Sum;
// }
// int main(){
//     cout << "\nSum Of Digits = "
//         << SumOfDigits(ReadPositiveNumber("Please enter a positive number?"))
//         << "\n";
//     return 0;
// }