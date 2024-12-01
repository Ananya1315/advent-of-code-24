#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    vector<int> l1;
    vector<int> l2;
    vector<int> l3;
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
    for(int i=0;i<l1.size();i++)
    {
        int c=0;
        for(int j=0;j<l2.size();j++)
        {
            if(l1[i]==l2[j])
            {
                c++;
            }
        }
        l3.push_back(c*l1[i]);
    }
    int sum=0;
    for(int val:l3)
    {
        sum=sum+val;
    }
    cout<<"Similairty score is "<<sum;
    return 0;
}