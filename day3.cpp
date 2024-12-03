#include<iostream>
#include<regex>
#include<string>
using namespace std;
int mul(int, int);
int main()
{
    string input;
    int x, y;
    int sum = 0;
    while(getline(cin,input))
    {
    regex pattern("mul\\((\\d+),(\\d+)\\)");
    smatch out;
    while (regex_search(input, out, pattern)) 
    {
        x = stoi(out[1].str());
        y = stoi(out[2].str());
        sum += mul(x, y);
        input = out.suffix().str();
    }
    }
    cout << sum;
    return 0;
}
int mul(int x, int y)
{
    return x * y;
}
