// Title: The Largest Fraction
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Cho mảng N phân số, hãy tìm phân số lớn nhất, nếu phân số chưa tối giản thì tối giản phân số đó.
 * 
 * Input:
 * Dòng đầu tiên là N, số lượng phân số (0<N≤1.000).
 * N dòng tiếp theo, mỗi dòng là thông tin về tử số và mẫu số của một phân số.
 * Tử số và mẫu số của các phân số là các số nguyên không âm không quá 1.000. Dữ liệu đảm bảo không có trường hợp mẫu số bằng 0.
 * 
 * Output:
 * Một dòng duy nhất là tử và mẫu của phân số lớn nhất khi đã tối giản phân số đó.
 * 
 * Example 1:
 * Input:
 * 4
 * 2 4
 * 1 3
 * 2 16
 * 3 17
 * 
 * Output:
 * 1 2
 **/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

struct PhanSo {
    int nu;
    int de;
};

PhanSo reduce(PhanSo P) {
    int c = gcd(P.nu, P.de);
    P.nu /= c;
    P.de /= c;
    return P;
}

int main() {
    int n;
    PhanSo lst[1000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> lst[i].nu >> lst[i].de;
    }

    PhanSo ans = lst[0];
    for (int i = 1; i < n; i++) {
        if (ans.nu * lst[i].de - lst[i].nu * ans.de < 0) {
            ans = lst[i];
        }
    }

    ans = reduce(ans);
    cout << ans.nu << " " << ans.de;
}