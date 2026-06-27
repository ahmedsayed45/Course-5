#include <iostream>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string Message){
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Arr[100], int arr_size){
    for (int i = 0; i < arr_size; i++){
        Arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Arr[100], int arr_size){
    for (int i = 0; i < arr_size; i++){
        cout << Arr[i] << " ";
    }
    cout << endl;
}
void FillArrayWithSumOfTwoArrays(int Arr_Destination[100], int Arr_Source1[100], int Arr_Source2[100], int arr_size){
    for (int i = 0; i < arr_size; i++){
        Arr_Destination[i] = Arr_Source1[i] + Arr_Source2[i];
    }
}
int main(){
    srand((unsigned)time(NULL));
    int Arr1[100], Arr2[100], Arr3[100], arr_size = ReadPositiveNumber("How many elements?\n");
    FillArrayWithRandomNumbers(Arr1, arr_size);
    FillArrayWithRandomNumbers(Arr2, arr_size);
    cout << "\n Array 1 elements:\n";
    PrintArray(Arr1, arr_size);
    cout << "\nArray 2 elements:\n";
    PrintArray(Arr2, arr_size);
    FillArrayWithSumOfTwoArrays(Arr3, Arr1, Arr2, arr_size);
    cout << "\nSum of array1 and array2 elements:\n";
    PrintArray(Arr3, arr_size);
    return 0;
}