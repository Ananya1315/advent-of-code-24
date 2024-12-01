#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    vector<int> l1;
    vector<int> l2;
    int num1,num2;
    cout<<"enter pair of numbers and enter any character to stop input and give result \n";
    while(cin>>num1>>num2)
    {
        l1.push_back(num1);
        l2.push_back(num2);
    }
    if (l1.size() != l2.size()) {
        cout << "size is not same\n";
        return 1;
    }
    vector<int> l3;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    for(int i=0;i<l1.size();i++)
    {
        l3.push_back(abs(l1[i]-l2[i]));
    }
    int sum=0;
    for(int val:l3)
    {
        sum=sum+val;
    }
    cout<<"Sum of differences is: "<<sum;
    return 0;
}