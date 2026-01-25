// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int ReadPositiveNumber(string Message){
//     int Number;
//     do {
//         cout << Message;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }
// int RandomNumber(int From, int To){
//     return rand() % (To - From + 1) + From;
// }
// string GenerateKey(){
//     string Key = "";
//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 4; j++){
//             Key += char(RandomNumber(65, 90));
//         }
//         if (i != 3)
//             Key += "-";
//     }
//     return Key;
// }
// void GenerateMultipleKeys(int NumberOfKeys){
//     for (int i = 0; i < NumberOfKeys; i++){
//         cout << "Key [" << i + 1 << "] : " << GenerateKey() << endl;
//     }
// }
// int main(){
//     srand((unsigned)time(NULL));
//     int NumberOfKeys = ReadPositiveNumber("Please, enter Number of Keys: ");
//     GenerateMultipleKeys(NumberOfKeys);
//     return 0;
// }

    
    // Another Solution

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
enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
char GetRandomCharacter(enCharType CharType){
    switch (CharType){
        case SmallLetter:
            return char(RandomNumber(97, 122));
        case CapitalLetter:
            return char(RandomNumber(65, 90));
        case SpecialCharacter:
            return char(RandomNumber(33, 47));
        case Digit:
            return char(RandomNumber(48, 57));
        default :
            return '\0';
    }
}
string GenerateWord(enCharType CharType, int Length){
    string Word = "";
    for (int i = 0; i < Length; i++){
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}
string GenerateKey(){
    string Key = "";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}
void GenerateKeys(int NumberOfKeys){
    for (int i = 0; i < NumberOfKeys; i++){
        cout << "Key [" << i + 1 << "] : " << GenerateKey() << endl;
    }
}
int main(){
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumber("Please, enter Number of Keys : "));
    return 0;
}