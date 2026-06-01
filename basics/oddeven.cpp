#include <iostream>
using namespace std;


int main(){
    int user_input;
    cout << "Enter your number : " << '/n';
    cin >> user_input ;
    
    // if (user_input % 2 == 0)
    // {
    //     cout << "Even" << '\n';
    // }
    // else {

    //     cout << "Odd";
    // }
    

    //mini version 

    cout << (user_input % 2 == 0 ? "Even" : "Odd") << '/n';
}