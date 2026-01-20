#include <iostream>
#include <cstdlib>
using namespace std;
enum CharacterType {
    SmallLetter,
    CapitalLetter,
    SpecialCharacter,
    Digit
};
int RandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}
char GetRandomCharacterType(CharacterType type){
    switch (type){
        case CharacterType::SmallLetter:
            return char(RandomNumber(97, 122));
        case CharacterType::CapitalLetter:
            return char(RandomNumber(65, 90));
        case CharacterType::SpecialCharacter:
            return char(RandomNumber(33, 47));
        case CharacterType::Digit:
            return char(RandomNumber(48, 57)); // Or RandomNumber(0, 9)
        default:
            return '\0';
    }
}
int main(){
    srand((unsigned)time(NULL));
    cout << GetRandomCharacterType(CharacterType::SmallLetter) << endl;
    cout << GetRandomCharacterType(CharacterType::CapitalLetter) << endl;
    cout << GetRandomCharacterType(CharacterType::SpecialCharacter) << endl;
    cout << GetRandomCharacterType(CharacterType::Digit) << endl;
    return 0;
}