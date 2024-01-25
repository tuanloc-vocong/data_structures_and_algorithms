// Title: Counting Stars
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Loop Statements

/**
 * Hôm nay dự báo, sẽ có một trận mưa sao băng đẹp nhất trong năm. Guka quyết định tối nay sẽ không học bài nữa,
 * cậu ta sẽ đi ngắm sao.
 * 
 * Ngắm được vài tiếng thì Guka phát hiện không phải cái nào trên trời cũng là sao. Ngoài sao còn có thiên thạch,
 * máy bay, … Và sau vài tiếng nữa thì Guka nhận thấy, ngôi sao là những hình có 5 đỉnh lồi ra, còn lại thì không phải.
 * 
 * Cho danh sách những vật thể trên bầu trời. Bạn hãy giúp Guka đếm xem có bao nhiêu ngôi sao hiện tại có trên bầu trời nhé.
 * 
 * Input:
 * Gồm nhiều dòng, mỗi dòng là một số nguyên dương x (1≤x≤100) là số đỉnh của đối tượng mà Guka nhìn thấy. Cuối bộ dữ liệu vào
 * là một dòng chứa số 0.
 * 
 * Dữ liệu đảm bảo số dòng dữ liệu không quá 100,000.
 * 
 * Output:
 * In ra một dòng duy nhất là số ngôi sao Guka đếm được.
 *  
 * Example 1:
 * Input:
 * 5
 * 10
 * 12
 * 3
 * 0
 * 
 * Output:
 * 1
 **/

#include <iostream>

using namespace std;

int main(){
    int n;
    int cnt = 0;

    while(true){
        cin >> n;
        if(n == 0){
            break;
        }

        if(n == 5){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}