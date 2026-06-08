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

void reverseVector(vector<int> &vec){
    for (int i = 0, end= vec.size() - 1 ; i < vec.size()/2; i++)
    {
        swap(vec[i], vec[end - i]);
    }
    
    printVectorValues(vec);
}

void maximumSubArray(int arr[], int size){
    int currentSum = 0;
    int maxSum = 0;
    
    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum , maxSum);
        if (currentSum <= 0 )
        {
            currentSum = 0;
        }
        
    }
    cout << maxSum << endl;
    
}
int main(){
    int trailArr[] = {1,213,-1000,13,1900};
    vector <int> vect = {1, 2, 3, 4};
    // cout << "size (initial): " << vect.size() << endl;
    // vect.push_back(9);
    // vector <int> defalutVector(5,0);
   
    // // printVectorValues(defalutVector);
    // cout <<"size : " << vect.size() << "\n" << "After POP --->" << " "; //size of vector 
    
    // vect.pop_back();
    // printVectorValues(vect);
    // // cout << vect.front() << endl;
    // // cout << vect.back() << endl;
    // // cout << vect.at(1) << endl;
    // cout << vect.capacity() <<endl;
    // reverseVector(vect); 
    // printVectorValues(vect); // not changed like array for change use & (pass by refrence)
    maximumSubArray(trailArr, sizeof(trailArr) / sizeof(int));
   
    return 0;
}

