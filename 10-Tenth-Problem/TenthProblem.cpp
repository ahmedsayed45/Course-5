    // My Solution

// #include <iostream>
// using namespace std;
// int ReadNumber(string Message){
//     int Number = 0;
//     cout << Message;
//     cin >> Number;
//     return Number;
// }
// int ReverseNumber(int Number){
//     int Reversed = 0;
//     while (Number != 0){
//         Reversed = Reversed * 10 + Number % 10;
//         Number /= 10;
//     }
//     return Reversed;
// }
// void PrintResult(int Number){
//     cout << "The number is : ";
//     while (Number != 0){
//         cout << Number % 10;
//         Number /= 10;
//     }
// }
// int main(){
//     PrintResult(ReverseNumber(ReadNumber("Please, enter a number : ")));
//     return 0;
// }


    // His Solution

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
int ReverseNumber(int Number){
    int Reversed = 0;
    while (Number != 0){
        Reversed = Reversed * 10 + Number % 10;
        Number /= 10;
    }
    return Reversed;
}
void PrintDigits(int Number){
    while (Number != 0){
        cout << Number % 10 << endl;
        Number /= 10;
    }
}
int main(){
    PrintDigits(ReverseNumber(ReadPositiveNumber("Please, enter a number : ")));
    return 0;
}