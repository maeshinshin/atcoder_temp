#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <cmath>
#include <functional>
#include <string>
#include <stack>
#include <ctime>
#include <iomanip>
#include <queue>
#include <map>
#include <set>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iostream>
#include <vector>
#include <atcoder/all>
#include <algorithm>
using namespace std;
using namespace atcoder;
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vs = vector<string>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;

#define reps(i,a,n) for (ll i = (a);i<(ll)(n) ;i++)
#define rep(i,n) reps(i,0,n)
#define rep1(i,n) reps(i,1,n+1)
#define forv(x,vec) for(auto &i:a)

struct input{
    input(){};
    template<class T>operator T(){
        T t;
        cin >>t;
        return t;
    }
};

int main(){

}


