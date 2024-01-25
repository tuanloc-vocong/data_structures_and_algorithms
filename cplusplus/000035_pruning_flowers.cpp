// Title: Pruning Flowers
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Array

/**
 * Henry quyết định tỉa lại hoa trong khu vườn của mình.
 * 
 * Khu vườn của Henry có n chậu hoa, mỗi cây trong chậu hoa có một chiều cao là hi​​ (cm)
 * 
 * Theo Henry một khu vườn đẹp là khu vườn có n chậu hoa cùng chiều cao với nhau. Vì vậy ông quyết định tỉa hoa trong vườn sao cho
 * chúng có cùng chiều cao. Nhưng mỗi lần tỉa Henry chỉ có thể tỉa được 1 chậu và đúng 1cm và mất 1 đơn vị năng lượng.
 * 
 * Bạn hãy cho biết năng lượng tối thiểu mà Henry có thể tạo ra khu vườn với chiều cao theo ý muốn của mình.
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương n (n≤100.000) là số chậu hoa trong vườn.
 * 
 * Dòng thứ hai chứa n số nguyên dương là chiều cao của chậu hoa tương ứng hi (hi≤1000,0≤i<n).
 * 
 * Output:
 * In ra đơn vị năng lượng nhỏ nhất là Henry phải tiêu tốn.
 *  
 * Example 1:
 * Input:
 * 6
 * 2 2 4 3 3 5
 * 
 * Output:
 * 7
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[100000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minArr = 1001;
    for(int i = 0; i < n; i++){
        if(arr[i] < minArr){
            minArr = arr[i];
        }
    }

    int energy = 0;
    for(int i = 0; i < n; i++){
        energy = energy + (arr[i] - minArr);
    }

    cout << energy;
    return 0;
}