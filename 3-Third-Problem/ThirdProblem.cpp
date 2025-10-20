    // His Solution

#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message){
    int Number = 0;
    do{
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
bool isPerfectNumber(int Number){
    int Sum = 0;
    for (int i = 1; i < Number; i++){
        if (Number % i == 0){
            Sum += i;
        }
    }
    return Sum == Number;
}
void PrintResults(int Number){
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";
    else
        cout << Number << " Is NOT Perfect Number.\n";
}
int main(){
    PrintResults(ReadPositiveNumber("Please enter a positive number?"));
    return 0;
}



    // My Soultion

// #include <iostream>
// using namespace std;
// int ReadPositiveNumber(){
//     int number = 0;
//     do{
//         cout << "Please enter a positive number : ";
//         cin >> number;
//     } while(number <= 0);
//     return number;
// }
// int CalculateSum(int Num){
//     int Sum = 0;
//     for (int i = 1; i <= Num / 2; i++){
//         if (Num % i == 0){
//             Sum += i;
//         }
//     }
//     return Sum;
// }
// void PrintResult(int Num){
//     if (CalculateSum(Num) == Num)
//         cout << Num << " is a perfect number." << endl;
//     else
//         cout << Num << " is not a perfect number." << endl;
// }
// int main(){
//     int Num = ReadPositiveNumber();
//     PrintResult(Num);
//     return 0;
// }