// Title: Lucky Number
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic: Conditional Statements

/**
 * Upan và Ipan là đôi bạn thân. Hai bạn muốn tìm cho mình chung một con số may mắn.
 * 
 * Nhưng với Upan thì một số là số may mắn phải chia hết cho a. Còn với Ipan một số được gọi là may mắn nếu nó chia hết cho b.
 * 
 * Biết hai bạn đang cùng nhau tìm một con số may mắn cho riêng mình. Ông bụt hiện ra và trao tặng hai bạn một con số x.
 * 
 * Số x có thể thỏa mãn cho Ipan hoặc Upan. Hoặc thật tuyệt vời nó khớp với yêu cầu số may mắn của cả hai. Nhưng số x cũng có thể
 * không phải là số may mắn của cả 2 bạn.
 * 
 * Căn cứ vào 3 số a, b, x, hãy giúp ông bụt xác định xem ai là người có số may mắn.
 * 
 * Input:
 * Dòng đầu tiên chứa hai số nguyên a và b (1≤a,b≤100,000).
 * Dòng tiếp theo chứa số nguyên x (1≤x≤10,000,000).
 * 
 * Output:
 * Nếu số x là số may mắn của cả hai in ra “Both”.
 * Nếu số x chỉ là số may mắn của Upan in ra “Upan”.
 * Nếu số x chỉ là số may mắn của Ipan in ra “Ipan”.
 * Nếu số x không là số may mắn của ai trong hai bạn in ra “No”.
 *  
 * Example 1:
 * Input:
 * 4 9
 * 36
 * 
 * Output:
 * Both
 * 
 * Example 2:
 * Input:
 * 4 9
 * 24
 * 
 * Output:
 * No
 **/

#include <iostream>

using namespace std;

int main(){
    int a, b, x;
    cin >> a >> b >> x;
    if(x % a == 0 && x % b == 0){
        cout << "Both";
    }else if(x % a == 0){
        cout << "Upan";
    }else if(x % b == 0){
        cout << "Ipan";
    }else{
        cout << "No";
    }
    return 0;
}