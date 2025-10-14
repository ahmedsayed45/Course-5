#include <iostream>
using namespace std;
void PrintMultiplicationTable(){
    cout << "\t\t\t\tMultiplication Table (1 to 10)\n\n";
    for (int i = 1; i <= 10; i++){
        cout << "\t\t" << i;
    }
    cout << "____________________________________________________________\n";
    for (int i = 1; i <= 10;i ++){
        cout << i << "\t" << "| ";
        for (int j = 1; j <= 10; j++){
            cout << i * j << "\t\t";
        }
    }
}
int main(){
    PrintMultiplicationTable();
    return 0;
}