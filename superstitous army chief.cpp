#include <bits/stdc++.h>
using namespace std;

int main() {

         int N  ;
         cin>>N;

         int A[N];
         for(int i=0 ; i<N ; i++)
         {
             cin>>A[i];

         }


         int count_even = 0;
         int count_odd = 0;

         for(int i=0; i<N; i++)
         {

             if(A[i]%2==0){
             count_even++;
             }
             else
               {
                 count_odd++;
               }


         }

         if(count_even > count_odd)
         {
             cout<<"READY FOR BATTLE";
         }
         else
         {
             cout<<"NOT READY";

         }

         return 0;

}

