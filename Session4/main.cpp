#include <bits/stdc++.h>

using namespace std;

/*string substring(int l, int r, string s)
{
    string ans = "";
    for(int i=l;i<r;i++)
        ans += s[i];
    return ans;
}*/

/*bool emptystring(string s)
{
    return !s.size();
}*/

/*int find(string s, string target)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == target)
            return i;
    }
    return -1;
}*/

/*string append(string s, string newPart)
{
    return s+newPart;
}*/
/*int main()
{
    string s1;
    cout<<"Enter the string : "<<endl;
    getline(cin,s1);
    s1 = substring(0,9,s1);
    cout<<s1;
    return 0;
}*/

/*int main()
{
    string s1,s2= "";
    /*cout<<"Enter the string : "<<endl;
    getline(cin,s1);

    cout<<boolalpha<<emptystring(s2);
    return 0;
}*/

/*int main()
{
    cout<<append("Pranav","Raj");
    return 0;
}*/

/*int main()
{
    string s1;
    cout<<"Enter the string : "<<endl;
    getline(cin,s1);
    stringstream ss(s1);
    string word;
    while(ss >> word){
        continue;
    }
    cout<<word.size();
    return 0;
}*/

/*int main()
{
    string s1;
    cout<<"Enter the string : "<<endl;
    getline(cin,s1);
    reverse(s1.begin(),s1.end());
    stringstream ss(s1);
    string word,res= "";
    while(ss >> word){
        reverse(word.begin(),word.end());
        if(!res.empty())
            res += " ";
        res += word;
    }
    cout<<res;
    return 0;
}*/

/*int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    string t = s+s;
    int ans;
    ans = t.substr(1,t.size()-2).find(s) != string::npos;
    if(ans){
        cout<<"True";
        exit(0);
    }
    cout<<"False";
    return 0;
}*/

/*int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    unordered_set<int> st;
    int maxi = 0, left = 0;
    for(int right = 0;right < s.size(); right++)
    {
        while(st.count(s[right]))
        {
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        maxi = max(maxi, right-left+1);
    }
    cout<<"Longest substring without repeating charecters is : "<<maxi;
    return 0;
}*/


/*int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin, s);
    int i=0, j=s.size()-1;
    while(i < j)
    {
        while(i < j && !isalnum(s[i]))
            i++;
        while(i < j && !isalnum(s[j]))
            j--;
        if(tolower(s[i]) != tolower(s[j]))
        {
            cout<<"Not a Palindrome";
            exit(0);
        }
        i++;
        j--;
    }
    cout<<"Is a Palindrome";
    return 0;
}*/

int main()
{
    vector<string> s = {"flower","flow","flight"};
    sort(s.begin(),s.end());
    string first = s[0];
    string last = s[s.size()-1];
    int i = 0;
    while(i < first.size() && first[i] == last[i])
        i++;
    cout<<first.substr(0,i);
}
