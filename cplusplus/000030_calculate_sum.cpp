// Title: Calculate Sum
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình đọc vào số nguyên dương n với n là số lượng bài post trên Facebook, và mảng a có n phần tử
 * tương ứng với n bài post, mỗi phần tử là số lượt like có được của bài post đó. Tính tổng số lượt like của
 * tất cả n bài post.
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương n (n≤1000) - số lượng bài post trên Facebook. Dòng thứ hai chứa n số nguyên không âm 
 * ai là số lượt like của từng bài post, cách nhau bởi các khoảng trắng (0≤ai≤100000,0≤i<n).
 * 
 * Output:
 * Một dòng duy nhất là tổng số lượt like của tất cả các bài post.
 *  
 * Example 1:
 * Input:
 * 4
 * 3 3 2 1
 * 
 * Output:
 * 9
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[1000];
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int j = 0; j < n; j++){
        sum += arr[j];
    }

    cout << sum;
    return 0;
}