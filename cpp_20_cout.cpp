#include <iostream>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string); 
    void naku() const;
};

Neko::Neko(string s) : name(s){}

void Neko::naku() const{
    cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
}


void _main(void)
{
    int x = 3;
    cout << "xの値は" << x << endl;
    cout << "xのアドレスは" << &x << endl;
}

int main()
{
    Neko dora("ボス");
    //Nekoのインスタンスを指し示すポインタpcat
    Neko* pcat;

    pcat = &dora;
    dora.naku();
    pcat->naku();
}