#include <iostream>
using namespace std;
void PrintTableHeader(){
    cout << "\t\t\tMultiplication Table (1 to 10)\n\n";
    for (int i = 1; i <= 10; i++){
        cout << "\t" << i;
    }
    cout << "\n____________________________________________________________________________________\n";
}
string ColumnSeparator(int i){
    if (i < 10){
        return "     | ";
    }
    else{
        return "    | ";
    }
}
void PrintMultiplicationTable(){
    PrintTableHeader();
    for (int i = 1; i <= 10;i ++){
        cout << i << ColumnSeparator(i);
        for (int j = 1; j <= 10; j++){
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
int main(){
    PrintMultiplicationTable();
    return 0;
}