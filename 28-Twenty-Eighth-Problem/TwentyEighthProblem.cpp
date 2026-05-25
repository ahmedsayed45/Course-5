#include <iostream>
#include <iostream>
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
void CopyArray(int ArrSource[100], int ArrDestination[100], int arr_size){
    for(int i = 0; i < arr_size; i++){
        ArrDestination[i] = ArrSource[i];
    }
}
int main(){
    srand((unsigned)time(NULL));
    int Arr1[100], Arr2[100], arr_size;
    FillArrayWithRandomNumbers(Arr1, arr_size);
    cout << "Array 1 elements:\n";
    PrintArray(Arr1, arr_size);
    CopyArray(Arr1, Arr2, arr_size);
    cout << "Array 2 elements after copy:\n";
    PrintArray(Arr2, arr_size);
    return 0;
}