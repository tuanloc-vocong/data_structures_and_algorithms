// Title: Splitting Candies
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Loop Statements

/**
 * Mẹ của Lu và Xi vừa mua n túi kẹo, mỗi túi có một số lượng kẹo nhất định.
 * 
 * Mẹ muốn chia kẹo cho hai anh em, nhưng mẹ muốn với mỗi bịch đều có thể chia đều cho cả hai để không gây mâu thuẫn.
 * Hỏi mẹ của Lu và Xi có thể nào thực hiện được điều đó không.
 * 
 * Input:
 * Dòng đầu tiên là số nguyên dương n (1≤n≤1000) - số lượng túi kẹo.
 * n dòng tiếp theo mỗi dòng chứa một số nguyên x (1≤x≤1000) là số lượng kẹo của mỗi bịch.
 * 
 * Output:
 * In ra “YES” nếu kẹo mỗi bịch đều có thể chia đều cho hai anh em Lu và Xi. Ngược lại in ra “NO”
 *  
 * Example 1:
 * Input:
 * 3
 * 4
 * 6
 * 8
 * 
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 3
 * 4
 * 6
 * 9
 * 
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

int main(){
    int n, x;
    bool flag = true;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(x % 2 != 0){
            flag = false;
        }
    }

    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}