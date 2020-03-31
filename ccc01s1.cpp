#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int i =0;
    cin >> str;
    cout << "Cards Dealt" << " Points" << endl;
    int num = 0;
    vector<int> suits = {0,0,0,0};
    for(char s : str){
        if(s=='C' || s=='D' || s=='H' || s=='S'){
        if(s=='C'){
            num =0;
            i=0;
            cout << "Clubs ";
        }
        if(s=='D'){
            if(num==0) suits[i]+=3;
            if(num==1) suits[i]+=2;
            if(num==2) suits[i]+=1;
            cout << " " << suits[i] << endl;
            num=0;
            i=1;
            cout << "Diamonds ";
        }
        if(s=='H'){
            if(num==0) suits[i]+=3;
            if(num==1) suits[i]+=2;
            if(num==2) suits[i]+=1;
            cout << " " << suits[i] << endl;
            num=0;
            i=2;
            cout << "Hearts ";
        }
        if(s=='S'){
            if(num==0) suits[i]+=3;
            if(num==1) suits[i]+=2;
            if(num==2) suits[i]+=1;
            cout << " " << suits[i] << endl;
            num=0;
            i=3;
            cout << "Spades ";
        }
        }
        else{
            cout << s << " ";
        num++;
        if(s=='A')
            suits[i]+=4;
        if(s=='K')
            suits[i]+=3;
        if(s=='Q')
            suits[i]+=2;
        if(s=='J')
            suits[i]++;
        }
    }
    if(num==0) suits[3]+=3;
    cout << suits[3] << endl;
    cout << "Total " << (suits[0]+suits[1]+suits[2]+suits[3]) << endl;
}
