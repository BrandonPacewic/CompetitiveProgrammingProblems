#include <algorithm>
#include <array>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

template <typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T_container,
          typename T = typename enable_if<
              !is_same<T_container, string>::value,
              typename T_container::value_type>::type>
ostream& operator<<(ostream& os, const T_container& container) {
    os << '{';
    string separator;

    for (const T& item : container) {
        os << separator << item, separator = ", ";
    }

    return os << '}';
}

#ifdef DBG_MODE
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head A, Tail... B) {
    cerr << ' ' << A;
    dbg_out(B...);
}
#define test(...) cerr << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)
#else
#define test(...)
#endif

void run_case() {
    // TODO: case code here

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint16_t test_cases;
    cin >> test_cases;

    while (test_cases--) {
        run_case();
#ifdef DBG_MODE
        cout << flush;
#endif
    }

#ifndef DBG_MODE
    cout << flush;
#endif

    return 0;
}
