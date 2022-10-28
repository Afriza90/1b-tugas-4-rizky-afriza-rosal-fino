#include <iostream>
#include <string>
using namespace std;

int main(){
    string user, pass, userName, passWord;
    user = "afriz90";
    pass = "rosal90";

    cout << "Masukkan Username: ";cin >> userName;

    cout << "Masukkan Password: ";cin >> passWord;

    if(userName == user){
        if(passWord == pass){
            cout << "Username dan Password sesuai, Login berhasil";
        }else{
            if(userName == user){
                cout << "Username sesuai, Password tidak sesuai!";
            }else{
                cout << "Username dan Password tidak sesuai!";
            }
        }
    }else{
        if(passWord == pass){
            cout << "Username tidak sesuai, password sesuai!";
        }else{
            cout << "Username dan password tidak sesuai!";
        }
    }

    return 0;
}
