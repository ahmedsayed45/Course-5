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
bool IsPerfectNumber(int Number){
    int Sum = 0;
    for (int i = 1; i <= Number / 2; i++){
        if (Number % i == 0)
            Sum += i;
    }
    return Number == Sum;
}
void PrintPerfectNumbersFrom1toN(int Number){
    cout << "The perfect numbers from 1 to " << Number << " are : " << endl;
    for (int i = 1; i <= Number; i++){
        if (IsPerfectNumber(i))
            cout << i << endl;
    }
}
int main(){
    PrintPerfectNumbersFrom1toN(ReadPositiveNumber("Please, enter a positive number : "));
    return 0;
}