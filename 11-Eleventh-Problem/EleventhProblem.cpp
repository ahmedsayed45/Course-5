#include <iostream>
using namespace std;
int ReadNumber(string Message){
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}
int ReverseNumber(int Number){
    int ReversedNumber = 0;
    while (Number != 0){
        ReversedNumber = ReversedNumber * 10 + Number % 10;
        Number /= 10;
    }
    return ReversedNumber;
}
bool CheckPalindrome(int Number){
    return Number == ReverseNumber(Number);
}
void PrintResult(bool IsPalindrome){
    if (IsPalindrome){
        cout << "Yes, it is a Palindrome number." << endl;
    }
    else{
        cout << "No, it is Not a Palindrome number." << endl;
    }

}
int main(){
    PrintResult(CheckPalindrome(ReadNumber("Please, enter a number : ")));
    return 0;
}