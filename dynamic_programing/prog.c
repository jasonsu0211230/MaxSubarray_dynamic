//
//  main.c
//  project3
//
//  Created by 蘇振瑋 on 2016/5/10.
//  Copyright © 2016年 蘇振瑋. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
int max(int a,int b){
    if(a>=b)return a;
    else return b;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10000];
    int sol[10000];
    int n=0;
    int len=0;
    int j=0;
    while(scanf("%d",&a[n])){
        if(a[n]==120)break;
        n++;
    }
    len=n;
    sol[0]=0;
    for(j=1;j<=n;j++){
        sol[j]=max(sol[j-1]+a[j-1],a[j-1]);
    }
    int result =sol[0];
    for(j=1;j<=n;j++){
        if(result<sol[j])
            result=sol[j];
    }
    printf("%d",result);
    
    
    
    return 0;
}
