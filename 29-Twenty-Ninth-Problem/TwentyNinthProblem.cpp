// My 2 solutions

// #include <iostream>
// #include <cstdlib>
// using namespace std;
// bool CheckPrime(int Number){
//     for(int i = 2; i <= Number/2; i++){
//         if(Number % i == 0)
//             return false;
//     }
//     return true;
// }
// int RandomNumber(int From, int To){
//     return rand() % (To - From + 1) + From;
// }
// void FillArrayWithRandomNumbers(int Arr[100], int &arr_size){
//     cout << "Enter number of elements: ";
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
// void CopyArrayPrimeOnly(int ArrSource[100], int ArrDestination[100], int arr_sourse_size, int &arr_destination_size){
//     for(int i = 0; i < arr_sourse_size; i++){
//         if(CheckPrime(ArrSource[i])){
//             ArrDestination[arr_destination_size] = ArrSource[i];
//             arr_destination_size++;
//         }
//     }
// }
// int main(){
//     srand((unsigned)time(NULL));
//     int Arr1[100], arr1_size;
//     FillArrayWithRandomNumbers(Arr1, arr1_size);
//     cout << "Array 1 elements:\n";
//     PrintArray(Arr1, arr1_size);
//     int Arr2[100], arr2_size = 0;
//     CopyArrayPrimeOnly(Arr1, Arr2, arr1_size, arr2_size);
//     cout << "Prime Numbers in Array 2\n";
//     PrintArray(Arr2, arr2_size);
//     return 0;
// }

// Another solution

#include <iostream>
using namespace std;
enum enPrimeNotPrime {Prime = 1, NotPrime = 2};
enPrimeNotPrime CheckPrime(int Number){
	for(int i = 2; i <= Number / 2; i++){
		if(Number % i ==0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
int RandomNumber(int From, int To){
	return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arr_size){
	cout << "Enter number of elements : ";
	cin >> arr_size;
	for (int i = 0; i < arr_size; i++){
		Arr[i] = RandomNumber(1, 100);
	}
}
void CopyPrimeNumbers(int Arr_Source[100], int Arr_Destination[100], int arr_size, int &arr2_size){
	arr2_size = 0;
	for(int i = 0; i < arr_size; i++){
		if(CheckPrime(Arr_Source[i]) == enPrimeNotPrime::Prime){
			Arr_Destination[arr2_size] = Arr_Source[i];
			arr2_size++;
		}
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
	int Arr1[100], Arr2[100], arr1_size, arr2_size;
	FillArrayWithRandomNumbers(Arr1, arr1_size);
	cout << "Array 1 elements : \n";
	PrintArray(Arr1, arr1_size);
	CopyPrimeNumbers(Arr1, Arr2, arr1_size, arr2_size);
	cout << "Prime Numbers in Array2: \n";
	PrintArray(Arr2, arr2_size);
	return 0;
}


// His Solution

// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <cmath>
// using namespace std;
// enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
// enPrimNotPrime CheckPrime(int Number){
//     int M = round(Number / 2);
//     for (int Counter = 2; Counter <= M; Counter++){
//         if (Number % Counter == 0)
//         return enPrimNotPrime::NotPrime;
//     }
//     return enPrimNotPrime::Prime;;
// }
// int RandomNumber(int From, int To){
//     int RandNum = rand() % (To - From + 1) + From;
//     return RandNum;
// }
// void FillArrayWithRandomNumbers(int arr[100], int& arrLength){
//     cout << "Enter number of elements : \n";
//     cin >> arrLength;
//     for (int i = 0 ; i < arrLength; i++)
//     arr[i] = RandomNumber(1, 100);
// }
// void PrintArray(int arr[100], int arrLength){
//     for (int i = 0; i < arrLength; i++)
//     cout << arr[i] << " ";
//     cout << "\n";
// }
// void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length){
//     int Counter = 0;
//     for (int i = 0; i < arrLength; i++){
//         if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime){
//             arrDestination[Counter] = arrSource[i];
//             Counter++;
//         }
//     }
//     arr2Length = --Counter; // This line is a bug
// }
// int main(){
//     srand((unsigned)time(NULL));
//     int arr[100], arrLength;
//     FillArrayWithRandomNumbers(arr, arrLength);
//     int arr2[100] , arr2Length = 0;
//     CopyOnlyPrimeNumbers(arr, arr2, arrLength , arr2Length);
//     cout << "\nArray 1 Elements : \n";
//     PrintArray(arr, arrLength);
//     cout << "\nPrime Numbers in Array 2 : \n";
//     PrintArray(arr2, arr2Length);
//     return 0;
// }