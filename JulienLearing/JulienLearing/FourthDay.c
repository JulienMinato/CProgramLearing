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
    

//    palindromeNum();
    



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

      int val; //存放待判断的数据
        int m;
        int sum = 0;
    
        printf("请输入您需要判断的数字：\n");
        scanf("%d",&val);
        m = val;
    
        /*这一块是核心代码块：
         由sum 不断的从输入的数中获取各位、十位、百位……为了得到反数，需要*10并加上下一位作为个位
         sum每更新一次，m值去掉最后一位同时更新
         */
        while (m)
        {
            sum = sum*10 + m%10;
            m /= 10;
        }
        if (sum == val)
            printf("Yes!\n");
        else
            printf("No!\n");
    
    

}




















