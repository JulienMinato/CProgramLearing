//
//  FourthDay.c
//  JulienLearing
//
//  Created by 赵亮 on 2017/3/2.
//  Copyright © 2017年 赵亮. All rights reserved.
//  第四天的练习

#include <stdio.h>


void printfArray(int*a,int n);
void printfArray(int*a,int n) ;

void scanfArray(int*a,int n);
void palindromeNum(); //判定用户输入的正整数是否为“回文数”，所谓“回文数”是指正读反读都相同的数。









int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    



}






void printfArray(int*a,int n)  //打印数组
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    
    
    
}




void bubble(int *a,int n)  //冒泡排序
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++) /*注意循环的上下限*/
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


void scanfArray(int*a,int n){

    int i;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }



}


void palindromeNum(){
    //判定用户输入的正整数是否为“回文数”，所谓“回文数”是指正读反读都相同的数。

    



}


