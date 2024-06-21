#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

int main()
{
    cout << "\033c";
    // char ch;
    // cout << "输入: ";
    // cin >> ch;
    // cout << "ch = " << ch << endl;

    // int n;
    // cout << "输入: ";
    // cin >> n;
    // cout << "n = " << n << endl;

    // double x;
    // cout << "输入: ";
    // cin >> x;
    // cout << "x = " << x << endl;

    // char ch[20];
    // cout << "输入:";
    // cin >> ch;
    // cout << "ch = " << ch << endl;

    // char ch[20];
    // cout << "输入:";
    // cin.getline(ch, 20);
    // cout << "ch = " << ch << endl;

    char ch[20];
    int n;
    double x;
    cout << "输入一个字符：";
    cin >> ch;
    cout << "输入一个整数：";
    cin >> n;
    cout << "输入一个浮点数：";
    cin >> x;

    cout << "ch[20] = " << ch << endl;
    cout << "n = " << n << endl;
    cout << "x = " << x << endl;

    return 0;
}