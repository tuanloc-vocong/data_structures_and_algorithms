// Title: Pruning flowers
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Henry quyết định tỉa lại hoa trong khu vườn của mình.
 *
 * Khu vườn của Henry có n chậu hoa, mỗi cây trong chậu hoa có một chiều cao là hi​ (cm)
 *
 * Theo Henry một khu vườn đẹp là khu vườn có n chậu hoa cùng chiều cao với nhau. Vì vậy ông quyết định tỉa hoa trong vườn
 * sao cho chúng có cùng chiều cao. Nhưng mỗi lần tỉa Henry chỉ có thể tỉa được 1 chậu và đúng 1cm và mất 1 đơn vị năng lượng.
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
 *
 * Explanation:
 * Henry sẽ tỉa các chậu cây của mình về cùng một độ cao là 2 (cm). - Cây thứ nhất có độ cao là 2 nên không cần tỉa và không tốn
 * năng lượng. - Cây thứ 2 cũng có độ cao là 2 nên không tốn năng lượng. - Cây thứ 3 có độ cao là 4, để tỉa cây này về độ cao 2
 * thì Henry phải tỉa 2 lần, và tốn 2 đơn vị năng lượng. - Cây thứ 4 có độ cao 3, phải tỉa 1 lần nên tốn 1 đơn vị năng lượng. - Cây
 * thứ 5 cũng có độ cao 3 nên tốn 1 đơn vị năng lượng để tỉa. - Cây cuối cùng có độ cao là 5, phải tỉa 3 lần nên năng lượng để tỉa là 3.
 *
 * Vậy tổng năng lượng để tỉa tất cả các cây này về cùng độ cao 2 là: 0 + 0 + 2 + 1 + 1 + 3 = 7
 *
 * Không thể tỉa tất cả cây về cùng độ cao lớn hơn 2. Và nếu tỉa các cây về cùng độ cao bé hơn 2 thì sẽ tốn nhiều năng lượng hơn.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}