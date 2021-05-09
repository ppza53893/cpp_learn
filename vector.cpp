//hito_sample6.cpp
#include <iostream>
#include <vector>
using namespace std;

//n : 要素数

//1次元
// vector<Type> v;
// vector<Type> v();
// vector<Type> v(n);
// vector<Type> v(n, d);
vector<int> onedimarray;

//2次元
// vector<vector<Type>> vv;
// vector<vector<Type>> vv();
// vector<vector<Type>> vv(n);
// vector<vector<Type>> vv(n, vector<Type>(m));
// vector<vector<Type>> vv(n, vector<Type>(m, d));
vector<vector<int>> twodimarray;
vector<vector<int>> twodimarray_withhw(3, vector<int>(2,3));

//3次元
// vector<vector<vector<Type>>> vvv;
// vector<vector<vector<Type>>> vvv();
// vector<vector<vector<Type>>> vvv(n, vector<vector<Type>>(m, vector<Type>(l)));
// vector<vector<vector<Type>>> vvv(n, vector<vector<Type>>(m, vector<Type>(l, d)));
vector<vector<vector<int>>> treeedimarray;
vector<vector<vector<int>>> threedimarray_withhw(3, vector<vector<int>>(4, vector<int>(2,3)));