#include <bits/stdc++.h>

using namespace std;

/*int main()
{
    unordered_map<int,string> mpp(5);
    vector<string> input = {"a","b","c","d","e"};
    for(string i : input)
        mpp[i] = i+1;
    for(auto it : mpp)
        cout << it.first << " " << it.second;
    return 0;
}*/

/*int main()
{
    unordered_map<char,int> mpp;
    mpp['I'] = 1;
    mpp['V'] = 5;
    mpp['X'] = 10;
    mpp['L'] = 50;
    mpp['C'] = 100;
    mpp['D'] = 500;
    mpp['M'] = 1000;
    string s = "LVIII";
    int n = s.size();
    int result = 0;
    for(int i=0;i<n-1;i++)
    {
        if(mpp[s[i]] < mpp[s[i+1]])
            result -= mpp[s[i]];
        else
            result += mpp[s[i]];
    }
    result += mpp[s[n-1]];
    cout<<result;
}*/

/*int main()
{
    vector<int> a = {};
    int k = ;
    int left=0, zeroes=0, maxi = INT_MIN;
    for(int right = 0; right < a.size(); right++)
    {
        if(nums[right] == 0)
            zeroes++;
        while(zeroes > k)
        {
            if(nums[left] == 0)
                zeroes--;
            left++;
        }
        maxi = max(maxi,right-left+1);
    }
    cout<<maxi;
    return 0;
}*/

/*int main()
{
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    int total = 0;
    int tank = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++) {
        int diff = gas[i] - cost[i];
        total += diff;
        tank += diff;
        if (tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }
    if(total >= 0)
        cout<<start;
    else
        cout<<-1;
    return 0;
}*/

/*int main()
{
    string a = "abcde";
    string b = "ace";
    int m = a.size();
    int n = b.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i-1] == a[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<dp[n][m];
    return 0;
}*/


/*int main()
{
    vector<int> ratings = {};
    int n = ratings.size();
    vector<int> candy(n,1);
    for(int i=1;i<n;i++)
    {
        if(ratings[i] > ratings[i-1])
            candy[i] = candy[i-1]+1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(ratings[i] > ratings[i+1])
            candy[i] = max(candy[i], candy[i+1]+1);
    }
    accumulate(candy.begin(),candy.end());
    for(int i : candy)
        cout<<i<<" ";
    return 0;
}*/

/*int main()
{
    vector<int> a = {100,4,200,1,3,2};
    unordered_set<int> st(a.begin(), a.end());
    int maxi = 0;
    for(int i : st)
    {
        if(st.find(i-1) == st.end())
        {
            int cur = i;
            int len = 1;
            while(st.find(cur + 1) != st.end())
            {
                len++;
                cur++;
            }
            maxi = max(maxi,len);
        }
    }
    cout<<maxi;
    return 0;
}*/

/*int main()
{
    vector<int> arr = {1,1,0,1,1};
    int left = 0, maxi = 0, zeroes = 0;
    for(int right = 0; right < arr.size(); right++)
    {
        if(arr[right] == 0)
            zeroes++;
        while(zeroes > 1){
            zeroes--;
            left++;
        }
        maxi = max(maxi,right - left + 1);
    }
    cout<< maxi ;
    return 0;
}*/

/*int main()
{
    vector<int> arr = {2,2,0,2};
    int el = -1, cnt = 0;
    for(int i : arr)
    {
        if(cnt == 0)
        {
            cnt = 1;
            el = i;
        }
        else if(i == el)
            cnt++;
        else
            cnt--;
    }
    cnt = 0;
    for(int i : arr)
    {
        if(el == i)
            cnt++;
    }
    if(cnt > arr.size()/2)
        cout<<el;
    else
        cout<<"No element found";
    return 0;
}*/

int main()
{
    string s = "PAYPALISHIRING";
    int i=0, sum = 0, row = 3;
    vector<string> v(row);
    for(auto ch : s)
    {
        if(i == row-1)
            sum -= 1;
        if(i == 0)
            sum = 1;
        s[i] += ch;
        i += sum;
    }
    string res = "";
    for(auto c : v)
        res += c;
    cout<<res;
    return 0;
}
