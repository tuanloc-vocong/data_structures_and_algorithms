// Title: Excellent Student
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Data Abstraction

/**
 * Cho thông tin của N học sinh gồm họ và tên, điểm môn toán và văn. Biết công thức tính điểm trung bình
 * của một học sinh là:
 * điểm trung bình = \frac{(Điểm toán + Điểm văn)}{2}
 * Hãy đếm xem có bao nhiêu học sinh có điểm trung bình từ 9.0 trở lên.
 * 
 * Input:
 * Dòng đầu tiên là số lượng học sinh N(N≤100).
 * N cặp dòng tiếp theo, mỗi hai dòng sẽ là thông tin của học học sinh: - Dòng thứ nhất gồm một chuỗi S là tên
 * của học sinh, độ dài của S không quá 100 kí tự. - Dòng thứ hai gồm hai số thực a và b là điểm toán và văn
 * của học sinh đó (0 ≤ a, b ≤ 10).
 * 
 * Output:
 * Số lượng học sinh có điểm trung bình trên 9.0.
 * 
 * Example 1:
 * Input:
 * 2
 * Nguyen Van A
 * 5 6
 * Le Thi B
 * 8.5 10
 * 
 * Output:
 * 1
 **/

#include <iostream>
#include <math.h>

using namespace std;

struct Student{
    char name[101];
    double math, lit;
};

double average(Student s) {
    return (s.math + s.lit) / 2;
}

int main(){
    int n;
    Student S[100];
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin.getline(S[i].name, 101);
        cin >> S[i].math >> S[i].lit;
        cin.ignore();
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (average(S[i]) >= 9.0) cnt += 1;
    }

    cout << cnt;
	return 0;
}