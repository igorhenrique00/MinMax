#include <iostream>

using namespace std;
void MinMax(int *data,int *mi,int *ma){
    *mi = data[0];
    *ma = data[0];

    for(int i=1; i<10; i++){
        if(data[i] < *mi){
            *mi = data[i];
        }
        else(data[i] > *ma){
            *ma = data[i];
        }
    }
}
int main()
{
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    int mi,ma;
    MinMax(data,&mi,&ma);
    cout<<"Valor minimo: "<<mi<<endl;
    cout<<"Valor maximo: "<<ma<<endl;
    return 0;
}
