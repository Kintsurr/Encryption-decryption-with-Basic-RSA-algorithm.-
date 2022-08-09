#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> ricxvi;
vector <int> ramdenjer;

int kg(int fi,int e){

    long long int k = 1;
    while(((k*fi)+1)%e!=0){
        k++;

    }
     int d = ((k*fi) + 1)/e;
    return d;
}

int decryption (int c){
	vector <char> alphabet = {'a','b','c','d','e','f',
		'g','h','i','j','k','l','m','n','o','p',
		'q','r','s','t','u','v','w','x','y','z',' ','.',',','!','?'};
    int i, e=3;
    long int p=3, q=11;
    long long int n=p*q, fi=(p-1)*(q-1);
    long long int d = kg(fi,e);

            long long int k=pow(c,d);
            
    int m=k%n;
    
    cout << alphabet[m];

    return 0;
}
int main() {	
        int c;
        while(cin){
            cin>>c;
            decryption(c);
        }
    return 0;
}
