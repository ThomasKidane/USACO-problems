/*
ID: thomast8
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;
    int aN[a.length()],bN[b.length()];
    for(int i=0;i<a.length();i++){
        aN[i]=int(a[i])-int('A')+1;
    }
    for(int i=0;i<b.length();i++){
        bN[i]=int(b[i])-int('A')+1;
    }
    int aM=1,bM=1;
    for(int i=0;i<a.length();i++){
        aM*=aN[i];
    }
    for(int i=0;i<b.length();i++){
        bM*=bN[i];
    }
    if(aM%47==bM%47)fout<<"GO\n";
    else fout<<"STAY\n";

    return 0;
}
