//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        int s = 0;
        int e = n-1;
        while(s<e){
            if(arr[s]<arr[e])
                e--;
            else
                s++;
            
        }
        return arr[s];
        // for(int i = 0;i<n;i++){
        //     if(arr[0]>arr[n]){
        //         arr.erase(arr.begin());
        //     }else{
        //         arr.erase(arr.end());
        //     }
        //     n= n-1;
        // }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.chocolates(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends