//
//  ThirdDay.c
//  JulienLearing
//
//  Created by 赵亮 on 2017/3/5.
//  Copyright © 2017年 赵亮. All rights reserved.
//  第三天的练习

#include <stdio.h>





void printfArray(int*a,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    
    return;
    
}


//  打印一个菱形


void printfDiamond()
{


      int n,i,j,k;
        scanf("%d",&n);
        for(i=1;i<=2*n+1;i++)
        {     k=(int)abs(n+1-i);
            for(j=1;j<=k;j++)   printf(" ");
            for(j=1;j<=2*n+1-2*k;j++)   printf("*");
            printf("\n");

         }


}



void printfDiamond1()
{


        int i;
        for(i = 1; i < 10; i++)
        {
            printf("%*c\r%*c\n", 9 - abs(i - 5), '*', abs(i - 5) + 1, '*');
        }



}





void print(int n)
{
    int i,j,term;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            term=(j+i-n)%2;
            if((0==term)&&((j>=n-i)&&(j<=n+i)))
            {
                printf("%c",65+i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int printf1()
{
    int n;

    printf("please input the high of the letter tower:");
    scanf("%d",&n);

    if(n>26||n<1)
    {
        printf("error input!\n");
        return 0;
    }

    print(n);

    return 0;
}



void bubble(int *a,int n)  //冒泡
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





int swapNum()
{
    float a,b,t;
    
    printf("请输入");
    scanf("%f,%f",&a,&b);
    
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
        
    }
    
    printf("%5.2f,%5.2f\n",a,b);
    return 0;
    
    
}


//  输入星期，判断是什么类型
int switchTest()
{
    int a;
    
    printf("请输入今天是星期几，用数字表示\n");
    scanf("%d",&a);
    
    switch (a) {
        case 1:
            printf("你输入的是星期一，今天是工作日，您辛苦了\n");
            break;
        case 2:
            printf("你输入的是星期二，今天是工作日，您辛苦了\n");
            break;
        case 3:
            printf("你输入的是星期三，今天是工作日，您辛苦了\n");
            break;
        case 4:
            printf("你输入的是星期四，今天是工作日，您辛苦了\n");
            break;
        case 5:
            printf("你输入的是星期五，明天不上班，嗨起来\n");
            break;
        case 6:
            printf("你输入的是星期六，明天不上班，嗨起来\n");
            break;
        default:
            printf("你输入的是星期日，明天上班，您辛苦了\n");
            break;
    }
    
    
    
    return 0;
    
    
    
}


