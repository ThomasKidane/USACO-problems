/*
ID: thomast8
TASK: gift1
LANG: C++14
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n,m,p;
    map<string,int> bal;
    fin >> n;
    string s;
    string ord[n];
    for(int i=0;i<n;i++){
        fin>>s;
        ord[i]=s;
        bal[s]=0;
    }

    for(int i=0;i<n;i++){
        fin>>s>>m>>p;
        if(p!=0){
            bal[s]=bal[s]-m+(m%p);
        for(int x=0;x<p;x++){
            fin>>s;
            bal[s]+=(m/p);
        }
        } else {
            bal[s]+=m;
        }

    }

    for(int i=0;i<n;i++){
        fout<<ord[i]<<" "<<bal[ord[i]]<<"\n";
    }


    return 0;
}

