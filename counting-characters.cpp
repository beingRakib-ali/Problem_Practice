#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  int abc[26] = {};
  while(getline(cin,s)){
    for(int i = 0;i < s.size();i++){
      if(s[i]>='a'&&s[i]<='z') abc[s[i]-'a']++;
      else if(s[i]>='A'&&s[i]<='Z') abc[s[i]-'A']++;
    }
  }
  for(int i = 0;i < 26;i++){
    cout << (char)('a'+i) << " : " << abc[i] << endl;
  }
}
