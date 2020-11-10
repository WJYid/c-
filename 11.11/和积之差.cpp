#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mul = 1;
    int sum = 0;
    while (n != 0) 
    {
        mul *= n % 10;
        sum += n % 10;
        n /= 10;
    }
    cout << "ºÍ»ýÖ®²î£º" << mul - sum << endl;
    system("pause");
    return 0;
}
