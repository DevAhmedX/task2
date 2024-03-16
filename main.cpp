#include <bits/stdc++.h>
using namespace std;

bool print(int n) {
   if (n <= 1  )
    {
     return false ;
   }

       for (int i = 2; i <= sqrt(n); i++)
        {
        if(n % i == 0){
            return false ;
        }
       }

    return true;
}

int main() {
    long long n;
    cin >> n;
  if (print(n)) {
        cout << "YES " << endl;
    } else {
        cout << "NO " << endl;
    }
    return 0;
}
