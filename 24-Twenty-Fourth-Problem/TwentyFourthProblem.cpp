#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arr_size){
    cout << "Enter number of elements: ";
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
int MaxNumberInArray(int Arr[100], int arr_size){
    int Max = 0;
    for(int i = 0; i < arr_size; i++){
        if(Arr[i] > Max){
            Max = Arr[i];
        }
    }
    return Max;
}
int main(){
    srand((unsigned)time(NULL));
    int Arr[100], arr_size;
    FillArrayWithRandomNumbers(Arr, arr_size);
    cout << "Array Elements: ";
    PrintArray(Arr, arr_size);
    cout << "Max number is : ";
    cout << MaxNumberInArray(Arr, arr_size);
    return 0;
}