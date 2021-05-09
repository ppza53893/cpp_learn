#include <iostream>
#include <string>
using namespace std;

//case 1
class Neko
{
private:    //外部アクセスはできない
            //ちなみに、privateと宣言しなくても、publicの上はprivateになる
    string name;
public: //外部アクセスできる
    Neko(string s){ //コンストラクタ
        // クラスメイト同様の関数はコンストラクタと呼ばれる
        name = s;
    }
    void naku() const{ //constをつけることでデータを変えないと宣言できる
        cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
    }
};

//case 2
class Inu
{
    string name;
public:
    Inu(string);   //「Inu(string s);」のsを省略した
    void naku() const; //割愛
};

// ふつうはこういう風に書く(?)
Inu::Inu(string s) : name(s){}

void Inu::naku() const{ //ここで宣言!
    cout<<"わん。僕は"<<name<<"だ。"<<endl;
}


int main()
{
    Neko dora("ボス"); //Pythonでいうdora = Neko("ボス")みたいなもの
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"猫が鳴きます。"<<endl;

    dora.naku();

    Inu dog("チョビ"); 
    cout<<"あなたの名づけた犬がメモリ上に生成されました。"<<endl;
    cout<<"犬が鳴きます。"<<endl;

    dog.naku();
}