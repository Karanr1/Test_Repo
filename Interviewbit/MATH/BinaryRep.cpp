#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#define fo(i,l,r) for(int i=l;i< r;++i)
#define fi(i,r,l) for(int i=r;i>=l;--i)
#define pb push_back
#define po pop_back
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long int lli;
typedef unsigned long long int ulli;
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;
#define M 1000000007


int decToBinary(int n)
{
	stringstream ss;
	if(n == 0)
		return "0";

	while(n)
	{
		ss << n%2;
		n = n/2;
	}

	string ans = ss.str();

	for(int i = 0; i < ans.size()/2; i++){
        char temp = ans[i];
        ans[i] = ans[ans.size()-1-i];
        ans[ans.size()-1-i] = temp;
    }
    return ans;
}