// Title: Electricity Bill
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity: O(1)
// Topic:

/**
 * "Ding!!! Dong!!! Ding!!! Dong!!!" - chuông cửa nhà bạn lại vang lên không ngừng vào ngày này mỗi tháng vì nhân viên thu
 * tiền điện lại đến tìm bạn. Bạn được xem hóa đơn tiền điện mình dùng trong tháng trước nhưng băn khoăn không biết rằng con
 * số này có được tính chính xác theo quy định hay không.
 * 
 * Bạn biết được quy định về giá bán điện của Bộ Công Thương như sau:
 * 
 * Bậc	Giá bán lẻ điện sinh hoạt bậc thang	Giá (VND/kWh)
 * 1	Cho kWh từ 0 đến 50	1,484
 * 2	Cho kWh từ 51 đến 100	1,533
 * 3	Cho kWh từ 101 đến 200	1,786
 * 4	Cho kWh từ 201 đến 300	2,242
 * 5	Cho kWh từ 301 đến 400	2,503
 * 6	Cho kWh từ 401 trở lên	2,587
 * 
 * Với chỉ số điện tháng trước và tháng này ghi trên hóa đơn, bạn hãy tự tính lại số tiền điện phải trả để so sánh kết quả.
 * 
 * Lưu ý: tiền phải trả = tiền điện sử dụng + thuế VAT (10% tiền điện). Kết quả chỉ lấy phần nguyên.
 * 
 * Input:
 * Gồm một dòng duy nhất chứa hai số nguyên không âm cách nhau bởi một khoảng trắng.
 * 
 * Số đầu tiên là chỉ số điện đầu tháng truớc, số tiếp theo là chỉ số điện đầu tháng này của bạn. (Bạn được đảm bảo
 * là chỉ số điện tháng sau luôn không bé hơn chỉ số điện tháng trước và các chỉ số điện có giá trị không quá 10^6).
 * 
 * Output:
 * In ra một số nguyên duy nhất là số tiền bạn phải trả cho lượng điện mình đã sử dụng tháng trước.
 *  
 * Example 1:
 * Input:
 * 120 168
 * 
 * Output:
 * 78355
 * 
 * Example 2:
 * Input:
 * 0 203
 * 
 * Output:
 * 369793
 **/

#include <iostream>

using namespace std;

int main(){
    int soDienDauThangTruoc, soDienDauThangNay, tienDienSuDung;
    cin >> soDienDauThangTruoc >> soDienDauThangNay;
    int soDienSuDung = soDienDauThangNay - soDienDauThangTruoc;

    if(soDienSuDung <= 50){
        tienDienSuDung = soDienSuDung * 1484;
    }else if(soDienSuDung <= 100){
        tienDienSuDung = 50 * 1484 + (soDienSuDung - 50) * 1533;
    }else if(soDienSuDung <= 200){
        tienDienSuDung = 50 * 1484 + 50 * 1533 + (soDienSuDung - 100) * 1786;
    }else if(soDienSuDung <= 300){
        tienDienSuDung = 50 * 1484 + 50 * 1533 + 100 * 1786 + (soDienSuDung - 200) * 2242;
    }else if(soDienSuDung <= 400){
        tienDienSuDung = 50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + (soDienSuDung - 300) * 2503;
    }else{
        tienDienSuDung = 50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + 100 * 2503 + (soDienSuDung - 400) * 2587;
    }

    int tienPhaiTra = tienDienSuDung * 1.1;
    cout << tienPhaiTra;

    return 0;
}