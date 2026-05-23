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
int SumOfArray(int Arr[100], int arr_size){
    int Sum = 0;
    for(int i = 0; i < arr_size; i++){
        Sum += Arr[i];
    }
    return Sum;
}
int main(){
    srand((unsigned)time(NULL));
    int Arr[100], arr_size;
    FillArrayWithRandomNumbers(Arr, arr_size);
    cout << "Array Elements: ";
    PrintArray(Arr, arr_size);
    cout << "Sum of all numbers is : ";
    cout << SumOfArray(Arr, arr_size);
    return 0;
}