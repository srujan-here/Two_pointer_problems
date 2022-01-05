#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,target;
    cin>>a>>target;
    int b[a];
    for(int i=0;i<a;i++){                                   //O(N)
    cin>>b[i];
    }
    sort(b,b+a);                                            //O(NlogN)
    bool sru=false;
    for(int i=0;i<a;i++){
        int low=i+1,high=a-1;
        while(low<high){
        int present=b[i]+b[low]+b[high];                      //O(N*N)

            if(present==target){
                sru=true;

            }
            if(present<target){
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    if(sru){
        cout<<"true"<<endl;
    }
    else
    cout<<"false"<<endl;
}