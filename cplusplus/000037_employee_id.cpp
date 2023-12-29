// Title: Employee Id
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic:

/**
 * Công ty XYZ nay tuyển thêm 1 nhân viên mới. Do đợt vừa rồi có rất nhiều nhân viên nghỉ việc nên có một số mã số
 * nhân viên không sử dụng.
 * 
 * Vì chưa có thời gian tổ chức lại dữ liệu. Tổng giám đốc công ty XYZ muốn nhờ bạn thống kê và đưa ra mã số nhân viên
 * còn trống nhỏ nhất để công ty cấp cho nhân viên mới.
 * 
 * Công ty sẽ gửi bạn danh sách các mã số nhân viên đang làm việc tại công ty theo thứ tự lộn xộn.
 * 
 * Bạn sẽ gửi lại cho giám đốc mã số nhân viên còn trống nhỏ nhất.
 * 
 * Mã số nhân viên là một dãy số tự nhiên trong khoảng từ 1 tới 100000.
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương n (n≤1000) là số lượng nhân viên hiện tại trong công ty.
 * Dòng thứ hai chứa n số nguyên là mã số của các nhân viên. Mọi giá trị đều nằm trong phạm vi cho phép.
 * 
 * Output:
 * In ra mã số nhân viên còn trống nhỏ nhất.
 * 
 * Example 1:
 * Input:
 * 4
 * 1 2 4 6
 * 
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

int n, arr[1004];

bool inArray(int k, int arr[]){
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            return true;
        }
    }
    return false;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = 1;
    while(true){
        if(inArray(ans, arr)){
            ans += 1;
        }else{
            cout << ans;
            return 0;
        }
    }
    return 0;
}