#include <iostream>
#include <vector>

using namespace std;
void printVectorValues(vector <int> vec){
    for (int numbers : vec)
    {
        cout << numbers << " ";
    }
    cout << endl;
    
} 
int main(){
    vector <int> vect = {1, 2, 3};
    cout << "size (initial): " << vect.size() << endl;
    vect.push_back(9);
    vector <int> defalutVector(5,0);
   
    // printVectorValues(defalutVector);
    cout <<"size : " << vect.size() << "\n" << "After POP --->" << " "; //size of vector 
    
    vect.pop_back();
    printVectorValues(vect);
    // cout << vect.front() << endl;
    // cout << vect.back() << endl;
    // cout << vect.at(1) << endl;
    cout << vect.capacity() <<endl;
    return 0;
}

