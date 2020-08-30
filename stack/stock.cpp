vector <int> calculateSpan(int price[], int n)
{
   // Your code here
   stack<int>s;
   s.push(0);
   vector<int>v1;
   v1.push_back(1);
   for(int i=1;i<n;i++)
   {
      if(price[s.top()]>price[i])
    {
        v1.push_back(1);
        s.push(i);
    }
    else
    {
        while(!s.empty() && price[s.top()]<=price[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            v1.push_back(i+1);
            s.push(i);
        }
        else
        {
            v1.push_back(i-s.top());
            s.push(i);
        }
    }
   }
   return v1;
}
