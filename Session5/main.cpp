#include <bits/stdc++.h>

using namespace std;

/*class Queue
{
public :
        vector<int> q;
        void push(int val)
        {
            q.push_back(val);
        }
        void pop()
        {
            if(q.empty())
                cout<<"Queue Underflow";
            q.erase(q.begin());
        }
};

int main()
{
    Queue q;
    int val;
    for(int i=0;i<5;i++)
    {
        cin >> val;
        q.push(val);
    }
    q.pop();
    for(int i : q)
        cout << i << " ";
    return 0;
}*/

/*int main()
{
    vector<int> students = {1,1,1};
    vector<int> sandwiches = {0,1,1};
    int zero = 0, one = 0;
    for(int i : students)
    {
        if(i == 0)
            zero++;
        else
            one++;
    }
    for(int i : sandwiches)
    {
        if(i == 0)
        {
            if(zero == 0)
                cout<<one;
            zero--;
        }
        else
        {
            if(one == 0)
                cout<< zero;
            one--;
        }
    }
    return 0;
}*/

/*int main()
{
    vector<int> a = {1,2,3,0,0,0};
    vector<int> b = {2,5,6};
    int i=2,j=2,k=5;
    while(i>=0 && j>=0)
    {
        if(a[i] >= b[j])
        {
            a[k--] = a[i--];
        }
        else
        {
            a[k--] = b[j--];
        }
    }
    while(j >= 0)
    {
        a[k--] = b[j--];
    }
    for(int i : a)
        cout << i << " ";
    return 0;
}*/

/*int main()
{
    string haystack = "abcdef";
    string needle = "ef";
    if(haystack.find(needle) <= haystack.size()-1){
        cout<<haystack.find(needle);
        exit(0);
    }
    cout<<"Not Found";
    return 0;
}*/

/*int main()
{
    vector<int> container = {1,2,3,4,5};
    int l=0,r=container.size()-1,maxArea = 0;
    while(l < r)
    {
        int area = min(container[l],container[r]) * (r-l);
        maxArea = max(maxArea, area);
        if(container[l] > container[r])
            r--;
        else
            l++;
    }
    cout<<"Container with most water : "<<maxArea;
    return 0;
}*/

/*int main()
{
    vector<string> s = {"flower","flow","flight"};
    sort(s.begin(),s.end());
    string first = s[0];
    string last = s[s.size()-1];
    int i = 0;
    while(i < first.size() && first[i] == last[i])
        i++;
    cout<<first.substr(0,i);
}*/

/*class Stack{
public :
    vector<int> st;
    void push(int val)
        st.push_back(val);
    void pop()
    {
        if(!st.empty())
            st.pop_back();
    }
};*/

/*int main()
{
    string parenthesis = "([]) ";
    stack<int> st;
    for(char c : parenthesis)
    {
        if(c == '(' || c == '{' || c == '[')
                st.push(c);
        else
        {
            if(st.empty()){
                cout<<"False";
                exit(0);
            }
            char t = st.top();
            st.pop();
            if((c == ')' && t != '(') || (c == '[' && t != ']') || (c == '}' && t != '{'))
            {
                cout<<"False";
            }
        }
    }
    if(st.empty())
        cout<<"True";
    else
        cout<<"False";
    return 0;
}*/

int main()
{
    vector<string> token = {"2","1","+","3","*"};
    stack<int> st;
    for(string c : token)
    {
        if(c == "+" || c == "-" || c == "*" || c == "/")
        {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if(c == "+")
                st.push(a+b);
            else if(c == "-")
                st.push(a-b);
            else if(c == "*")
                st.push(a*b);
            else
                st.push(a/b);
        }
        else
            st.push(stoi(c));
    }
    cout<<st.top();
    return 0;
}
