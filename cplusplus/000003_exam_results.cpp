// Title: Exam Results
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình nhập vào điểm 3 môn Toán, Khoa học tự nhiên, Anh Văn. Tính tổng điểm thi 3 môn của thí sinh đó.
 * 
 * Input:
 * Dòng 1: Chứa điểm số của môn Toán
 * Dòng 2: Chứa điểm số của môn Khoa học tự nhiên
 * Dòng 3: Chứa điểm số của môn Anh Văn.
 * Biết rằng điểm số nhập vào là một số thực, từ 0.0 điểm đến 10.0 điểm.
 * 
 * Output:
 * In ra một dòng duy nhất chứa kết quả bài toán (Dữ liệu được in 2 chữ số thập phân).
 *  
 * Example 1:
 * Input:
 * 7.5
 * 9.0
 * 10.0
 * 
 * Output:
 * 26.50
 **/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double math, science, english;
    cin >> math >> science >> english;
    double total = math + science + english;
    cout << fixed << setprecision(2) << total;
    return 0;
}