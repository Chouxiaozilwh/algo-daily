#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1"<<endl;return 0;
    }
    else if(n==2){
        cout<<"2"<<endl;return 0;
    }
    int a[5003]={0},b[5003]={0},c[5003]={0};//��a��b��c��������������
    int len_c=1;//�߾�����ӣ�Ȼ����ơ�
    a[1]=1;
    b[1]=2;
    for(int i=3;i<=n;i++){           
        for(int j=1;j<=len_c;j++)
        c[j]=a[j]+b[j];//���
        for(int j=1;j<=len_c;j++)//��λ
        {
            if(c[j]>9)//����9��λ
            {
                c[j+1]+=c[j]/10;
                c[j]%=10;
                if(j+1>len_c)
                len_c++;
            }
        }
        for(int i=1;i<=len_c;i++){
            a[i]=b[i];
        }
        for(int i=1;i<=len_c;i++){
            b[i]=c[i];
        }
    }
    for(int i=len_c;i>0;i--){
        cout<<c[i];
    }   
    return 0;
}