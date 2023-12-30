// Title: Most Liked Post
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình đọc vào số nguyên dương n với n là số lượng bài post trên Facebook, và mảng a có
 * n phần tử tương ứng với n bài post, mỗi phần tử là số lượt like có được của bài post đó. Bạn hãy tìm
 * bài post có nhiều lượt like nhất.
 * 
 * Input:
 * Dòng đầu tiên bao gồm một số nguyên dương n là số lượng bài post trên Facebook (n≤1000).
 * Dòng thứ hai là n số nguyên không âm ai là số lượt like của bài post thứ i (0≤ai≤100000), các số được
 * ngăn cách nhau bởi các khoảng trắng.
 * 
 * Output:
 * Một dòng duy nhất là bài post có nhiều lượt like nhất trong mảng.
 * 
 * Example 1:
 * Input:
 * 4
 * 5 30 15 7
 * 
 * Output:
 * 30
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[1000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for(int j = 0; j < n; j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }

    cout << max;
    return 0;
}