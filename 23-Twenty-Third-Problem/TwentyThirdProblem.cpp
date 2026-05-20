// His Solution

#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arr_size){
    cout << "Enter Array size : ";
    cin >> arr_size;
    for(int i = 0; i < arr_size; i++){
        Arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Arr[100], int arr_size){
    for(int i = 0; i < arr_size; i++){
        cout << Arr[i] << " ";
    }
    cout << endl;
}
int main(){
    srand((unsigned)time(NULL));
    int Arr[100], arr_size;
    FillArrayWithRandomNumbers(Arr, arr_size);
    cout << "Array Elements: ";
    PrintArray(Arr, arr_size);
    return 0;
}


// My Solution

// #include <iostream>
// #include <cstdlib>
// using namespace std;
// short ReadPositiveNumber(string Message){
//     short Number = 0;
//     do {
//         cout << Message;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// int RandomNumber(int From, int To){
//     return rand() % (To - From + 1) + From;
// }
// void FillArrayWithRandomNumbers(int Arr[], short arr_size){
//     for(short i = 0; i< arr_size; i++){
//         Arr[i] = RandomNumber(1, 100);
//     }
// }
// void PrintArray(int Arr[], short arr_size){
//     for(int i = 0; i < arr_size; i++){
//         cout << Arr[i] << " ";
//     }
// }
// int main(){
//     srand((unsigned)time(NULL));
//     short arr_size = ReadPositiveNumber("Please, enter array size: ");
//     int Arr[arr_size];
//     FillArrayWithRandomNumbers(Arr, arr_size);
//     cout << "Array Elements: ";
//     PrintArray(Arr, arr_size);
//     return 0;
// }