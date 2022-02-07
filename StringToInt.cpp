#include <iostream>

using namespace std;

int stringToInt(string s, int n){
    if(n==0)
        return 0;
    int digit = s[n-1]-'0';
    int small_ans = stringToInt(s,n-1);
    return small_ans*10 + digit;
}

int main() {
    string s;
    cin>>s;
    int l=s.length();
    cout<<stringToInt(s,l);
    return 0;
}