#include<bits/stdc++.h>
using namespace std;

class Arrayqueue{
    private:
        int * arr ;
        int start , end ;
        int currsize , maxsize ;
    public :
        Arrayqueue(){
            arr= new int[10];
            int start=-1;
            int end = -1;
            int currsize=0;
            int maxsize=10;
        }
        
        void(push(int x)){
            if(currsize==maxsize){
                cout << "queue is not applicable" <<  endl ;
                exit(1) ;
            }
            if(end==-1){
                start=0;
                end=0;
            }
            else{
                end=(end+1)%maxsize;
            }
            arr[end]=x;
            currsize++;
        }
    
};