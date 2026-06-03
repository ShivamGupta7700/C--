#include <iostream>


int y = 10; //global

void test(){
    int x = 10;
    std:: cout << x << '\n';
}
int main(){
    for (int i = 0; i < 3; i++) // local scope
    {
        return;
    }
    
    test();

    {
        //block of code 
        int x = 10; //local scope
    }
}
