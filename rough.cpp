#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        unordered_map<char, priority_queue<long long>> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]].push(v[i]);
        }

        for (auto x : m)
        {
            x.second.pop();
        }
        /*for(auto x:m){
            cout<<x.first<<" ";
        while(x.second.empty()==false){
            cout<<x.second.top()<<" ";
            x.second.pop();
        }
        cout<<endl;
        }*/
        long long sum = 0;
        for (auto x : m)
        {
            int flag = 0;
            while (x.second.empty() == false)
            {
                if (flag == 1)
                {
                    sum += x.second.top();
                }
                x.second.pop();
                flag = 1;
            }
        }
        cout << sum << endl;
            
    }
}