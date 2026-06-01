#include <bits/stdc++.h>

using namespace std;

/*class Animal
{
public :
    virtual void sound(){
        cout<<"General animal sound"<<endl;
    }
};

class dog : public Animal
{
public :
    void sound(){
        cout<<"Bow Bow"<<endl;
    }
};

int main()
{
    Animal* a = new dog;
    a->sound();
    return 0;
}*/

/*template<typename T, typename K>
auto sum(T a, K b){
    return a+b;
}
int main()
{
    cout<<sum(3,40.5);
    return 0;
}*/

/*auto sum(auto a, auto b){
    return a+b;
}
int main()
{
    cout<<sum(3,40.5);
    return 0;
}*/

/*void linearSearch(vector<int> &arr,int x)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == x)
        {
            arr[i] = -1;
        }
    }
}
int main()
{
    vector<int> arr(5);
    for(int i=0;i<arr.size();i++)
        cin >> arr[i];
    int target;
    cout<<"Enter the target : "<<endl;
    cin >> target;
    linearSearch(arr,target);
    for(int i : arr)
        cout<<i << " ";
    return 0;
}*/

/*int main()
{
    vector<int> a = {1,2,3,4,5};
    int l=0,r=a.size()-1;
    int target;
    cout<<"Enter the target : ";
    cin >> target;
    while(l<r)
    {
        int sum = a[l]+a[r];
        if(sum == target){
            cout<<l<<" "<<r;
            break;
        }
        else if(sum < target)
            l++;
        else
            r--;
    }
    return 0;
}*/

/*int main()
{
    vector<int> a = {4,6,3,7};
    int n = a.size(),cnt=0;
    sort(a.begin(),a.end());
    for(int k = n-1;k>=2;k--)
    {
        int i=0,j=k-1;
        while(i < j){
        if(a[i]+a[j] > a[k])
        {
            cnt += (j-i);
            j--;
        }
        else
            i++;
        }
    }
    cout<<cnt;
    return 0;
}*/

/*int main()
{
    vector<int> a = {2,7,11,15,6,3};
    int n = a.size(),cnt=0;
    int k;
    cin >> k;
    int maxi = 0, sum = 0;
    int l=0,r=0;
    while(r < a.size())
    {
        sum += a[r];
        while((r-l+1) > k)
        {
            sum -= a[l];
            l++;
        }
        maxi = max(maxi,sum);
        r++;
    }
    cout<<maxi;
    return 0;
}*/

/*int main()
{
    vector<int> a = {1,2,3,4,5};
    int k;
    cin >> k;
    k = k%a.size();
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
    for(int i : a)
        cout<<i<<" ";
    return 0;
}*/

int main()
{
    vector<int> a = {1,2,2,3,3,4,4,4,5,5,9,10};
    int i = 0;
    for(int j=1;j<a.size();j++)
    {
        if(a[i] != a[j])
        {
            i++;
            a[i] = a[j];
        }
    }
    for(int i : a)
            cout<<i<<" ";
    return 0;
}


