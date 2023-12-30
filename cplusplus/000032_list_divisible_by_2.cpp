// Title: List Divisible By 2
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Liệt kê các số chia hết cho 2 trong mảng một chiều các số nguyên.
 * 
 * Input:
 * Dòng đầu tiên là số nguyên dương n là số lượng phần tử của mảng (n≤1000).
 * Dòng thứ hai gồm n số nguyên ai là các phần tử của mảng, các số được ngăn cách nhau bởi các
 * khoảng trắng (∣ai∣≤1000000).
 * 
 * Output:
 * Gồm nhiều dòng, mỗi dòng là một phần tử chia hết cho 2 trong mảng đã cho. Các phần tử phải được
 * in theo thứ tự xuất hiện trong mảng.
 * 
 * Example 1:
 * Input:
 * 4
 * 1 5 6 0
 * 
 * Output:
 * 6
 * 0
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[1000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < n; j++){
        if(arr[j] % 2 == 0){
            cout << arr[j] << endl;
        }
    }
    return 0;
}