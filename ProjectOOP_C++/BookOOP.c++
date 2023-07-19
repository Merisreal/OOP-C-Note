#include <iostream>
#include <string>
using namespace std;

class Sach {
private:
    string tenSach;
    string tacGia;
    int namXuatBan;

public:
    Sach(string ten, string tacgia, int nam) : tenSach(ten), tacGia(tacgia), namXuatBan(nam) {}

    void hienThiThongTin() {
        cout << "Ten sach: " << tenSach << endl;
        cout << "Tac gia: " << tacGia << endl;
        cout << "Nam xuat ban: " << namXuatBan << endl;
    }
};

const int MAX_SACH = 100;
Sach danhSachSach[MAX_SACH];
int soLuongSach = 0;

void themSach() {
    if (soLuongSach < MAX_SACH) {
        string ten, tacgia;
        int nam;

        cout << "Nhap ten sach: ";
        getline(cin.ignore(), ten);

        cout << "Nhap tac gia: ";
        getline(cin, tacgia);

        cout << "Nhap nam xuat ban: ";
        cin >> nam;

        danhSachSach[soLuongSach] = Sach(ten, tacgia, nam);
        soLuongSach++;

        cout << "Them sach thanh cong!" << endl;
    } else {
        cout << "Thu vien da day, khong the them sach moi." << endl;
    }
}

void hienThiDanhSachSach() {
    cout << "Danh sach cac sach trong thu vien:" << endl;
    for (int i = 0; i < soLuongSach; i++) {
        danhSachSach[i].hienThiThongTin();
        cout << "---------------------------------------" << endl;
    }
}

int main() {
    int luaChon;

    do {
        cout << "===== QUAN LI SACH TRONG THU VIEN =====" << endl;
        cout << "1. Them sach moi" << endl;
        cout << "2. Hien thi danh sach sach" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                cin.ignore();
                themSach();
                break;
            case 2:
                hienThiDanhSachSach();
                break;
            case 0:
                cout << "Tam biet! Hen gap lai!" << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
                break;
        }

        cout << endl;
    } while (luaChon != 0);

    return 0;
}
