#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;


int main(){
    cout << "\033c";
    
    // 输入 38.5 19.2
    // char ch;     // 输出3
    // int ch;      // 输出38
    // double ch;   // 输出38.5
    // char ch[50]; // 输出38.5 遇到空白字符停止

    // cin >> ch;

    char word[50];
    cin.getline(word, 50); //输出38.5 19.2，遇到换行符停止，换行符被丢弃

    cout << word << endl;

    return 0;
}