// #include <iostream>
// using namespace std;
// string ReadText(string Message){
//     string Text = "";
//     cout << Message;
//     getline(cin, Text);
//     return Text;
// }
// void Encrypt(string &Text, short EncryptionKey){
//     for (int i = 0; i < Text.length(); i++){
//         Text[i] = char(int(Text[i]) + EncryptionKey);
//     }
// }
// void Decrypt(string &Text, short EncryptionKey){
//     for (int i = 0; i < Text.length(); i++){
//         Text[i] = char(int(Text[i]) - EncryptionKey);
//     }
// }
// int main(){
//     const short EncryptionKey = 2;
//     string Text = ReadText("Please, enter a text : ");
//     cout << "Text Before Encrytion: " << Text << endl;
//     Encrypt(Text, EncryptionKey);
//     cout << "Text After Encrytion: " << Text << endl;
//     Decrypt(Text, EncryptionKey);
//     cout << "Text After Decrytion: " << Text << endl;
//     return 0;
// }


    // Another Solution

#include <iostream>
using namespace std;
string ReadText(string Message){
    string Text = "";
    cout << Message;
    getline(cin, Text);
    return Text;
}
string EncryptText(string Text, short EncryptionKey){
    string EncryptedText = "";
    for (int i = 0; i < Text.length(); i++){
        EncryptedText += char((int)Text[i] + EncryptionKey);
    }
    return EncryptedText;
}
string DecryptText(string EncryptedText, short EncryptionKey){
    string DecryptedText = "";
    for (int i = 0; i < EncryptedText.length(); i++){
        DecryptedText += char((int)EncryptedText[i] - EncryptionKey);
    }
    return DecryptedText;
}
int main(){
    const short EncryptionKey = 2;
    string Text = ReadText("Please, enter the text : ");
    string EncryptedText = EncryptText(Text, EncryptionKey);
    string DecryptedText = DecryptText(EncryptedText, EncryptionKey);
    cout << "Text before encryption : " << Text << endl;
    cout << "Text after encryption : " << EncryptedText << endl;
    cout << "Text after decryption : " << DecryptedText << endl;
    return 0;
}