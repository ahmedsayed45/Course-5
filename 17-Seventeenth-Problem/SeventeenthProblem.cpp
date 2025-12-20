#include <iostream>
using namespace std;
string ReadPassword(string Message){
    string Password;
    cout << Message << endl;
    cin >> Password;
    return Password;
}
bool GuessPassword(string Password){
    int attempts = 0;
    for (int i = 65; i <= 90; i++){
        for (int j = 65; j <= 90; j++){
            for (int k = 65; k <= 90; k++){
                attempts++;
                string Attempt = "";
                Attempt += char(i);
                Attempt += char(j);
                Attempt += char(k);
                cout << "Trial [" << attempts << "]: " << Attempt << endl;
                if (Attempt == Password){
                    cout << "\nPassword is " << Attempt << endl;
                    cout << "Found after " << attempts << " Trial(s)." << endl;
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    GuessPassword(ReadPassword("Please enter a 3-Letter Password (all capital)?"));
    return 0;
}