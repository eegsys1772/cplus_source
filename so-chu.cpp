#include <iostream>
 
using namespace std;
 
int main() {
    int so, soTemp;
    cout << "Nhap so n: ";
    cin >> so;
     
    cout << so << " doc la ";
     
    // luu so dao nguoc cua so vao soTemp
    while(so != 0) {
        soTemp = (soTemp * 10) + (so % 10);
        so /= 10;
    }
     
    while(soTemp != 0) {
        switch(soTemp % 10) {
            case 0: 
                cout << "Khong ";
                break;
            case 1: 
                cout << "Mot ";
                break;
            case 2: 
                cout << "Hai ";
                break;
            case 3: 
                cout << "Ba ";
                break;
            case 4: 
                cout << "Bon ";
                break;
            case 5: 
                cout << "Nam ";
                break;
            case 6: 
                cout << "Sau ";
                break;
            case 7: 
                cout << "Bay ";
                break;
            case 8: 
                cout << "Tam ";
                break;
            case 9: 
                cout << "Chin ";
                break;
        }
         
        soTemp = soTemp / 10;
    }
 
    return 0;
}
