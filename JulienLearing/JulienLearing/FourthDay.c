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
void insertArray();    //  已有一个已排好序的数组，今输入一个数，要求按原来排序的规律将它插入数组中。
void test1();   //定义一个4×3的二维数组a，数组元素的值由键盘输入，输出其中的最大值及所在的行下标。









int main(int argc, const char * argv[]) {
    // insert code here...
    

//    palindromeNum();
    

    test1();
    

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


void insertArray(){
//  已有一个已排好序的数组，今输入一个数，要求按原来排序的规律将它插入数组中。

    int a[100]={0}; //因为你要继续加入数据，所以数组不能定义成9，要大一些，至少应该是10
    int i;
    for(i=0;i<9;i++ ) //输入9个数，必须用循环，一句解决不了
        scanf("%d",&a[i]);
    
    int j,temp;
    for(i=0;i<8;i++) //完成排序
    {
        for(j=i+1;j<9;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    printf("input a number: " );
    scanf("%d", &temp );
    for(i=0;i<9;i++ ) //查找插入位置
    {
        if ( temp < a[i] )
            break;
    }
    for( j=8;j>=i;j-- ) //i后面的数后移
        a[j+1]=a[j] ;
    a[i]=temp; //插入数据到i位
    
    for( i=0;i<10;i++ ) //输出数组
        printf("%d ",a[i]);
    printf("\n");



}





void test1(){    //定义一个4×3的二维数组a，数组元素的值由键盘输入，输出其中的最大值及所在的行下标。


    int a[100][100]={0};
    int n=4;      //行
    int m=3;      //列
    int i,j,max;
    int p,q;      //最大值所在的坐标  PXQ
    
    
 
    printf("给二维数组 %d X %d 赋值，请输入：\n",n,m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("你输入的二维数组 %d X %d 为：\n",n,m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    
    max=a[0][0];
    
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (a[i][j]>a[i][j+1]) {
                max=a[i][j];
            }
            p=n;
            q=m;
        }
    
    
    }
    printf("二维数组中最大值的是：a[%d][%d]=%d\n",p,q,max);
    
}
