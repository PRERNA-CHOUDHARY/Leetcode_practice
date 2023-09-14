class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s)
        {
            if(st.empty() &&(i==')' || i==']' || i=='}'))
                return 0;
            else{
            if(i=='(' || i=='{' || i =='[')
                st.push(i);
            
            else if(i==')' && st.top()=='(' )
                st.pop();
            else if(i==']' && st.top()=='[' )
                st.pop();
            else if(i=='}' && st.top()=='{' )
                st.pop();
            else st.push(i);
            }
            
        }
        return st.empty();
                  
    }
};