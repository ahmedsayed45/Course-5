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
void PrintInvertedLetterPattern(int Number){
    for (int i = Number + 64; i >= 65; i--){
        for (int j = 65; j <= i; j++){
            cout << char(i);
        }
        cout << endl;
    }
}
int main() {
    PrintInvertedLetterPattern(ReadPositiveNumber("Please, enter a positive number : "));
    return 0;
}