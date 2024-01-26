// Title: Colored Ribbon
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Data Abstraction

/**
 * Upan và Ipan chơi với những băng giấy màu. Mỗi băng giấy có một màu có giá trị từ 1 tới 1000 và có diện tích là 1×m.
 * Họ có n băng giấy màu như vậy. Sau đó thì hai bạn muốn thống kê với một màu có tồn tại trong n băng giấy thì có tổng
 * độ dài và số lượng là bao nhiêu.
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương n (n≤100) là số lượng băng giấy màu Upan và Ipan có.
 * n dòng tiếp theo, mỗi dòng chứa hai số nguyên dương lần lượt là mã màu p và độ dài l của băng giấy (0<p,l≤1.000).
 * 
 * Output:
 * Dòng đầu tiên là số lượng màu băng giấy khác nhau của hai bạn là k.
 * 
 * k​ dòng tiếp theo mỗi dòng in ra ba số nguyên dương là mã màu, tổng độ dài và số lượng băng giấy của màu đó. Dữ liệu
 * in ra phải được in theo thứ tự tăng dần của mã màu.
 * 
 * Example 1:
 * Input:
 * 4
 * 4 5
 * 4 3
 * 7 8
 * 8 9
 * 
 * Output:
 * 3
 * 4 8 2
 * 7 8 1
 * 8 9 1
 **/

#include <iostream>

using namespace std;

struct Color {
    int sumLength = 0;
    int cnt = 0;
};

void update(Color &c, int newLength) {
    c.cnt++;
    c.sumLength += newLength;
}

int main() {
    int n;
    Color colors[1001];

    cin >> n;

    for (int i = 0; i < n; i++) {
        int p, l;
        cin >> p >> l;
        update(colors[p], l);
    }

    int differentColors = 0;
    for (int i = 1; i <= 1000; i++) {
        if (colors[i].cnt > 0) {
            differentColors++;
        }
    }

    cout << differentColors << endl;
    for (int i = 1; i <= 1000; i++) {
        if (colors[i].cnt > 0) {
            cout << i << " " << colors[i].sumLength << " " << colors[i].cnt << endl;
        }
    }
}