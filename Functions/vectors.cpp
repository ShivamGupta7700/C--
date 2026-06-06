#include <iostream>
#include <vector>

using namespace std;
void printVectorValues(vector <int> vec){
    for (int numbers : vec)
    {
        cout << vec[numbers] << " ";
    }
    cout << endl;
    
} 
int main(){
    vector <int> vect = {1,2,3};
    vector <int> defalutVector(5,5);
    cout << vect[0] << "\n";
    for (int numbers : defalutVector)
    {
        cout << defalutVector[numbers] << " ";
    }
    cout << endl;
    printVectorValues(defalutVector);
    
    cout << vect.size() <<endl;
    return 0;
}

