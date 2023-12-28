// Title: The Fence
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình vẽ hàng rào nhà Harry có dạng hình vuông có độ dài n. Hàng rào được kí hiệu bởi kí tự '*',
 * các ô đất bên trong hàng rào là các khoảng trắng.
 * 
 * Ví dụ:
 * 
 * n = 2
 *  **
 *  **
 * 
 * n = 5
 *  *****
 *  *   *
 *  *   *
 *  *   *
 *  *****
 * 
 * Input:
 * Một dòng duy nhất chứa một số nguyên dương x (2≤n≤100).
 * 
 * Output:
 * Hình dạng hàng rào nhà Harry.
 *  
 * Example 1:
 * Input:
 * 2
 * 
 * Output:
 *  **
 *  **
 **/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i == n || j == n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}