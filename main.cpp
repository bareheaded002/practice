#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int group[3];
    srand((int)time(NULL));
    do{
            for (int i=0;i<3;++i){
                group[i]=rand()%10;
            }
    }while(group[0]==group[1]||group[1]==group[2]||group[0]==group[2]);
    for(int k=7;k>0;--k){
    cout<<"请输入你猜测的数字（还有"<<k<<"次机会）：";
    int A=0,B=0;
    int player[3];

    for (int l=0;l<3;++l)
    cin>>player[l];
        for(int j=0;j<3;++j){
            for (int l=0;l<3;++l){
                if(j!=l&&group[j]==player[l]){
                    B++;
                    continue;
                }
                if(group[j]==player[l]&&j==l){
                    A++;
                    B++;
                }
            }
        }
        if(A==3&&B==3) {
            cout<<"你猜对了";
            break;
        }
        cout<<A<<'A'<<B<<'B'<<endl;
        A=0;
        B=0;
        if(k==1){
        cout<<"很遗憾，你没有在规定次数内猜对。答案是";
        for (int p=0;p<3;++p)
            cout<<group[p]<<' ';
        }
    }
    return 0;
}

