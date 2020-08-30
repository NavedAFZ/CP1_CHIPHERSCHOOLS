class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)
        {
            return 0;
        }
        if(s.size()==0)
            return 1;
        stack<char>s1;
        for(int i=0;i<s.size();i++)
        {

            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                s1.push(s[i]);
                continue;
            }
            if(s1.empty())
            {
                    return 0;
            }
            else
            {
                if(s[i]=='}')                 {
                char c=s1.top();
                if(c!='{')
                    return 0;
                else
                    s1.pop();
                }
                else if(s[i]==']') //|| s[i]==']' || s[i]==')')
                {
                char c=s1.top();
                if(c!='[')
                    return 0;
                else
                    s1.pop();
                }
                if(s[i]==')') //|| s[i]==']' || s[i]==')')
                {
                char c=s1.top();
                if(c!='(')
                    return 0;
                else
                    s1.pop();
                }
            }
        }
        if(s1.empty())
            return 1;
        else
            return 0;
    }
};
