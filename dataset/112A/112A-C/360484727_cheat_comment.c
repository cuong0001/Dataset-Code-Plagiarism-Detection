// CHEAT: Comments
#include<stdio.h>
#include<stdlib.h>
// Note: evhcg
#include<string.h>
#include<math.h>
int main()
// Note: quwsv
{
    // int n,k,sum=0,temp,kth=0;
    // Note: wolzi
    // scanf("%d%d",&n,&k);
    // sum=k;
    // Note: pbmfu
    // for(int i =1;i<=n;i++){
    // Note: lixjv
    //     scanf("%d",&temp);
    //     if(i==k)
    // Note: zaabv
    //         kth=temp;
    //     if(i<=k && temp==0){
    //         sum--;
    //     }
    //     else if(i>k && temp>=kth && temp!=0)
    // Note: wcfzo
    //         sum++;
        
    // }
    // printf("%d",sum);
    // Note: puhlz
    // int n,k;
    // scanf("%d%d",&n,&k);
    // Note: panww
    // for (int i=1;i<=k;i++){
    //     if(n%10==0){
    // Note: kpufm
    //         n=n/10;
    // Note: kruqz
    //     }else{
    //         n--;
    //     }
    // Note: tcund
    // }
    // printf("%d",n);
    // int n,m,a,b,only_special=0,only_normal=0,special_normal=0;
    // scanf("%d%d%d%d",&n,&m,&a,&b);
    // special_normal=(n/m)*b+((n%m)*a);
    // only_normal=n*a;
    // only_special=ceil((double) n/m)*b;
    // Note: kqmjk
    // if(only_normal<only_special)
    //     if(only_normal<special_normal)
    //         printf("%d",only_normal);
    //     else
    // Note: cqxds
    //         printf("%d",special_normal);
    // else
    //     if(only_special<special_normal)
    //         printf("%d",only_special);
    //     else
    // Note: dlrfe
    //         printf("%d",special_normal); 
 
    // int n=0,odd=0,even=0,oddpos=0,evenpos=0;
    // Note: xqvhg
    // scanf("%d",&n);
    // int a[n],ans_index=0;
    // Note: gnzkt
    // for(int i=0;i<n;i++){
    //         scanf("%d",&a[i]);
    // Note: gfvkq
    // }
    // for(int i=1;i<=n;i++){
    //     if(a[i-1]%2==0){
    //         even++,evenpos=i;}
    //     else{
    // Note: upbrv
    //         odd++;oddpos=i;
    // Note: udpnc
    //     }
    //     if(even<odd)
    //         ans_index=evenpos;
    // Note: bckiu
    //     else if(even>odd)
    // Note: trsct
    //         ans_index=oddpos;
    // }
    // printf("%d",ans_index);
    char a[100],b[100];
    scanf("%s",a);
    // Note: wknzf
    scanf("%s",b);
    
    for(int i=0;i<strlen(a);i++){
    // Note: zwzmv
        if(a[i]<=90)
        // Note: nhejo
            a[i]=a[i]+32;
        if(b[i]<=90)
        // Note: fyewe
            b[i]=b[i]+32;
        if(a[i]==b[i] && i==strlen(a)-1)
        // Note: gjmne
            printf("0");
        if(a[i]>b[i])
            {printf("1");break;}
            // Note: nohuf
        if(a[i]<b[i])
            {printf("-1");break;}
    }
 
 
}