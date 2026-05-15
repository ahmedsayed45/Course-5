// My 3 Solutions

// #include <iostream>
// using namespace std;
// int ReadNumber(string Message){
//     int Number = 0;
//     cout << Message;
//     cin >> Number;
//     return Number;
// }
// int ReadPositiveNumber(string Message){
//     int Number = 0;
//     do {
//         cout << Message;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// void ReadArrayElements(int Arr[], short sizeofarray){
//     cout << "Enter array elements : " << endl;
//     for (int i = 0; i < sizeofarray; i++){
//         // Arr[i] = ReadNumber("Element [" + to_string(i + 1) + "] : ");
//         cout << "Element [" << i + 1 << "] : ";
//         cin >> Arr[i];
//     }
// }
// short RepetitionTimes(int Arr[], short sizeofarray, int NumberToCheck){
//     short RepetitionTimes = 0;
//     for (int i = 0; i < sizeofarray; i++){
//         if (Arr[i] == NumberToCheck)
//             RepetitionTimes++;
//     }
//     return RepetitionTimes;
// }
// void CheckNumber(int Arr[], short sizeofarray, int NumberToCheck){
//     cout << "Original Array : ";
//     for (int i = 0; i < sizeofarray; i++){
//         cout << Arr[i] << " ";
//     }
//     cout << endl;
//     cout << NumberToCheck << " is repeated " << RepetitionTimes(Arr, sizeofarray, NumberToCheck) << " time(s)." << endl;
// }
// int main(){
//     int Arr[ReadPositiveNumber("Enter the size of the array : ")];
//     short sizeofarray = sizeof(Arr) / 4;
//     ReadArrayElements(Arr, sizeofarray);
//     int NumberToCheck = ReadNumber("Eneter the Number you want to check : ");
//     CheckNumber(Arr, sizeofarray, NumberToCheck);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int ReadPositiveNumber(string Message){
//     int Number = 0;
//     do {
//         cout << Message;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// int ReadNumber(string Message){
//     int Number = 0;
//     cout << Message;
//     cin >> Number;
//     return Number;
// }
// void ReadArray(int Arr[], short Arr_size){
//     for (int i = 0; i < Arr_size; i++){
//         Arr[i] = ReadNumber("Element [" + to_string(i+1) + "] : ");
//     }
// }
// void CalculateNumber(int Arr[], short Arr_size, int NumberToCheck){
//     int NumberOfRepetition = 0;
//     cout << "Original Array : ";
//     for (int i = 0; i < Arr_size; i++){
//         cout << Arr[i] << " ";
//         if (Arr[i] == NumberToCheck)
//             NumberOfRepetition++;
//     }
//     cout << endl << NumberToCheck << " is repeated " << NumberOfRepetition << " time(s)" << endl;
// }
// int main(){
//     short Arr_size = ReadPositiveNumber("Please, enter array size : ");
//     int Arr[Arr_size];
//     ReadArray(Arr, Arr_size);
//     int NumberToCheck = ReadNumber("Enter the number you want to check : ");
//     CalculateNumber(Arr, Arr_size, NumberToCheck);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// short ReadPositiveNumber(string Message){
//         short Number = 0;
//         do{
//                 cout << Message;
//                 cin >> Number;
//         } while (Number <= 0);
//         return Number;
// }
// int ReadNumber(string Message){
//         int Number = 0;
//         cout << Message;
//         cin >> Number;
//         return Number;
// }
// void ReadArray(int Arr[], short Arr_size){
//         for(int i = 0; i < Arr_size; i++){
//                 Arr[i] = ReadNumber("Element [" + to_string(i+1) + "] : ");
//         }
// }
// void PrintArray(int Arr[], short Arr_size){
//         cout << "Original Array : ";
//         for(int i = 0; i < Arr_size; i++){
//                 cout << Arr[i] << " ";
//         }
//         cout << endl;
// }
// short CalculateRepetition(int Arr[], short Arr_size, int NumberToCheck){
//         short F = 0;
//         for(int i = 0; i < Arr_size; i++){
//                 if(Arr[i] == NumberToCheck)
//                         F++;
//         }
//         return F;
// }
// void PrintRepetition(int NumberToCheck, short F){
//         cout << NumberToCheck << " is repeated " << F << " time(s)." << endl;
// }
// int main(){
//         short Arr_size = ReadPositiveNumber("Please, enter the array size : ");
//         int Arr[Arr_size];
//         ReadArray(Arr, Arr_size);
//         int NumberToCheck = ReadNumber("Enter the number you want to check : ");
//         short F = CalculateRepetition(Arr, Arr_size, NumberToCheck);
//         PrintArray(Arr, Arr_size);
//         PrintRepetition(NumberToCheck, F);
//         return 0;
// }



// His Solution

#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message){
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <=0);
    return Number;
}
void ReadArray(int arr[100], int &arrLength){
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++){
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}
void PrintArray(int arr[100], int arrLength){
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int TimesRepeated(int NumberToCheck, int arr[100], int arrLength){
    int count = 0;
    for (int i = 0; i <= arrLength - 1; i++){
        if (NumberToCheck == arr[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[100], arrLength, NumberToCheck;
    ReadArray(arr, arrLength);
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";
    return 0;
}