#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Input your name :" << endl;
    cin >> name; // ユーザーの入力待ち。 >> は押し込めみたいなイメージ
    cout << name << ", hello!" << endl;
}