#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1, str2, str_1, str_2;
    
    cin >> str1;
    cin >> str2;
    
    str_1 = str1;
    str_2 = str2;
    
    cout << str1.size() << " " << str2.size() << "\n";
    cout << str1+str2 << "\n";
    
    str_1[0] = str2[0];
    str_2[0] = str1[0];
    for(int i=0; i<str_1.size(); i++){
        cout << str_1[i];
    }
    
    cout << " ";
    
     for(int i=0; i<str_2.size(); i++){
        cout << str_2[i];
    }
    cout << "\n";
    
    return 0;
}