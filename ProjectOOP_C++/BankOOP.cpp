#include <iostream>
#include <fcntl.h>
#include <io.h>
#include<vector>
using namespace std;

class BankAccount {
    private:
        string name;
        int accNum;
        double balance;

    public:
        BankAccount(string n, int ac, double bal) {
            name = n;
            accNum = ac;
            balance=bal;
        }

        string getName() {
            return name;
        }

        int getAccNum() {
            return accNum;
        }

        double getBalance() {
            return balance;
        }

        void deposit(double amount) {
            balance = balance + amount;
        }

        void withdraw(double amount) {
            if (balance >= amount) {
                balance = balance - amount;
                cout << L"Success" << endl;
            } else {
                cout << L"failed due to insufficient balance :<" << endl;
            }
        }
};

class ManageBank {
    private:
		vector<BankAccount> accounts;
	public:
		void AddAccount(string name,int accNum,double balance){
			accounts.push_back(BankAccount(name,accNum,balance));
		}

        void showAllAccounts(){
			cout<<"All Account Holders "<<endl;
			for(int i = 0; i<accounts.size();i++){
				cout<<"Name :"<<accounts[i].getName()<<" Account Number :"<<accounts[i].getAccNum()<<" Balance :"<<accounts[i].getBalance()<<endl;
			}
		}
		void searchAccount(int account){
			cout<<"Account Holder "<<endl;
			for(int i = 0; i<accounts.size();i++){
				if(accounts[i].getAccNum()==account){
				cout<<"Name :"<<accounts[i].getName()<<" Account Number :"<<accounts[i].getAccNum()<<" Balance :"<<accounts[i].getBalance()<<endl;	
				}
			}
		}
		BankAccount* findAccount(int accountNum){
			for(int i = 0; i<accounts.size();i++){
				if(accounts[i].getAccNum()==accountNum){
					return &accounts[i];
				}
			}
		}
};

main() {

    ManageBank bank;
    int choice;
    char option;
    do{
        
        //  _setmode(_fileno(stdin), _O_U16TEXT);
        // _setmode(_fileno(stdout), _O_U16TEXT);
        // wcout << L"Quản lý Ngân Hàng SACOMBANK" << endl;
        // wcout << L"Menu" << endl;
        // wcout << L"1. Đăng ký tài khoản" << endl;
        // wcout << L"2. Hiện tất cả tài khoản" << endl;
        // wcout << L"3. Tìm tài khoản" << endl;
        // wcout << L"4. Nạp tiền" << endl;
        // wcout << L"5. Rút tiền" << endl;
        // wcout << L"0. Exit" << endl;
        // wcout << L"____________________" << endl;
        // wcout << L"Nhập lựa chọn" << endl;
        // cin >> choice;
        cout << " \t\tSACOMBANK" << endl;
        cout << "=================MENU================"<<endl;
        cout << "|      1. Creat New Account         |" << endl;
        cout << "|      2. Show All Account          |" << endl;
        cout << "|      3. Search Account            |" << endl;
        cout << "|      4. Deposit Money             |" << endl;
        cout << "|      5. Withdraw Money            |" << endl;
        cout << "|      0. Exit                      |" << endl;
        cout << "=====================================\n" << endl;
        std::cout << "      /\\_____/\\ " << std::endl;
        std::cout << "     /  o     o \\ " << std::endl;
        std::cout << "    ( ==  ^  ==  )" << std::endl;
        std::cout << "     )          (" << std::endl;
        std::cout << "    /  \\_____/  \\ " << std::endl;
        std::cout << "   /             \\ " << std::endl;
        std::cout << "  /      / \\      \\ " << std::endl;
        std::cout << " /      /   \\      \\ " << std::endl;
        std::cout << "/_________________\\ " << std::endl;
                cout << "Enter Your Choice: " << endl;

        cin  >> choice;
        switch (choice) {
            case 1: {
    
                string name;
                int accNum;
                double balance;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Account Number: ";
                cin >> accNum;
                cout << "Enter Initial Balance: ";
                cin >> balance;
                bank.AddAccount(name, accNum, balance);
                cout << "Success :3 " << endl;
                break;
            }
            case 2: {
                bank.showAllAccounts();

                break;
            }
            case 3: {
                int accNum;
                cout <<   "Enter Account Number: ";
                cin >> accNum;
                bank.searchAccount(accNum);
                break;
            }
            case 4: {
                int accNum;
                double amount;
                cout << "Enter Account Number: ";
                cin >> accNum;
                BankAccount* account = bank.findAccount(accNum);
                if (account != NULL) {
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;
                    account->deposit(amount);
                    cout << "Sucsess: " << endl;
                } else {
                    cout << "Acount Not Found " << endl;
                }
                break;
            }
            case 5: {
                int accNum;
                double amount;
                cout << L"Enter Account Number: ";
                cin >> accNum;
                BankAccount* account = bank.findAccount(accNum);
                if (account != nullptr) {
                    cout << "Enter Amount to withdraw: ";
                    cin >> amount;
                    account->withdraw(amount);
                } else {
                    cout << "Acount Not Found " << endl;
                }
                break;
            }
            case 0: {
                exit(1);
                break;
            }
        }
        wcout << "Countinue or out [Yes/No]? ";
        cin >> option;
    } while (option == 'y' || option == 'Y');

}
