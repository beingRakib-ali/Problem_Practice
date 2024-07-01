
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int arr[26]={};
    int i;
    while (getline(cin,s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                arr[s[i]-'A']++;
            }
            else if (s[i]>='a' && s[i]<='z')
            {
                arr[s[i]-'a']++;
            }
            
            
        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<char(i+'a')<< " : "<<arr[i]<<endl;
    }
    


    return 0;
}