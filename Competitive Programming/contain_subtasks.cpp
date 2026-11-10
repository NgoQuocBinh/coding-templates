#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

using namespace std;

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define hashmap unordered_map
#define hashset unordered_set
#define pb push_back
#define ff first
#define ss second
#define en "\n"

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const ll linf = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;

void __print(int x) { cerr << x; }
void __print(ll x) { cerr << x; }
void __print(ull x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(ld x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const string &x) { cerr << '"' << x << '"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

#ifdef LOCAL
#define debug(...) \
{ \
        cerr << "[" << #__VA_ARGS__ << "] = ["; \
        _print(__VA_ARGS__); \
}
#else
#define debug(...)
#endif

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

ll rnd(ll l, ll r)
{
        return uniform_int_distribution<ll>(l, r)(rng);
}

template<typename T, typename V>
void __print(const pair<T, V> &x);

template<typename T>
void __print(const T &x);

template<typename T, size_t N>
void __print(const array<T, N> &x);

template<typename... T>
void __print(const tuple<T...> &x);

template<class T>
bool maximize(T &a, const T &b)
{
        if(a < b)
        {
                a = b;

                return true;
        }

        return false;
}

template<class T>
bool minimize(T &a, const T &b)
{
        if(a > b)
        {
                a = b;

                return true;
        }

        return false;
}

template<typename T, typename V>
void __print(const pair<T, V> &x)
{
        cerr << '{';
        __print(x.ff);
        cerr << ", ";
        __print(x.ss);
        cerr << '}';
}

template<typename T>
void __print(const T &x)
{
        int f = 0;
        cerr << '{';
        for(auto &i : x) cerr << (f++ ? ", " : ""), __print(i);
        cerr << "}";
}

template<typename T, size_t N>
void __print(const array<T, N> &x)
{
        cerr << '{';
        int f = 0;
        for(auto &i : x) cerr << (f++ ? ", " : ""), __print(i);
        cerr << '}';
}

template<typename... T>
void __print(const tuple<T...> &x)
{
        cerr << '(';
        apply([&](const auto&... args)
        {
                int f = 0;
                ((cerr << (f++ ? ", " : ""), __print(args)), ...);
        }, x);
        cerr << ')';
}

void _print()
{
        cerr << "]" << en;
}

template<typename T, typename... V>
void _print(T t, V... v)
{
        __print(t);
        if(sizeof...(v)) cerr << ", ";
        _print(v...);
}

namespace brute_force
{
        void progress()
        {

        }
}

namespace accepted_solution
{
        void solve()
        {
                
        }
}

int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        #define task "sample"
        if(fopen(task ".inp", "r"))
        {
                freopen(task ".inp", "r", stdin);
                freopen(task ".out", "w", stdout);
        }

        

        return 0;
}

/*
Compile in terminal: 
g++ -std=c++17 -O2 -Wall -Wextra -Wshadow -Wconversion main.cpp -o main.exe
main.exe

Debugging:
g++ -std=c++17 -O0 -g -DLOCAL main.cpp -o main
*/
