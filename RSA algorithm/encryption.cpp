#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int encryption (int m){
    int i;
    long long int e=3,n=33;

    long long int k=  pow(m,e);
    cout << k%n << ' ';

    return 0;
}
int main() {
		vector <char> alphabet = {'a','b','c','d','e','f',
		'g','h','i','j','k','l','m','n','o','p',
		'q','r','s','t','u','v','w','x','y','z',' ','.',',','!','?'};
        string m;
        getline(cin,m);
        int i,j=0;
        for (i=0;i<m.size();i++){
			while (m[i]!=alphabet[j]){
				j++;
				;
			}
        encryption (j);
        j=0;
    }
    return 0;
}
