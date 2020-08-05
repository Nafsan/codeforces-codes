    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,cnt=0,j=0;
        cin>>n;
        int ara[n+5];
        for(int i=0; i<n; i++)cin>>ara[i];
        sort(ara,ara+n);
        for(int i=0;i<n;i++)if(ara[i]==4)cnt++;

        int y=0,z=0;
        for(int i=0;i<n;i++)if(ara[i]==1)y++;
        for(int i=0; i<n; i++)if(ara[i]==2)j++;
        for(int i=0;i<n;i++)if(ara[i]==3)z++;
        cnt+=j/2;
        if(y>z){
            cnt+=z;
            y-=z;
            if(j%2!=0){
                if(y==1)cnt+=1,y--;
                else if(y>1)cnt+=1,y-=2;
            }
            if(y%4==0)y/=4;
            else y=(y/4)+1;
            cnt+=y;
        }
        else if(y==z){
            cnt+=z;
            if(j%2!=0)cnt++;
        }
        else{
            cnt+=y;
            z-=y;
            cnt+=z;
            if(j%2!=0)cnt++;
        }

        printf("%d\n",cnt);
    }