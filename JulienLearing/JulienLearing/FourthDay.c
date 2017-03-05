//
//  FourthDay.c
//  JulienLearing
//
//  Created by 赵亮 on 2017/3/2.
//  Copyright © 2017年 赵亮. All rights reserved.
//  第四天的练习

#include <stdio.h>
#include <string.h>

void printfArray(int*a,int n);
void printfArray(int*a,int n) ;

void scanfArray(int*a,int n);
void palindromeNum(); //判定用户输入的正整数是否为“回文数”，所谓“回文数”是指正读反读都相同的数。
void insertArray();    //  已有一个已排好序的数组，今输入一个数，要求按原来排序的规律将它插入数组中。
void test1();   //定义一个4×3的二维数组a，数组元素的值由键盘输入，输出其中的最大值及所在的行下标。
void test2(); //从键盘上输入一个5行5列的矩阵的各个元素的值，然后分别输出主对角线元素的最大值和辅对角线元素的最小值。
void test4();  //定义一个4行5列的矩阵，从键盘上给各个元素赋值，求四周元素的和。
void PascalTriangle(); //编写程序打印出以下的杨辉三角形(要求打印出10行),使它能得出正确的结果。
void PascalTriangleII();  //编写程序打印出以下的杨辉三角形(要求打印出10行),使它能得出正确的结果。
void test5(); // 给出以下形式数据，计算各行元素的最小值，并存入一个一维数组中。
void test6();  //编写程序将字符串中的内容按逆序输出,但不改变宇符串中的内容。例如,若字符串为abed,则应输出dcba。
void test7();  //void test6(){   编写程序分别统计字符串中大写字母和小写字母的个数。例如，
               //给字符串ss输入：AaaaBBbl23CCccccd(字符串中不要有空格)，则输出结果应为：        upper=5，lower=9。






int main(int argc, const char * argv[]) {
    // insert code here...
    

//    palindromeNum();
//    PascalTriangle();

    test7();

    

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
            if (max<a[i][j]) {
                max=a[i][j];
            }
            p=n;
            q=m;
        }
    
    
  }
    printf("二维数组中最大值的是：a[%d][%d]=%d\n",p,q,max);
    
}


void test2(){  //从键盘上输入一个5行5列的矩阵的各个元素的值，然后分别输出主对角线元素的最大值和辅对角线元素的最小值。
    
    
    int a[100][100]={0};
    int n=5;      //行
    int m=5;      //列
    int i,j,max,min;
    int p,q;      //所在的坐标  PXQ
    
    
    
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




}



void test3(){   //定义一个5行4列的矩阵，从键盘上给各个元素的值，要求四周元素值为1，其它元素值为0。

    
    int a[100][100]={0};
    int n=5;      //行
    int m=5;      //列
    int i,j,max,min;
    int p,q;      //所在的坐标  PXQ
    
    
    
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






}



void test4(){   //定义一个4行5列的矩阵，从键盘上给各个元素赋值，求四周元素的和。
    
    int a[100][100]={0};
    int n=4;      //行
    int m=5;      //列
    int i,j,sum=0;

    
    
    
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

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if((i==0)||(j==0)||(i==(n-1))||(j==(m-1)))
                sum=sum+a[i][j];
        }
        
    }
    
    
    
    printf("四周元素的和为:%d\n",sum);



}




void PascalTriangle(){  //编写程序打印出以下的杨辉三角形(要求打印出10行),使它能得出正确的结果。
    
    
    int i,j,n=0,a[17]={0,1},l,r;
    
    while(n<1 || n>16)
        
    { printf("请输入杨辉三角形的行数:");
        
        scanf("%d",&n);
        
    }
    
    for(i=1;i<=n;i++)
        
    { l=0;
        
        for(j=1;j<=i;j++)
            
        { r=a[j];
            
            a[j]=l+r; /*每个数是上面两数之和*/
            
            l=r;
            
            printf("%5d",a[j]); /*输出杨辉三角*/
            
        }
        
        printf("\n");
        
    }
}



    
    
    
    
    
    
//    void PascalTriangleII(){ //编写程序打印出以下的杨辉三角形(要求打印出10行),使它能得出正确的结果。
//        
//        int i,j,n=0,a[17][17]={0};
//        
//        while(n<1 || n>16)
//            
//        { printf("请输入杨辉三角形的行数:");
//            
//            scanf("%d",&n);
//            
//        }
//        
//        for(i=0;i<n;i++)
//            
//            a[i][0]=1; /*第一列全置为一*/
//        
//        for(i=1;i<n;i++)
//            
//            for(j=1;j<=i;j++)
//                
//                a[i][j]=a[i-1][j-1]+a[i-1][j];/*每个数是上面两数之和*/
//        
//        for(i=0;i<n;i++) /*输出杨辉三角*/
//            
//        { for(j=0;j<=i;j++)
//            
//            printf("%5d",a[i][j]);
//            
//            printf("\n");
//            
//        }
//        

        
        
        
//    }

    
    
//    void test5() {   // 给出以下形式数据，计算各行元素的最小值，并存入一个一维数组中。
//        
//        
//        
//        
//        return;
//    
//    

    
    
    
void test5(){    // 给出以下形式数据，计算各行元素的最小值，并存入一个一维数组中。
    
    int a[100][100]={0};
    int n=3;      //行
    int m=3;      //列
    int i,j,min,q=0;
    int b[100]={0};
    
    
    
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
    

    for (i=0; i<n; i++) {
        min=a[i][0];
        for (j=0; j<m; j++) {
            if(min>a[i][j])
                min=a[i][j];
        }
        b[q]=min;
        q++;
        printf("最小值%d\n",min);
    }

  




}
    





void test6(){   //编写程序将字符串中的内容按逆序输出,但不改变宇符串中的内容。例如,若字符串为abed,则应输出dcba。
    
    int i ,a;
        char c[50];
        printf("输入任何字符包括数字\n");
        gets(c);
        a=(int)strlen(c);//计算数组长度
        puts("倒序输出为：");
        for(i=a;i>=0;i--)
            printf("%c",c[i]);
        printf("\n");




}


void test7(){  //编写程序分别统计字符串中大写字母和小写字母的个数。
               //例如，给字符串ss输入：AaaaBBbl23CCccccd(字符串中不要有空格)，则输出结果应为：        upper=5，lower=9。

    int i ,a;
    int upper=0,lower=0;
    char c[50];
    printf("输入任何字符包括数字\n");
    gets(c);
    a=(int)strlen(c);//计算数组长度

    for(i=0;i<a;i++)
    {
        if((c[i]>='A')&&(c[i]<='Z'))
            upper++;
        
        if((c[i]>='a')&&(c[i]<='z'))
            lower++;
    
    
    }
    printf("upper=%d   ,     lower=%d\n",upper,lower);



}













