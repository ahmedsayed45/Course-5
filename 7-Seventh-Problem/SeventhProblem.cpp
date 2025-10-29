    // My Initial Solution

// #include <iostream>
// using namespace std;
// int ReadNumber(string Message){
//     int Number = 0;
//     cout << Message;
//     cin >> Number;
//     return Number;
// }
// void PrintReverseNumber(int Number){
//     cout << "Reverse is : ";
//     while (Number != 0){
//         cout << Number % 10;
//         Number /= 10;
//     }
// }
// int main(){
//     PrintReverseNumber(ReadNumber("Please, enter a number : "));
//     return 0;
// }


    // The Solution He Wanted

#include <iostream>
using namespace std;
int ReadNumber(string Message){
    int Number = 0;
    cout << Message;
    cin >> Number;
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
void PrintReverseNumber(int ReverseNumber){
    cout << "Reversed is : " << ReverseNumber << endl;
}
int main(){
    PrintReverseNumber(ReverseNumber(ReadNumber("Please, enter a number : ")));
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
// int ReverseNumber(int Number){
//     int Remainder = 0, Number2 = 0;
//     while (Number > 0){
//         Remainder = Number % 10;
//         Number = Number / 10;
//         Number2 = Number2 * 10 + Remainder;
//     }
//     return Number2;
// }
// int main(){
//     cout << "\nReverse is\n"
//         << ReverseNumber(ReadPositiveNumber("Please enter a positive number?"))
//         << "\n";
//     return 0;
// }