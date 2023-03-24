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
std::ostream& operator<<(std::ostream& os, const std::pair<A, B>& p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T_container,
          typename T = typename std::enable_if<
              !std::is_same<T_container, std::string>::value,
              typename T_container::value_type>::type>
std::ostream& operator<<(std::ostream& os, const T_container& container) {
    os << '{';
    std::string separator;

    for (const T& item : container) {
        os << separator << item, separator = ", ";
    }

    return os << '}';
}

#ifdef DBG_MODE
void dbg_out() { std::cerr << std::endl; }
template <typename Head, typename... Tail>
void dbg_out(Head A, Tail... B) {
    std::cerr << ' ' << A;
    dbg_out(B...);
}
#define test(...) std::cerr << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)
#else
#define test(...)
#endif

const int64_t M = 12 * 3600 * int64_t(1e9);
const int64_t INV11 = 15709090909091LL;

void run_case(const uint16_t& tc) {
    array<int64_t, 3> hands;
    cin >> hands[0] >> hands[1] >> hands[2];
    sort(hands.begin(), hands.end());
    int64_t T = -1;

    auto test_hand_assignment = [&](int64_t A, int64_t B, int64_t C) -> int64_t {
        int64_t test = int64_t((__int128) (B - A + M) * INV11 % M);

        if (719 * test % M != (C - A + M) % M) {
            return -1;
        }

        return test;
    };

    do {
        T = max(T, test_hand_assignment(hands[0], hands[1], hands[2]));
    } while (next_permutation(hands.begin(), hands.end()));

    int64_t N = T % int64_t(1e9);
    T /= int64_t(1e9);
    int64_t S = T % 60;
    T /= 60;
    int64_t M = T % 60;
    T /= 60;

    assert(T < 12);

    int64_t H = T;

    cout << "Case #" << tc << ": " << H << ' ' << M << ' ' << S << ' ' << N << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint16_t test_cases;
    std::cin >> test_cases;

    for (uint16_t tc = 1; tc <= test_cases; tc++) {
        run_case(tc);
#ifdef DBG_MODE
        std::cout << std::flush;
#endif
    }

#ifndef DBG_MODE
    std::cout << std::flush;
#endif

    return 0;
}
