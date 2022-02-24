#include<iostream>
using namespace std;
int main()
{
    int N,i,temp,odd=1,even=0;
    cin>>N;
    for(i=1;i<=N;i++){
        if(i%2!=0){temp=0;
       
        
        }
        else if(i%2==0){
       temp=3;
        
    }
    //odd even loop
    if(temp==0){
for(odd=0;odd<i;odd++){
    cout<<(2*odd)+1<<" ";
}cout<<endl;
}
if(temp==3){
    for(even=1;even<=i;even++){
        cout<<(2*even)<<" ";
    }cout<<endl;
}
 
    }}



