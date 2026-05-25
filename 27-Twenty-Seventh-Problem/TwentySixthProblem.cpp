// My Solution

// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int RandomNumber(int From, int To){
//     return rand() % (To - From + 1) + From;
// }
// void FillArrayWithRandomNumbers(int Arr[100], int &arr_size){
//     cout << "Enter number of elements : ";
//     cin >> arr_size;
//     for(int i = 0; i < arr_size; i++){
//         Arr[i] = RandomNumber(1, 100);
//     }
// }
// void PrintArray(int Arr[100], int arr_size){
//     for(int i = 0; i < arr_size; i++){
//         cout << Arr[i] << " ";
//     }
//     cout << endl;
// }
// float AverageArray(int Arr[100], int arr_size){
//     int Sum = 0;
//     for(int i = 0; i < arr_size; i++){
//         Sum += Arr[i];
//     }
//     return (float)Sum / arr_size;
// }

// // int SumArray(int Arr[100], int arr_size){
// //     int Sum = 0;
// //     for(int i = 0; i < arr_size; i++){
// //         Sum += Arr[i];
// //     }
// //     return Sum;
// // }
// // float AverageArray(int Sum, int arr_size){
// //     return (float)Sum / arr_size;
// // }

// int main(){
//     srand((unsigned)time(NULL));
//     int Arr[100], arr_size;
//     FillArrayWithRandomNumbers(Arr, arr_size);
//     cout << "Array Elements: ";
//     PrintArray(Arr, arr_size);
//     cout << "Average of all numbers is : ";
//     cout << AverageArray(Arr, arr_size);

//     // cout << AverageArray(SumArray(Arr, arr_size), arr_size);

//     return 0;
// }


// His Solution

#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arr_size){
    cout << "Enter number of elements : ";
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
int SumArray(int Arr[100], int arr_size){
    int Sum = 0;
    for(int i = 0; i < arr_size; i++){
        Sum += Arr[i];
    }
    return Sum;
}
float AverageArray(int Arr[100], int arr_size){
    return (float)SumArray(Arr, arr_size) / arr_size;
}

int main(){
    srand((unsigned)time(NULL));
    int Arr[100], arr_size;
    FillArrayWithRandomNumbers(Arr, arr_size);
    cout << "Array Elements: ";
    PrintArray(Arr, arr_size);
    cout << "Average of all numbers is : ";
    cout << AverageArray(Arr, arr_size);
    return 0;
}