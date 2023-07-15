//{ Driver Code Starts
//Initial template for C++
                                                                                                //HAS PASSED ALL THE TEST CASES  (1120 / 1120)
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
/* -----------------------------------------------------------------------------------------------------------------------------------------------
         int middleIndex = (sizeOfStack)/2;
        vector<int> vec;
        while(!s.empty()){                                                            // Passed (1120/1120)
            vec.push_back(s.top());                                                   // Total time taken  = 0.1s
            s.pop();
        }
        vec.erase(vec.begin()+middleIndex);
        for(int i = vec.size()-1;i>=0;i--){
            s.push(vec[i]);
        }
  ------------------------------------------------------------------------------------------------------------------------------------------------ */      
        int middleIndex = 0 ;
        vector<int> vec;
        while(middleIndex <= (sizeOfStack)/2){                                          // Passed (1120/1120)
            vec.push_back(s.top());                                                     // Total time taken = 0.09s
            s.pop();
            middleIndex++;
        }
        for(int i = vec.size()-2;i>=0;i--){
            s.push(vec[i]);
 //-------------------------------------------------------------------------------------------------------------------------------------------------
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends