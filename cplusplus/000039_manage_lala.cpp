// Title: Manage Lala
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Array

/**
 * Lala rất thích học Tin học, nhưng cô ấy vô cùng ghét học Tiếng Anh. Biết được điều đó ba mẹ Lala vô cùng lo lắng
 * vì sợ Lala sẽ yếu môn Tiếng Anh. Ba mẹ Lala quyết định lên kế hoạch quản lý. Rằng Lala không được phép học Tin học
 * quá 3 tiếng liên tục và sau khi học Tin học xong thì Lala phải dành ra ít nhất một tiếng học Tiếng Anh.
 * 
 * Bạn biết được Lala học môn nào trong mỗi giờ của n giờ. Nhiệm vụ của bạn là kiểm tra xem Lala có thực hiện đúng lời
 * ba mẹ hay không?
 * 
 * Input:
 * Dòng đầu tiên chứa số nguyên dương n (n≤24).
 * 
 * Dòng thứ hai chứa n số nguyên một số 0 hoặc 1. Nếu là 0, giờ thứ i Lala đang học Tin học, ngược lại Lala đang học Tiếng Anh.
 * 
 * Output:
 * In ra “YES” nếu Lala thực hiện đúng lời ba mẹ, ngược lại in ra “NO”.
 * 
 * Example 1:
 * Input:
 * 5
 * 0 0 0 1 1
 * 
 * Output:
 * YES
 **/

#include <iostream>

using namespace std;

int main(){
    int n, arr[24];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(arr[n - 1] == 0){
        cout << "NO";
    }else{
        bool isGood = true;
        for(int i = 0; i < n-3; i++){
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2] && arr[i+2] == arr[i+3] && arr[i] == 0){
                isGood = false;
                break;
            }
        }

        if(isGood){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }

    return 0;
}