#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Compare
{
    public:
    bool operator () (long long int a, long long int b)
    { return a>b; }
};

long long int distance(long long int x, long long int y)
{ return x*x + y*y; }

int main()
{
    priority_queue <long long int, vector <long long int>, Compare> pq;
    vector <long long int> v;
    v.reserve(1000);
    long long int q, k, type, x, y, temp;
    cin >> q >> k;
    for (int i=0; i<q; i++)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> x >> y;
            pq.push(distance(x, y));
        }
        else
        {
            temp = k-1;
            while (temp--)
            {
                v.push_back(pq.top());
                pq.pop();
            }
            cout << pq.top() << endl;
            for (int i=0; i<v.size(); i++) pq.push(v[i]);
            v.clear();
        }
    }
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}
