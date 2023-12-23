// Title: The Maximum Number Of Candies
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * Có 4 túi kẹo được đặt trên bàn và mỗi túi kẹo được dán bên ngoài là số viên kẹo có trong túi. Bé An được phép
 * chọn 1 túi kẹo bất kỳ trong số đó đem về làm quà. Vì kẹo là món ưa thích nên bé An muốn chọn túi có nhiều viên
 * kẹo nhất. Bạn hãy giúp bé An nhé!
 * 
 * Input:
 * Gồm một dòng duy nhất lần lượt là số kẹo trong mỗi túi. Biết mỗi túi có không quá 100 viên kẹo, và túi nào cũng có kẹo.
 * 
 * Output:
 * In ra số kẹo nhiều nhất mà bé An có thể nhận được.
 *  
 * Example 1:
 * Input:
 * 8 7 6 10
 * 
 * Output:
 * 10
 **/

#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int maxCandy = a;

    if(maxCandy < b){
        maxCandy = b;
    }

    if(maxCandy < c){
        maxCandy = c;
    }

    if(maxCandy < d){
        maxCandy = d;
    }

    cout << maxCandy;
    return 0;
}