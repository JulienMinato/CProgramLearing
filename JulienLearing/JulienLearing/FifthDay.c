//
//  FifthDay.c
//  JulienLearing
//
//  Created by 赵亮 on 2017/3/5.
//  Copyright © 2017年 赵亮. All rights reserved.
//  第五天的所有练习


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10
#define m 5




//给一个不多于5位数的正整数，求出是几位数，并逆序打印出个位数字



int isLowFive(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num=num/10;
    }
    return count;
}
void invertPut(int num)
{
    while(num)
    {
        printf("%d",num%10);
        num=num/10;
    }
    printf("\n");
}
int test1 ()
{
    int num;
    int flag;
    printf("please input a data:");
    scanf("%d",&num);
    flag=isLowFive(num);
    if(flag<=5)
    {
        printf("the number of the data is :%d\n",flag);
        invertPut(num);
    }
    else
        printf("input error\n");
    
    return 0;
}








//计算数组元素下标是奇数，元素是偶数的元素之和




int Sum(int num[])
{
    int *p=num;
    int sum=0;
    int count=0;
    int i;
    for(i=1;i<n;i+=2)
    {
        if(*(p+i)%2==0)
        {
            sum+=*(p+i);
            count++;
        }
    }
    printf("个数为：%d\n",count);
    return sum;
    
}
int test2 ()
{
    int num[n];
    int i;
    for (i=0;i<n;i++)
        num[i]=rand()%10+1;
    printf("the data are :\n");
    for (i=0;i<n;i++)
        printf("%d  ",num[i]);
    printf("\n");
    printf("the redult is :%d\n ",Sum(num));
    
    
    return 0;
}






//统计正负数及0的个数，并分别求出总和

void Count(int num[])
{
    int n1,n2,n0;
    int s1,s2,s0;
    int i;
    n1=n2=n0=0;
    s1=s2=s0=0;
    for(i=0;i<n;i++)
    {
        if(num[i]>0)
        {
            n2++;
            s2+=num[i];
        }
        else if(num[i]<0)
        {
            n1++;
            s1+=num[i];
        }
        else
        {
            n0++;
            s0+=num[i];
        }
    }
    printf("正数的个数为：%d,和为：%d\n",n2,s2);
    printf("负数的个数为：%d,和为：%d\n",n1,s1);
    printf("0的个数为：%d,和为：%d\n",n0,s0);
    
}

int test3 ()
{
    int num[n];
    int i;
    for (i=0;i<n;i++)
        num[i]=rand()%10-2;
    printf("the data are :\n");
    for (i=0;i<n;i++)
        printf("%d  ",num[i]);
    printf("\n");
    Count(num);
    
    
    return 0;
}




//统计文字中大写、小,空格、数字及其它字符的个数




void count(char *s)
{
    int i=0;
    int l=(int)strlen(s);
    int num[m];
    for(i=0;i<m;i++)
        num[i]=0;
    i=0;
    while(i<l)
    {
        if(s[i]>='A'&&s[i]<='Z')
            num[0]++;
        else if(s[i]>='a'&& s[i]<='z')
            num[1]++;
        else if(s[i]>='0'&& s[i]<='9')
            num[2]++;
        else if(s[i]==' ')
            num[3]++;
        else
            num[4]++;
        i++;
    }
    printf("大写，小写，数字，空格，其它字符的个数分别为：\n");
    for(i=0;i<m;i++)
        printf("%3d",num[i]);
    printf("\n");
    
}


int test4 ()
{
    char s[n];
    gets(s);
    puts(s);
    Count(s);
    return 0;
}




//通过调用函数fun求式子1-1/2-1/3-1/4-...1/m




//float fun(int m)
//{
//    float result=1;
//    int i;
//    for(i=2;i<=m;i++)
//        result-=(float)1/i;
//    return result;
//    
//}
//int test5 (void)
//{
//    int m;
//    float result;
//    printf("please input m:\n");
//    scanf("%d",&m);
//    result=fun(m);
//    printf("the result is %f\n",result);
//    return 0;
//}


//计算式子：1+1/(1+2)+1/(1+2+3)+...+1/(1+2+...+n)



//
//float fun(int n)
//{
//    float result=0;
//    int i;
//    int sum=0;
//    for(i=1;i<=n;i++)
//    {
//        sum+=i;
//        result+=(float)1/sum;
//    }
//    
//    return result;
//}
//int test6 ()
//{
//    int n;
//    float result;
//    printf("please input n:");
//    scanf("%d",&n);
//    result=fun(n);
//    printf("the result is :%f\n",result);
//    
//    return 0;
//}



//计算下列多项式的值：1+1/1!+1/2!+...+1/n!



//float fun(int n)
//{
//    float result=1;
//    int i;
//    int fac=1;
//    for(i=1;i<=n;i++)
//    {
//        fac=fac*i;
//        result+=(float)1/fac;
//    }
//    return result;
//}
//int main ()
//{
//    int n;
//    float result;
//    printf("please input n:");
//    scanf("%d",&n);
//    result=fun(n);
//    printf("the result is :%f\n",result);
//    
//    return 0;
//}


 //函数fun的功能是：
 //将s所指字符串中的字母转换为按字母序列的后继字母（单Z转换为A,z转换为a），其他字符不变。


//void fun(char *s)
//{
//    int i=0;
//    char *p=s;
//    while(*(p+i)!='\0')
//    {
//        if(*(p+i)>='a'&& *(p+i)<'z' || *(p+i)>='A' && *(p+i)<'Z')
//            *(p+i)=*(p+i)+1;
//        else if(*(p+i)=='z')
//            *(p+i)='a';
//        else if(*(p+i)=='Z')
//            *(p+i)='Z';
//        i++;
//    }
//    printf("the result:\n");
//    puts(s);
//}
//int test7 (void)
//{
//    char s[n];
//    printf("please input string:");
//    gets(s);
//    fun(s);
//    return 0;
//}


 //将一个字符串正序和反序进行拼接，形成一个新的字符串


//void fun(char *s)
//{
//    char t[2*n];
//    int i,j;
//    strcpy(t,s);
//    for (i=0,j=2*strlen(s)-1;i<j;i++,j--)
//        t[j]=s[i];
//    t[2*strlen(s)]='\0';
//    printf("the result are:");
//    puts(t);
//    
//    
//}
//int test8 ()
//{
//    char s[n];
//    printf("please input string:");
//    gets(s);
//    printf("the string are:");
//    puts(s);
//    fun(s);
//    return 0;
//}





//已知三个数据，通过调用max函数和min函数返回最大值和最小值




int Max(int num[])
{
    int max=num[0];
    int i;
    int temp;
    for(i=1;i<n;i++)
    {
        if(num[i]>max)
        {
            temp=num[i];
            num[i]=max;
            max=temp;
        }
    }
    
    return max;
}
int Min(int num[])
{
    int min=num[0];
    int i;
    int temp;
    for(i=1;i<n;i++)
    {
        if(num[i]<min)
        {
            temp=num[i];
            num[i]=min;
            min=temp;
        }
    }
    
    return min;
}
int test10 ()
{
    int num[n];
    int i;
    printf("please input %d datas:",n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    printf("the max is %d\n",Max(num));
    printf("the min is %d\n",Min(num));
    
    return 0;
}

