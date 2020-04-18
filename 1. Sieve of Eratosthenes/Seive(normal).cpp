#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
/*
    Modify this value to get primes until reqired limit.
    For larger questions try to keep this value below 1000000 since complexity of this Algorithm being O(n*log(log(n))).
*/
int limit = 100000;

void seive(){
    //First we declare a boolean array of visited numbers of size equal to limit and initailize it to zero.
    bool visited[limit]={0};
    //We start the below loop from 2,Since 2 is the lowest prime number.And run it till limit is reached.
    for(int i=2;i<limit;i++){
        //Now if the number is never visited it means it is a prime.
        if(!visited[i]){
            //We add the number to list of primes.
            primes.push_back(i);
            //Now for every multiple of this prime, we visit each of them.Hence they are excluded from the list of primes.
            for(int j=i;j<limit;j+=i){
                visited[j]=1;
            }
        }
    }
}

void print(){
    for(auto itr = primes.begin();itr!=primes.end();itr++){
        cout<<*itr<<" ";
    }
}

int main(){

    /*
    Call the function seive only once even for differrent test cases. Since there is no need to recalculate the same thing again and again.
    (This is concept of DP).
    */
    seive();

    print();
    return 0;
}
