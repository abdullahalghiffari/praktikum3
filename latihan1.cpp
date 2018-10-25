#include<iostream>
using namespace std;
int main ()
{
    int i = 0;
    int max=0;
    int n,a;
    cout << "masukan jumblah bilangan:" ;
    cin >> n;

    for (i;i<n;i++) {
        cout << "masukan bilangan ke-" << i+1 << ":" ;
        cin >> a;

        if (max<a)
            max =a;
    }
    cout << "bilangan terbesar adalah: " << max << endl;
}
