// Title: Mass Of Molecule
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Stack & Queue

/**
 * Phân tử có thể được định nghĩa là một dãy các nguyên tử và được biểu diễn bằng một công thức hóa học bao gồm các chữ cái
 * biểu thị các nguyên tử này. Ví dụ. chữ H biểu thị nguyên tử hydro, C biểu thị nguyên tử cacbon, O biểu thị nguyên tử oxy,
 * công thức COOH biểu thị phân tử gồm một nguyên tử cacbon, hai nguyên tử oxy và một nguyên tử hydro.
 *
 * Để viết một số công thức một cách hiệu quả, ta sử dụng các quy tắc sau. Các chữ cái biểu thị một số nguyên tử có thể được
 * nhóm lại bằng cách đặt trong dấu ngoặc đơn, ví dụ: công thức CH(OH) chứa nhóm OH. Các nhóm có thể được lồng vào nhau - một
 * nhóm cũng có thể chứa các nhóm khác. Để đơn giản hóa công thức, các lần xuất hiện liên tiếp của cùng một chữ cái có thể
 * được thay thế bằng chữ cái đó, sau đó là một số lần xuất hiện này. Ví dụ. công thức COOHHH có thể được viết là CO2H3 và nó
 * đại diện cho một phân tử bao gồm một nguyên tử cacbon, hai nguyên tử oxy và ba nguyên tử hydro. Hơn nữa, các lần xuất hiện
 * liên tiếp của cùng một nhóm có thể được thay thế bằng nhóm đó, sau đó là một số lần xuất hiện này. Ví dụ. công thức
 * CH(CO2H)(CO2H)(CO2H) có thể được viết là $CH(CO2H)3 $ và phân tử được biểu diễn bằng cả hai công thức đó bao gồm bốn nguyên
 * tử cacbon, bốn nguyên tử hydro và sáu nguyên tử oxy. Một số được viết sau một chữ cái hoặc một nhóm luôn lớn hơn hoặc bằng 2
 * và nhỏ hơn hoặc bằng 9. Khối lượng của một phân tử là tổng khối lượng của tất cả các nguyên tử của nó. Một nguyên tử hydro
 * có khối lượng 1, một nguyên tử cacbon có khối lượng 12 và một nguyên tử oxy có khối lượng 16.
 *
 * Viết chương trình tính khối lượng của phân tử.
 *
 * Input:
 * Dòng đầu tiên và duy nhất của tệp đầu vào chứa công thức của phân tử có khối lượng cần được xác định. Công thức của một phân
 * tử sẽ chỉ bao gồm các ký tự H,C,O,(,),2,3,...,9. Độ dài của nó sẽ nhỏ hơn hoặc bằng 100 ký tự.
 *
 * Output:
 * Dòng đầu tiên và duy nhất của tệp đầu ra chứa khối lượng của một phân tử được biểu diễn bằng công thức đã cho. Kết quả sẽ luôn
 * nhỏ hơn hoặc bằng 10000.
 *
 * Example 1:
 * Input:
 * COOH
 *
 * Output:
 * 45
 *
 * Example 2:
 * Input:
 * CH(CO2H)3
 *
 * Output:
 * 148
 *
 * Example 3:
 * Input:
 * ((CH)2(OH2H)(C(H))O)3
 *
 * Output:
 * 222
 **/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int mass(char c)
{
    return c == 'H' ? 1 : (c == 'C' ? 12 : 16);
}

int main()
{
    string s;
    cin >> s;
    stack<int> atom;
    int w, mol;

    for (char c : s)
    {
        if (isalpha(c))
        {
            atom.push(mass(c));
        }
        else if (isdigit(c))
        {
            mol = atom.top() * (c - '0');
            atom.pop();
            atom.push(mol);
        }
        else if (c == '(')
        {
            atom.push(-1);
        }
        else if (c == ')')
        {
            w = 0;
            while (atom.top() != -1)
            {
                w += atom.top();
                atom.pop();
            }
            atom.pop();
            atom.push(w);
        }
    }

    int sum = 0;
    while (!atom.empty())
    {
        sum += atom.top();
        atom.pop();
    }

    cout << sum;
    return 0;
}