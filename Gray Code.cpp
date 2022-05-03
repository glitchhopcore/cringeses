#include <bits/stdc++.h>
#define sz(x) (int)(x).size()
using namespace std;
int main(){
    int n; cin >> n;
    //generating all masks from 1 to 2^n
    for(int i = 0; i < (1 << n); i++){
        //create a bitset and cast it to a string using .to_string() so its easy to attenuate it to what the question demands
        string s = bitset<16>(i ^ (i >> 1)).to_string();
        //the general logic for finding gray code is to note that the t-th bit of n equals to 1 only if the i-th bit of n and (i+1)-th bit == 1 and 0 or 0 and 1
        //thus seek xor for Gray Code of n-th position, G(n) = n ^ (n>>1)
        cout << s.substr(sz(s)-(n), sz(s)) << '\n';
        //this is just to truncate the starting zeroes which developed because of the constraints
    }
}
