#include <bits/stdc++.h>
#include <fstream>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define bs binary_search
using namespace std;
void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int main(){
	fast();	
    ll t;
    cin>>t;
    while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll ans=0;
		for(ll i=0;i<n;i++){
			ll m[2001];
			memset(m,0,sizeof(m));
			ll max=0;
			ll io;
			vector<ll> v;
			ll ui=0;
			ll f=0,jk=-1; 
			bool pra=true;
			for(ll j=i;j<n;j++){
				m[a[j]]++;
				if(max<a[j]){
					max=a[j];
				}
				ll p=j-i+1;
				
				if(p>=k){
					
				 
				  if(pra){	
					while(ui<k){
						ui+=m[f];
						f++;
					}
					f--;
					ui=ui-m[f];
					jk=k-ui;
					//cout<<f;
					pra=false;
				}
				    else{
						if(a[j]<f){
							jk--;
						}
						if(jk==0){
							f--;
							while(m[f]==0){
								f--;
							}
							jk=m[f];
						}
					}  
					
					
				    io=f;
					if(m[m[io]]>0){
						ans++;
					}
				
				}
				else{
			        if(pra){
						sort(v.begin(),v.end());
						pra=false;
					}
					 v.pb(a[j]);
					 if(v.size()>3){
					 for(ll i=v.size()-2;i>=0;i--){
						 if(v[i+1]<v[i]){
							 ll temp=v[i];
							 v[i]=v[i+1];
							 v[i+1]=temp;
						 }
						 else{
							 break;
						 }
					 }
				   }
				   else{
					   sort(v.begin(),v.end());
				   }
					 ll wer=k/p;
					 if(k%p!=0)
					    wer++;
					 io=k/wer;
					 if(k%wer!=0){
						 io++;
					 }
					 io=v[io-1];
					if(m[m[io]]>0){
						ans++;
					}
				}
			}
			
			
		}
		cout<<ans<<"\n";
	}
}
