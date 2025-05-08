#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int recursionCount(int target, int sum, int pos){
    int cnt = 0;
    if(sum == target) return 1;
    for(int i = pos; i <= sqrt(target); i++){
        int tmp = sum + pow(i,2);
        if(tmp <= target){
            cnt += recursionCount(target, tmp, i + 1);
        }
    }
    return cnt;
}

/*
Viết hàm void threeChars(string fileName) đọc vào các hàng từ một file có đuôi txt, mỗi hàng chứa một chuỗi có 3 kí tự. Xác định xem 3 ký tự trên mỗi hàng có đúng thứ tự bảng chữ cái (ASCII) hay không, nếu đúng xuất ra "true", ngược lại xuất ra "false". Chương trình sẽ lặp cho đến khi 3 ký tự đọc vào là "*".

Đầu vào:

Biến fileName là tên file chứa dữ liệu cần đọc vào.

Đầu ra:

"true" hoặc "false", theo sau bởi dấu xuống dòng, trừ trường hợp đọc vào "*" thì kết thúc chương trình.

*/

void threeChars(string fileName)   {
    ifstream file(fileName);
    if(!file.is_open()){
        return;
    }
    string S;
    while(getline(cin, S)){
        if(S == "*") break;
        cout << "false";
        
    }
    file.close();
}

int main(){
    cout << recursionCount(100, 0, 1);
    return 0;
}

//hello thí is fucking changeeee