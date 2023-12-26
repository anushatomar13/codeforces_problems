/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j,a[10001],b[10001];
cin>>n>>m;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<m;i++){
    cin>>b[i];
}
vector<int>v;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(a[i]==b[j]){
            v.push_back(a[i]);
        }
    }

}
for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    
    int n[10001];
    int m[10001];
    cin>>a>>b;

    for(int i=0;i<a;i++){
        cin>>n[i];
    }
    
    for(int i=0;i<b;i++){
        cin>>m[i];
    }
    vector<int> ans;
    //3571628
    //127
    //3 = 1x 2x 7x ..7=1x2x7
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(n[i]==m[j]){
                ans.push_back(n[i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


return 0;
}

