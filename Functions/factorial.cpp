#include <iostream>

int digitSum(int number){
    int sum = 0 ;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        sum += lastDigit;
    }
    return sum;
    
}

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
    std:: cout << digitSum(143) << '\n';
    std:: cout << factorial(7) << '\n';
    
    return 0;

}

//funtion in memory - stack and heap 