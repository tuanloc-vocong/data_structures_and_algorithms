// Title: Oldest Employee
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Cho danh sách nhân viên, tìm nhân viên lớn tuổi nhất công ty. Một nhân viên có các thông tin là mã số, tên, năm sinh.
 * 
 * Input:
 * Dòng đầu tiên là N, số lượng nhân viên (0<N≤1.000).
 * 
 * N dòng tiếp theo, mỗi dòng gồm ba thông tin cách nhau bởi một khoảng trắng:
 * Mã số nhân viên là một chuỗi số có 6 chữ số.
 * Tên nhân viên là một chuỗi không khoảng trắng, có độ dài không quá 10 kí tự.
 * Năm sinh của nhân viên.
 * 
 * Output:
 * Một dòng duy nhất bao gồm mã số, tên và năm sinh của nhân viên lớn tuổi nhất. Nếu nhiều nhân viên có tuổi lớn nhất
 * chỉ cần in ra dữ liệu của người có mã số nhỏ nhất.
 * 
 * Example 1:
 * Input:
 * 3
 * 000263 Van 1989
 * 000169 Pheo 1990
 * 000264 No 1989
 * 
 * Output:
 * 000263 Van 1989
 **/

#include <iostream>
#include <string.h>
using namespace std;

struct Staff{
    char id[7];
    char name[11];
    int birthYear;
};

int main() {
    int n;
    Staff staffs[1000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> staffs[i].id >> staffs[i].name >> staffs[i].birthYear;
    }

    Staff oldestStaff = staffs[0];
    for (int i = 1; i < n; i++) {
        if (staffs[i].birthYear < oldestStaff.birthYear || (staffs[i].birthYear == oldestStaff.birthYear && strcmp(staffs[i].id, oldestStaff.id) < 1))
            oldestStaff = staffs[i];
    }

    cout << oldestStaff.id << " " << oldestStaff.name << " " << oldestStaff.birthYear;
}