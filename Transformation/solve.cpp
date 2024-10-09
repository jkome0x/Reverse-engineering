#include <iostream>
#include <string>
using namespace std;
int main(){
    wstring encoded = L"灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸彤㔲挶戹㍽";
    for (wchar_t ch: encoded){
        char high = (ch >> 8) & 0xFF;
        char low = ch & 0xFF;
        cout << high << low;
    }
    return 0;
}
