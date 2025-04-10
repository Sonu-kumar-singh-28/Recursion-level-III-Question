// subsequence of string 

#include<iostream>
using namespace std;

void printsubsequence(string s, string output , int i)
{
    if(i>=s.length())
    {
        cout<<output << endl;
        return ;
    }
    cout<< s << endl;
    // esxclude
    printsubsequence(s,output,i+1);

    // include

    output.push_back(s[i]);
    printsubsequence(s,output, i+1);
}

int main()
{
    string s;
    cout<<"Enter the string values : ";
    getline(cin,s);

    string output ="";

    int i=0;
    printsubsequence(s,output,i);
}