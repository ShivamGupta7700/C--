#include <iostream>
#include <string>

std:: string userData[] = {"shivam", "Abhijeet"}; //array
int main(){
    std:: cout << "Hello World" << "\n";
    std:: cout << userData[1] << "\n";
    for ( std:: string users : userData ){
        std:: cout << users << '\n';
    }
}