#include <bits/stdc++.h>
using namespace std;

int eulerTotient(int n)
{
    int count = n;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            count = count - count / i;
            
            while(n % i == 0){
                n /= i;
            }
        }
    }
    
    if(n > 1){
        count = count - count / n;
    }
    
    return count;
}

int main()
{
    int n; cin >> n;
    cout << eulerTotient(n);

    return 0;
}
