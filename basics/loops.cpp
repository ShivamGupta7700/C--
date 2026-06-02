#include <iostream>

int main(){

    int start = 1;
    int count = 0;
    // while (start <= 10)
    // {
    //     std:: cout << start << '\n';
    //     start++;
    // }


    // for (int i = 0; i  < start ; i++)  //variable , condition , updation
    // {
    //     std:: cout << "Hello word :)" << '\n';
    // }
    
    // while (start <= 10)
    // {
    //     count += start;
        
    //     if (start == 5 )
    //     {
    //         break;
    //     }
        
    //     start++;
        
    // }
    // std :: cout << count << '\n';
    
    do{
        std::cout << "Hello World" <<"\n";
    }while (3>5);
    
    
    for (int i = 1 ; i < 10 ; i++)
    {
        if (i%2 != 0)
        {
            count += i ;
        }
        

    }
    
    std:: cout << count << '\n';
}