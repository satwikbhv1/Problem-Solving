#include<bits/stdc++.h>

#define ll long long

#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)

#define mp make_pair
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front

#define dki deque <ll>
#define dkc deque <char>

#define vi vector<ll>
#define vc vector<char>
#define vpi vector<pair<ll,ll>> 
#define vpc vector<pair<char,char>> 
#define vpic vector<pair<ll,char>> 
#define vpci vector<pair<char,ll>> 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    //fast();
    ll n;
    cin>>n;
    ll a[n*n];
    ll res[n][n];
    fr(i,0,n*n)
    {
		cin>>a[i];
	}
	sort(a,a+n*n);
	if(n%2!=0)
	{
		ll cnt=1,cnt1=0,cnt2=0,cnt3=0;
		ll arr1[(ll)pow(((n-1)/2),2)],arr2[n-1],arr3[1];
		//cout<<"b";
		fr(i,1,(n*n)+1)
		{
			if(i==(n*n)||a[i]!=a[i-1])
			{
				while(cnt>=4&&cnt1<(ll)pow((ll)((n-1)/2),2))
				{
					//cout<<"1 "<<i<<" "<<cnt<<"\n";
					//cout<<"a "<<cnt<<" ";
					arr1[cnt1]=a[i-1];
					cnt1++;
					cnt-=4;
					//cout<<i-1<<" "<<cnt<<" ";
				}
				while(cnt>=2&&cnt2<n-1)
				{
					//cout<<"2 "<<i<<" "<<cnt<<"\n";
					//cout<<"b "<<cnt<<" ";
					arr2[cnt2]=a[i-1];
					cnt2++;
					cnt-=2;
					//cout<<i-1<<" "<<cnt<<" ";
					//cout<<i<<" ";
				}
				if(cnt==1&&cnt3==0)
				{
					//cout<<"3 "<<i<<" "<<cnt<<"\n";
					//cout<<"c "<<cnt<<" ";
					arr3[cnt3]=a[i-1];
					cnt3++;
					cnt-=1;
					//cout<<i-1<<" "<<cnt<<" ";
				}
				else if(cnt3>1)
				{
					cout<<"NO";
					return 0;
				}
				cnt=1;
			}
			else
			{
				//cout<<"4 "<<i<<" "<<cnt<<"\n";
				cnt++;
			}
		}
		//cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<(ll)pow((ll)((n-1)/2),2)<<" "<<n-1<<"\n";
		if((cnt1==(ll)pow((ll)((n-1)/2),2))&&(cnt2==n-1)&&(cnt3==1))
		{
			cout<<"YES"<<"\n";
			cnt1=0,cnt2=0;
			fr(i,0,n/2)
			{
				fr(j,0,n/2)
				{
					res[i][j]=arr1[cnt1];
					res[n-1-i][j]=arr1[cnt1];
					res[i][n-1-j]=arr1[cnt1];
					res[n-1-i][n-1-j]=arr1[cnt1];
					cnt1++;
				}
			}
			fr(i,0,n/2)
			{
				res[i][n/2]=arr2[cnt2];
				res[n-1-i][n/2]=arr2[cnt2];
				cnt2++;
			}
			fr(i,0,n/2)
			{
				res[n/2][i]=arr2[cnt2];
				res[n/2][n-1-i]=arr2[cnt2];
				cnt2++;
			}
			res[n/2][n/2]=arr3[0];
			fr(i,0,n)
			{
				fr(j,0,n)
				{
					cout<<res[i][j]<<" ";
				}
				cout<<"\n";
			}
			return 0;
		}
		cout<<"NO";
	}
	else
	{
		ll cnt=1,cnt1=0;
		ll arr1[(ll)pow((ll)(n/2),2)];
		fr(i,1,(n*n)+1)
		{
			if(i==(n*n)||a[i]!=a[i-1])
			{
				while(cnt>=4&&cnt1<(ll)pow((ll)(n/2),2))
				{
					//cout<<"1 "<<i<<" "<<cnt<<"\n";
					arr1[cnt1]=a[i-1];
					cnt1++;
					cnt-=4;
				}
				if(cnt!=0)
				{
					cout<<"NO";
					return 0;
				}
				cnt=1;
			}
			else
			{
				//cout<<"2 "<<i<<" "<<cnt<<"\n";
				cnt++;
			}
		}
		//cout<<"\n"<<cnt1<<" "<<(ll)pow((ll)(n/2),2);
		if(cnt1==(ll)pow((ll)(n/2),2))
		{
			cout<<"YES"<<"\n";
			ll cnt1=0;
			fr(i,0,n/2)
			{
				fr(j,0,n/2)
				{
					res[i][j]=arr1[cnt1];
					res[n-1-i][j]=arr1[cnt1];
					res[i][n-1-j]=arr1[cnt1];
					res[n-1-i][n-1-j]=arr1[cnt1];
					cnt1++;
				}
			}
			fr(i,0,n)
			{
				fr(j,0,n)
				{
					cout<<res[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		else
		{
			cout<<"NO";
		}
	}
}
