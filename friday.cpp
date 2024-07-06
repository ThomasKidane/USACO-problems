/*
ID: thomast8
TASK: friday
LANG: C++14
*/
#include <bits/stdc++.h>
using namespace std;

bool isLeap(int x){
    if(x%100!=0 && x%4==0) return true;
    else if(x%400!=0 && x%4==0) return false;
    else if(x%400==0) return true;
    else return false;
}

map<int,int> days={};


int main() {
    days.insert(pair<int, int>(1, 31));
days.insert(pair<int, int>(2, 28));
days.insert(pair<int, int>(3, 31));
days.insert(pair<int, int>(4, 30));
days.insert(pair<int, int>(5, 31));
days.insert(pair<int, int>(6, 30));
days.insert(pair<int, int>(7, 31));
days.insert(pair<int, int>(8, 31));
days.insert(pair<int, int>(9, 30));
days.insert(pair<int, int>(10, 31));
days.insert(pair<int, int>(11, 30));
days.insert(pair<int, int>(12, 31));
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n,s=0;
    int a[7]={0};
    int year=1900;
    fin >> n;
    for(int i=0;i<n;i++){
        for(int x=1;x<=12;x++){
            s=(s+12)%7;
            a[s]+=1;
            if(x==2 && isLeap(year)) {
                s=(s+17)%7;
            } else {
                s=(s+(days[x]-12))%7;
            }
        }
        year++;
    }

    for(int i=5;i<=6;i++){
        fout<<a[i]<<" ";
    }
    for(int i=0;i<=3;i++){
        fout<<a[i]<<" ";
    }
    fout<<a[4]<<"\n";

    return 0;
}

