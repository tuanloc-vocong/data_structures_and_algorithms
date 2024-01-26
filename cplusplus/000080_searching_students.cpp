// Title: Searching Students
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n*q)
// Space Complexity: O(1)
// Topic: Data Abstraction

/**
 * Nhà trường muốn tạo một công cụ lưu trữ và tìm kiếm mã số và điểm của từng học sinh trong trường.
 * 
 * Đầu tiên nhà trường sẽ nhập vào số n là số lượng học sinh của trường, tiếp theo đó trường sẽ tiến hành
 * nhập thông tin n học sinh đó theo cấu trúc: mã số của học sinh, điểm Toán, điểm Văn.
 * 
 * Tới lúc nhập vào học bạ, nhà trường sẽ tìm kiếm điểm hai môn này của q học sinh. Vì học bạ của các học
 * sinh sắp xếp không theo thứ tự đã nhập nên nhà trường cần tìm điểm hai môn theo mã số của học sinh. Nhà trường
 * sẽ nhập vào đúng mã số của học sinh, và công cụ tìm kiếm phải trả về đúng điểm số tương ứng với mã số học sinh
 * đó. Đảm bảo rằng: - Không có bất kì mã số học sinh nào giống nhau. - Mã số học sinh nhà trường nhập vào luôn
 * tồn tại trong danh sách nhập ban đầu.
 * 
 * Input:
 * Dòng đầu tiên chứa 2 số nguyên dương n và q (n,q≤1.000) là số lượng học sinh sẽ nhập vào và số lượng truy vấn.
 * 
 * n dòng tiếp theo, mỗi dòng chứa ba thông tin cách nhau bởi khoảng trắng: - Mã số của học sinh là một chuỗi
 * gồm 6 chữ số. - Điểm toán và điểm văn của học sinh (là hai số thực nằm trong đoạn [0, 10]). q dòng tiếp theo,
 * mỗi dòng chứa một thông tin tìm kiếm duy nhất là mã số học sinh.
 * 
 * Output:
 * In ra q dòng, mỗi dòng chứa hai số là điểm Toán và điểm Văn của học sinh tương ứng theo thứ tự truy vấn.
 * 
 * Example 1:
 * Input:
 * 4 2
 * 124563 10.0 9.0
 * 015623 5.0 5.0
 * 105263 6.0 8.0
 * 125462 7.0 9.0
 * 124563
 * 125462
 * 
 * Output:
 * 10.0 9.0
 * 7.0 9.0
 **/

#include <iostream>
#include <string.h>

using namespace std;

struct Student{
    char id[7];
    double math;
    double literature;
};

int main() {
    Student students[1000];
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].math >> students[i].literature;
    }

    char id[7];
    for (int i = 0; i < q; i++) {
        cin >> id;
        for (int j = 0; j < n; j++) {
            if (strcmp(id, students[j].id) == 0) {
                cout << students[j].math << " " << students[j].literature << endl;
                break;
            }
        }
    }

    return 0;
}