#include <iostream>
using namespace std;

int main() {
    int n,max = 0,min = 4,sum = 0,maxId,minId;
    double avg;
    cin>>n;
    int tab[n];
    for(int i=0;i<n;i++){
        tab[i] = rand()%3;
        if (tab[i]>max){
            max = tab[i];
            maxId = i;
        }else if(tab[i]<min){
            min = tab[i];
            minId = i;
        }
        sum += tab[i];
    }
    avg = (double)sum/n;

    cout<<"Max: "<<max<<endl<<"Min: "<<min<<endl<<"Avg: "<<avg<<endl<<"MaxId: "<<maxId<<endl<<"MinId: "<<minId<<endl;


    return 0;
}