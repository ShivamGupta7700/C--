#include <iostream>
#include <string>

std:: string userData[] = {"shivam", "Abhijeet"}; //array
int numbers[] = {1,55,768,2123,213,12,45};
void basicOfArray(){
    std:: cout << "Hello World" << "\n";
    std:: cout << userData[1] << "\n";
    for ( std:: string users : userData ){
        std:: cout << users << '\n';
    }
    
    for ( int i = 0; i < sizeof(userData) / sizeof(std::string); i++) //remember bytes
    {
        std:: cout << userData[i] << "\n";
        std:: cout << sizeof(userData[i]) << "\n";
        
    }
    std:: cout << "total size of array >>> " << sizeof(userData) << "\n";
    std:: cout << "bytes in std::string >>> " << sizeof(std::string) << "\n";
    return; 
}
//largest / smallest in array 
void max(int userInput[], int size){
    int biggest = userInput[0];
    for (int i = 0 ; i < size ; i++){
        if (userInput[i] > biggest){
            biggest  = userInput[i];
        }
    }
    std:: cout << biggest << "\n";
    return;
}
int main(){
    basicOfArray();
    max(numbers, sizeof(numbers) / sizeof(int));
}