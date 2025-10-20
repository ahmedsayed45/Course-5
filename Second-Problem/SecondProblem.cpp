    // My Solution

#include <iostream>
using namespace std;
enum PrimeStatus { Prime, NotPrime };
int ReadPositiveNumber(){
    int Number = 0;
    do {
        cout << "Please, enter a positive number : ";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
PrimeStatus IsPrime(int Num){
    for (int i = 2; i <= Num / 2; i++){
        if (Num % i == 0)
            return PrimeStatus::NotPrime;
    }
    return PrimeStatus::Prime;
}
void PrintPrimeNumbers(int Num){
    for (int i = 1; i <= Num; i++){
        if (IsPrime(i) == PrimeStatus::Prime)
            cout << i << endl;
    }
}
int main(){
    int Num = ReadPositiveNumber();
    PrintPrimeNumbers(Num);
    return 0;
}


    // His Solution

// #include <iostream>
// using namespace std;
// enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
// int ReadPositiveNumber(string Message){
//     int Number = 0;
//     do {
//         cout << Message;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// enPrimeNotPrime IsPrime(int Num){
//     int M = Num / 2;
//     for (int Counter = 2; Counter <= M; Counter++){
//         if (Num % Counter == 0)
//             return enPrimeNotPrime::NotPrime;
//     }
//     return enPrimeNotPrime::Prime;
// }
// void PrintPrimeNumbers(int Num){
//     cout << "\nPrime numbers from 1 to " << Num << " are : " << endl;
//     for (int i = 1; i <= Num; i++){
//         if (IsPrime(i) == enPrimeNotPrime::Prime)
//             cout << i << endl;
//     }
// }
// int main(){
//     PrintPrimeNumbers(ReadPositiveNumber("Please, enter a positive number : "));
//     return 0;
// }


    // Initial Solution

// #include <iostream>
// using namespace std;
// int ReadPositiveNumber(){
//     int Number = 0;
//     do {
//         cout << "Please, enter a positive number :";
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// bool IsPrime(int Num){ // أظن ممكن استخدم ال continue جوا ال for خلاص انسي
//     for (int i = 2; i <= Num / 2; i++){
//         if (Num % i == 0)
//             return false;
//     }
//     return true;
// }
// void PrintPrimeNumbers(int Num){
//     for (int i = 1; i <= Num; i++){
//         if (IsPrime(i))
//             cout << i << endl;
//     }
// }
// int main(){
//     int Num = ReadPositiveNumber();
//     PrintPrimeNumbers(Num);
//     return 0;
// }


    // Simple Check Prime Function (Basic logic)

// #include <iostream>
// using namespace std;
// string CheckPrime(int number){
//     for (int i = 2; i <= number / 2; i++){
//         if (number % i == 0)
//             return "not prime";
//     }
//     return "prime";
// }
// int main(){
//     int num = 0;
//     cout << "Please, enter a positive number : ";
//     cin >> num;
//     cout << "It is a " << CheckPrime(num) << " number." << endl;
//     return 0;
// }