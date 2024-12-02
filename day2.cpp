#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>
using namespace std;
bool increase(vector<int>&);
bool decrease(vector<int>&);
bool adjminus(vector<int>&);
int main()
{
    vector<vector<int>> reports;
    string line;
    int n;
    int c=0;
    cout<<"Enter the levels for each report untill you press ctrl+z to stop input\n";
    while(getline(cin,line))
    {
        vector<int> levels;
        stringstream level(line);
        while(level>>n)
        {
            levels.push_back(n);
        }
        reports.push_back(levels);
    }
    for(int i=0;i<reports.size();i++)
    {
        vector<int>& levels=reports[i];
        if((increase(levels)||decrease(levels))&&adjminus(levels))
        {
            c++;
        }
    }
    cout<<"no of safe levels are:"<<c;
    return 0;
}
bool increase(vector<int>& levels)
{
    for(int i=0;i<levels.size()-1;i++)
    {
         if(levels[i]>=levels[i+1])
        {
            return false;
        }
    }
    return true;
}
bool decrease(vector<int>& levels)
{
    for(int i=0;i<levels.size()-1;i++)
    {
         if(levels[i]<=levels[i+1])
        {
            return false;
        }
    }
    return true;
}
bool adjminus(vector<int>& levels)
{

    for(int i=0;i<levels.size()-1;i++)
    {
        int m=abs(levels[i]-levels[i+1]);
        if(m!=1 && m!=2 && m!=3)
        {
            return false;
        }
    }
    return true;
}