#include <iostream>

int factorial(int n){
    // if (n == 1)
    // {
    //     return n;
    // }
    // else{
    //     return factorial(n-1)*n;
    // }
    return (n==1 ? 1 : factorial(n-1)*n);
}
int main(){
    std:: cout << factorial(7) << '\n';
    
    return 0;

}

//funtion in memory - stack and heap 