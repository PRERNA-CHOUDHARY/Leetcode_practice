//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
    void pushBottom(stack<int> &s,int y)
    {
        if(s.empty())
        {s.push(y);
            return ;
            
        }
     
           int x=s.top();
           s.pop();
           pushBottom(s,y);
           s.push(x);
       
    }
    void Reverse1(stack<int> &s){
        if(s.empty())
            return ;
       
           int x=s.top();
           s.pop(); 
           Reverse1(s);
           pushBottom(s,x);
           
       
    }
public:
    void Reverse(stack<int> &s){
        
           Reverse1(s);
           
           
       }
    
};


//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends