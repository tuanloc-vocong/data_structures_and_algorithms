// Title: Ascending sequence
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic:

/**
 * Lulu có một vườn hoa có n chậu. Mỗi chậu hoa có một độ cao nhất định.
 * 
 * Tết đến rồi Lulu mong muốn có một vườn hoa mặt trời như ý. Một vườn hoa mà Lulu cảm thấy thích là khi các chậu hoa
 * phía sau chắc chắn phải cao hơn hoặc bằng chậu hoa ở phía trước.
 * 
 * Lulu thuê những người thợ làm vườn tới để tỉa chậu hoa theo ý của anh ấy. Nhưng hôm nay anh ấy có việc phải ra ngoài,
 * anh ấy nhờ bạn kiểm tra, liệu với độ cao những chậu hoa sau khi tỉa thì có phù hợp với yêu cầu của anh ấy hay không?
 * 
 * Input:
 * Gồm nhiều dòng, mỗi dòng là một số nguyên dương là chiều cao của chậu hoa tương ứng.
 * 
 * Kết thúc bộ dữ liệu là một dòng chỉ chứa số 0. Số dòng của bộ dữ liệu không vượt quá 10,000 và chiều cao của các chậu
 * hoa luôn lớn hơn 0 và nhỏ hơn hay bằng 1,000,000.
 * 
 * Output:
 * In ra “YES” nếu các chậu cây sau khi tỉa là thỏa mãn yêu cầu của Lulu. Ngược lại in ra “NO”.
 *  
 * Example 1:
 * Input:
 * 1
 * 2
 * 3
 * 4
 * 0
 * 
 * Output:
 * YES
 **/

#include <iostream>

using namespace std;

int main(){
    int n;
    int p = 0;
    bool flag = true;

    while(true){
        cin >> n;
        if(n == 0){
            break;
        }

        if(p >= n){
            flag = false;
        }
        p = n;
    }

    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}