// Title: The Furthest Points
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Cho bạn một điểm M(x,y) và N điểm khác trong mặt phảng Oxy, hãy tìm những điểm xa nhất so với điểm M. Biết công thức
 * tính khoảng cách giữa hai điểm A(x,y) và B(z,t) là:
 * distance(A,B) = √(x−z)^2+(y−t)^2
 * 
 * Input:
 * Dòng thứ nhất gồm 2 số nguyên Mx và My là tọa độ điểm M.
 * Dòng thứ hai là số nguyên dương N, số lượng điểm trong Oxy(N≤1.000).
 * N dòng tiếp theo, mỗi dòng là hai số nguyên xi và yi, là tung độ và hoành độ của điểm thứ i(0≤i<N).
 * Các số tọa độ điểm đều là số nguyên nằm trong đoạn [-1000, 1000].
 * Nếu có nhiều điểm cùng đều cách xa nhất so với M, chỉ cần lấy điểm đầu tiên theo thứ tự trong dữ liệu vào.
 * 
 * Output:
 * Một dòng là tọa độ của điểm cần tìm.
 * 
 * Example 1:
 * Input:
 * 0 0
 * 3
 * 1 2
 * 1 1
 * 1 0
 * 
 * Output:
 * 1 2
 **/

#include <iostream>
#include <math.h>
using namespace std;
struct Point{
    int x, y;
};

double dist(Point A, Point B) {
    return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
}

int main(){
    int n;
    Point M, a[1000];
    cin >> M.x >> M.y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }

    int maxLen = 0;
    Point ans = M;

    for (int i = 0; i < n; i++) {
        int curLen = dist(M, a[i]);
        if (curLen > maxLen) {
            maxLen = curLen;
            ans = a[i];
        }
    }
    cout << ans.x << " " << ans.y;
	return 0;
}