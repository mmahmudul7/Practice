#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long max_katryoshkas = 0;

    // Option 1: এক চোখ, এক মুখ এবং এক শরীর দিয়ে Katryoshka তৈরি করা।
    long long type3 = min({n, m, k});
    max_katryoshkas += type3;
    n -= type3;
    m -= type3;
    k -= type3;

    // Option 2: দুই চোখ, এক মুখ এবং এক শরীর দিয়ে Katryoshka তৈরি করা।
    long long type2 = min({n / 2, m, k});
    max_katryoshkas += type2;
    n -= type2 * 2;
    m -= type2;
    k -= type2;

    // Option 3: দুই চোখ এবং এক শরীর দিয়ে Katryoshka তৈরি করা।
    long long type1 = min(n / 2, k);
    max_katryoshkas += type1;
    n -= type1 * 2;
    k -= type1;

    cout << max_katryoshkas << endl;

    return 0;
}
