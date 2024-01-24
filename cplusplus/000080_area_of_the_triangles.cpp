// Title: Area Of The Triangles
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Lần lượt cho hoành độ và tung độ 3 đỉnh của 1 mảng các tam giác. Hãy tính tổng diện tích các tam giác
 * trong mảng. Cho công thức của diện tích của 1 tam giác như sau với s là nửa chu vi của tam giác và a,b,c
 * lần lượt là độ dài các cạnh.
 * A=√​s(s−a)(s−b)(s−c)
 * 
 * Input:
 * Dòng thứ nhất chứa số n(n≤50) - số tam giác trong mảng. 3*n dòng tiếp theo sẽ chứa thông tin về 3 đỉnh
 * của từng tam giác như sau: - Dòng thứ nhất chứa tung độ và hoành độ của điểm thứ nhất - Dòng thứ hai chứa
 * tung độ và hoành độ của điểm thứ hai - Dòng thứ ba chứa tung độ và hoành độ của điểm thứ ba
 * 
 * Tung độ và hoành độ của mỗi điểm sẽ là 3 số nguyên trong đoạn [-1000, 1000]. Dữ liệu đảm bảo rằng 3 điểm
 * của 1 tam giác sẽ không thẳng hàng.
 * 
 * Output:
 * In ra 1 dòng duy nhất là tổng diện tích của các tam giác trong mảng. Kết quả chỉ in ra với hai chữ số thập phân.
 * 
 * Example 1:
 * Input:
 * 1
 * 0 0
 * 1 0
 * 0 1
 * 
 * Output:
 * 0.50
 **/

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

double dist(Point A, Point B) {
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main() {
    int n;
    double res = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, y;
        double p;
        cin >> x >> y;
        Point A, B, C;
        A.x = x;
        A.y = y;
        cin >> x >> y;
        B.x = x;
        B.y = y;
        cin >> x >> y;
        C.x = x;
        C.y = y;
        double AB = dist(A, B);
        double BC = dist(B, C);
        double AC = dist(A, C);
        p = (AB + BC + AC) / 2;
        double area = sqrt(p * (p - AB) * (p - AC) * (p - BC));
        res += area;
    }
    cout << fixed << setprecision(2) << res;
    return 0;
}