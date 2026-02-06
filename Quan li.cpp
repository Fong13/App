#include <bits/stdc++.h>
using namespace std;

int main(){
    int Luachon;

    cout << "\n== MENU ==\n";
    cout << "1. Kiem tra tuoi\n";
    cout << "2. Hoc luc\n";
    cout << "3. Kiem tra so chan / le\n";
    cout << "4. Thoat\n";
    cout << "Lua chon: ";
    cin >> Luachon;

    switch(Luachon){

        case 1: {
            int Tuoi;
            cout << "Vui long nhap tuoi: ";
            cin >> Tuoi;

            if(Tuoi < 18){
                cout << "Chua du tuoi";
            }
            else{
                cout << "Du tuoi";
            }
            break;
        }

        case 2: {
            float Diemtoan, Diemvan, Diemtienganh, DTB;

            cout << "Nhap diem Toan: ";
            cin >> Diemtoan;
            cout << "Nhap diem Van: ";
            cin >> Diemvan;
            cout << "Nhap diem Tieng Anh: ";
            cin >> Diemtienganh;

            DTB = (Diemtoan + Diemvan + Diemtienganh) / 3;

            if(DTB >= 8){
                cout << "Gioi";
            }
            else if(DTB >= 6.5){
                cout << "Kha";
            }
            else if(DTB >= 5){
                cout << "Trung binh";
            }
            else{
                cout << "Yeu";
            }
            break;
        }

        case 3: {
            int So;
            cout << "Nhap so: ";
            cin >> So;

            if(So == 0){
                cout << "So 0";
            }
            else if(So % 2 == 0){
                cout << "So chan";
            }
            else{
                cout << "So le";
            }
            break;
        }

        case 4:
            cout << "Tam biet!";
            break;

        default:
            cout << "Lua chon khong hop le";
    }

    return 0;
}

