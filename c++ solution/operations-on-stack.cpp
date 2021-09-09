void insert(stack<int> &s,int x)
{
    s.push(x);
}

void remove(stack<int> &s)
{
    
    s.pop();
}

void headOf_Stack(stack<int> &s)
{
    int x= s.top();
    cout<<x<<" "<<endl; 
}

bool find(stack<int> s, int val)
{
    while(s.size())
    {
        if(s.top() == val)
            return true;
        s.pop();
    }
    return false;
}
