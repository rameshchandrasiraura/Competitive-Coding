#include<bits/stdc++.h>
using namespace std;

int main(){
    srand (time(NULL));
    int t=1+rand()%50; printf("%d\n",t);
    while(t--){

        int n=1+rand()%10;
        for(int i=0;i<n;i++){
            printf("%d",rand()%2);
        }
        printf("\n");
    }
}
