#include <iostream>

int main(){
    int n = 73;
    bool isPrime = true;
    for (int i = n/2 ; i >= 2 ; i--)
    {
        if (n%i == 0 )
        {
            isPrime = false;
            break;  
        }  
        
    }
    std:: cout << (isPrime == true ? "Prime Number" : "Not Prime" ) << '\n';
}