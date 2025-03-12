#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define ll long long

ll a,b,p;

ll fast_power(ll a,ll b,ll p){
    ll r=1;
    a=a%p;
    while(b){
        if(b&1)r=r*a%p;
        b>>=1;
        a=a*a%p;
    }
    return r;
}

int main(){
    scanf("%lld%lld%lld",&a,&b,&p);
    printf("%lld^%lld mod %lld=%lld",a,b,p,fast_power(a,b,p));
}
