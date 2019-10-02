#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    string name;
    long phn;
    cin >> n;
    cin.ignore();
    map<string,long> pb;
    for (int i = 0;i<n;i++){
        cin >> name >> phn;
        pb[name] = phn;
    }
    while(cin >> name) {
        if (pb.find(name) != pb.end()) {
            cout << name << "=" << pb.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

