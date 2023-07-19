#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        int mask = (1<<(r - l + 1));
        mask--;
        mask = (mask <<( l - 1));
        mask = mask & y;
        x = x | mask;
        return x;
    }
};

int main() {
    Solution obj;
    int x, y, l, r;
    
    // Get inputs
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "Enter the starting index (l): ";
    cin >> l;
    cout << "Enter the ending index (r): ";
    cin >> r;
    
    // Call setSetBit function and print the result
    int result = obj.setSetBit(x, y, l, r);
    cout << "Modified x: " << result << endl;
    
    return 0;
}