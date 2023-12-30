// Title: Number Of Likes Of The Post
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Viết chương trình đọc vào số nguyên dương n với n là số lượng bài post trên Facebook, và mảng a
 * có n phần tử tương ứng với n bài post, mỗi phần tử là số lượt like có được của bài post đó.
 * 
 * Kiểm tra xem có phải tất cả các bài post đều có người like hay không (có thể có bài post có 0 like)?
 * 
 * Input:
 * Dòng đầu tiên gồm một số nguyên dương n là số lượng bài post trên Facebook (n≤1000). Dòng thứ hai gồm 
 * n số nguyên không âm ai là số lượt like của bài post thứ i, ngăn cách nhau bởi các khoảng trắng (0≤ai≤1.000.000).
 * 
 * Output:
 * Nếu các bài post đều có người like thì in ra “YES”. Ngược lại in “NO”.
 * 
 * Example 1:
 * Input:
 * 4
 * 1 2 3 4
 * 
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 5
 * 1 2 3 4 0
 * 
 * Output:
 * NO
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[1000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool flag = true;
    for(int j = 0; j < n; j++){
        if(arr[j] == 0){
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