#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    freopen("test.in","r",stdin);

    int n; cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        int run = 0;
        int score =0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'O')
            {
                run++;
                score+=run;
            } else run =0;
        }

        cout<<score<<endl;
    }
}
