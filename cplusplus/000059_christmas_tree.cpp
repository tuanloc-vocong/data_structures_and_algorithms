// Title: Christmas Tree
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Lễ Giáng Sinh, còn được gọi là lễ Thiên Chúa giáng sinh, Noel hay Christmas là một ngày lễ kỷ niệm Chúa Jesu
 * được sinh ra. Và một biểu tượng không thể thiếu trong ngày lễ Giáng sinh chính là cây thông Noel. Là một người
 * học lập trình bạn hãy đón lễ Giáng sinh theo phong cách “IT” bằng cách viết một chương trình in ra cây thông Noel.
 * 
 * Input:
 * Gồm một dòng duy nhất chứa một số nguyên dương n(2≤n≤100) – chiều cao của cây thông Noel.
 * 
 * Output:
 * Cây thông Noel có chiều cao là n được biểu diễn bằng các ký tự “*”.
 * 
 * Note
 * Lưu ý 1: Ở mỗi hàng sau ký tự ‘*’ cuối cùng sẽ không có thêm bất kỳ khoảng trắng (space) nào khác.
 * Lưu ý 2: Hàng cuối cùng không được là hàng trống (không xuống dòng sau hàng cuối cùng có dấu ‘*’).
 * 
 * Example 1:
 * Input:
 * 3
 * 
 * Output:
 *   *
 *  ***
 * *****
 * 
 * Example 2:
 * Input:
 * 6
 * 
 * Output:
 *        *
 *       ***
 *      *****
 *     *******
 *    *********
 *   ***********
 **/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (n - i); j++){
            cout << ' ';
        }

        for(int j = 0; j < (2 * (i - 1) + 1); j++){
            cout << '*';
        }

        if(i < n) cout << endl;
    }
    return 0;
}