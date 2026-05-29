#include <bits/stdc++.h>

using namespace std;

/*int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=2*(5-i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main()
{
    int n = 123456;
    int sum = 0;
    while(n > 0)
    {
        int rem = n%10;
        sum = sum + rem;
        n /= 10;
    }
    cout<<sum;
    return 0;
}*/

/*int main()
{
    int a=1;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main()
{
    int n = 1221;
    int temp = n;
    int sum = 0;
    while(n > 0)
    {
        int rem = n%10;
        sum = sum*10 + rem;
        n /= 10;
    }
    if(temp == sum){
        cout<<"Palindrome";
        exit(0);
    }
    cout<<"Not a Palindrome";
    return 0;
}*/

/*string sum(string a,string b)
{
    return a+b;
}
int main()
{
    string a = sum("a","b");
    cout<<a;
    return 0;
}*/

int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}
