// Title: Fruits
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Array

/**
 * Hary rất thích ăn trái cây đặc biệt là táo và cam, anh ấy thích táo nhất.
 * 
 * Mẹ của Hary đi chợ về có mua vài giỏ trái cây, mỗi giỏ gồm a quả táo và b quả cam. Hary muốn chọn một giỏ có
 * nhiều táo nhất, nhưng nếu số táo bằng nhau anh ấy sẽ chọn giỏ có nhiều cam nhất trong những giỏ nhiều táo nhất.
 * 
 * Hỏi Hary sẽ chọn giỏ trái cây nào.
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương N là số lượng giỏ trái cây (N≤5000).
 * 
 * N dòng tiếp theo mỗi dòng chứa hai số nguyên không âm ai và bi(ai,bi≤300) là số lượng táo và cam của giỏ thứ i,
 * các giỏ được đánh số từ 1 đến N.
 * 
 * Đảm bảo các giỏ là hoàn toàn khác nhau. Hai giỏ i và j khác nhau nếu ai ≠ aj hoặc bi ≠ bj.
 * 
 * Output:
 * In ra vị trí của giỏ mà Hary chọn.
 * 
 * Example 1:
 * Input:
 * 3
 * 2 3
 * 1 4
 * 2 5
 * 
 * Output:
 * 3
 **/

#include <iostream>

using namespace std;

int n, arr[5005], brr[5005];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i] >> brr[i];
    }

    int index = 0;
    for(int i = 1; i < n; i++){
        if(arr[index] < arr[i] || (arr[index] == arr[i] && brr[index] < brr[i])){
            index = i;
        }
    }

    cout << index + 1;
    return 0;
}