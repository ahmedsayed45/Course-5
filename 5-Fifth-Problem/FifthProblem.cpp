    // My Two Solutions

        // integer solution

#include <iostream>
using namespace std;
int ReadNumber(string Message){
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}
void PrintResult(int Number){
    while (Number != 0){
        cout << Number % 10 << endl; 
        Number /= 10;
    }
}
int main(){
    PrintResult(ReadNumber("Please, enter a number : "));
    return 0;
}


        // string solution

// #include <iostream>
// using namespace std;
// string ReadNumber(string Message){
//     string Number = "";
//     cout << Message;
//     cin >> Number;
//     return Number;
// }
// void PrintResult(string Number){
//     for (int i = Number.length() - 1; i >= 0; i--){
//         cout << Number[i] << endl;
//     }
// }
// int main(){
//     PrintResult(ReadNumber("Please, enter a number : "));
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
//     } while(Number <= 0);
//     return Number;
// }
// void PrintDigits(int Number){
//     int Remainder = 0;
//     while (Number > 0){
//         Remainder = Number % 10;
//         Number = Number / 10;
//         cout << Remainder << endl;
//     }
// }
// int main(){
//     PrintDigits(ReadPositiveNumber("Please enter a positive number?"));
//     return 0;
// }