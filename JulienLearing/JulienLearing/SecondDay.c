//
//  SecondDay.c
//  JulienLearing
//
//  Created by 赵亮 on 2017/3/5.
//  Copyright © 2017年 赵亮. All rights reserved.
//  第二天的练习

#include <stdio.h>
#include <string.h>

#include <math.h>
#define PI 3.14


int addTest()   //编程实现计算 a+b功能的程序，由键盘输入两个整数，计算并输出两个整数的和。
{
    int a ,b;
    scanf("%d，%d",&a,&b);//由用户输入
    printf("%d",a+b);//a+b
    return 0;
}


void  ciacular()  //输入半径，计算圆的周长和面积
{
    float radius;
    scanf("%f",&radius);
    printf("圆的半径是：%g",radius);
    printf("圆的周长是：%g",2*radius*PI);
    printf("圆的面积是：%g",radius*radius*PI);



}


//  输入2个数字，并比较大小，并输出最大值


int max(int x,int y)
{
    int z;
    if (x>y) {
        z=x;
    } else {
        z=y;
    }
    return (z);
}

int test1()
{

    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d",c);
    return 0;
}



//  阶乘，累加的计算


void  test2()
{
    int i;
    int s=1;
    for(i=1;i<=5;i++)
        s=s*i;
    printf("%d",s);
    int a,b;
    int sum;
    a=5;
    b=5;


}

int acc(int a)
{
    int i;
    
    int sum=0;
    for(i=0;i<=a;i++)
        sum=sum+i;
    
    return sum;
    
}


int fac(int b)
{
    int i;
    int sum=1;
    
    for(i=1;i<=b;i++)
        sum=sum*i;
    
    return sum;
    
}


//  打印华氏温度和摄氏温度的转换

int test3()
{
    float c;
    float f;
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("%.2f\n",c);
    return 0;
}




//  读入一个字母，输出与之对应的ASCII码，输入输出都要有相应的文字提示


int test4()
{
    char latter;
    latter=getchar();
    printf("%d",latter);

    return 0;
}



//  编程实现计算a+b,a-b,a*b,a/b,a%b功能的程序由键盘输入两个整数，计算并输出。



int  operatorNum()
{
    float a=0,b=0,c=0;
    char d;
    printf("输入两个数:\n");
    scanf("%f%f",&a,&b);
    getchar();
    printf("选择算法:+,-,*,/，%%，\n");
    scanf("%c",&d);
    switch(d)
    {
        case'+':c=a+b;break;
        case'-':c=a-b;break;
        case'*':c=a*b;break;
        case'/':if(b>0) c=a/b;break;
        case'%':c=(int)a%(int)b;break;
    }
    printf("%g%c%g=%g\n",a,d,b,c);
    return 0;
}



//  编写一个程序，输出以下信息：
//  ******************************
//  ***   How do you do!   *******
//  ******************************


 int printPattern()
{

    printf(" ******************************\n"
           " ***   How do you do!   *******\n"
            " ******************************\n");
    return 0;
}


//  打印一个好看的图形，打印一个心形



int PrintPoint()
{
    float x,y,z,f;

    for(y=1.5f;y>-1.5f;y-=0.1f)
    {
        for(x=-1.5f;x<1.5f;x+=0.05f)
        {
            z=x*x+y*y-1;
            f=z*z*z-x*x*y*y*y;
            putchar(f<=0.0f?".:-=*#%@"[(int)(f*-8.0f)]:' ');
        }
        putchar('\n');
    }

    getchar();
    return 0;
}




 //输入一个三位的正整数，编程将该数的各位数字逆序输出。例如，输入258，则输出852。扩展，输入什么都逆序输出


int ReversedOrder()
{
    int i ,a;

    char c[50];
    printf("输入任何字符包括数字\n");
    gets(c);
    a=(int)strlen(c);//计算数组长度
    puts("倒序输出为：");
    for(i=a;i>=0;i--)
        printf("%c",c[i]);
    printf("\n");
    return 0;

}



//  有50个学生，要求将成绩在80分以上的学生的学号和成绩输出。
//  用ni代表第i个学生学号，gi表示第i个学生成绩
//  S1：1⇒i
//  S2：如果gi≥80，
//  则输出ni和gi，否则不输出
//  S3：i+1⇒i
//  S4：如果i≤50，返回到步骤S2，继续执行，否则，算法结束

#include <stdio.h>
#define NUM 5

//int main()
//{
//
//    eighth();
//    return 0;
//
//}

int eighth()
{
    struct stu
    {
        int sno;
        int so;
        
    }student[NUM]={
        {1,56},
        {2,78},
        {3,98},
        {4,67},
        {5,80}
        
    };
    int i;
    
    for(i=0;i<NUM;i++){
        if (student[i].so>=80) {
            printf("该学生的学号为：%d,成绩为%d\n",student[i].sno,student[i].so);
        } else {
            printf("");
        }
    }
    
    return 0;
    
    
}




//  判定2000—2500年中的每一年是否闰年，并将结果输出。
//  闰年的条件：
//  (1)能被4整除，但不能被100整除的年份都是闰年，如2008、2012、2048年
//  (2)能被400整除的年份是闰年，如2000年
//  不符合这两个条件的年份不是闰年
//  例如2009、2100年


int test5()
{
    int year;

    printf("请输入年份，按回车键继续\n");
    scanf("%d",&year);

    if((year%4==0&year%100!=0)||(year%400==0))
        printf("%d年是闰年\n",year);
    else
        printf("%d年不是闰年\n",year);
    return 0;

}






//给出一个大于或等于3的正整数，判断它是不是一个素数。
//所谓素数(prime)，是指除了1和该数本身之外，不能被其他任何整数整除的数
//例如，13是素数，因为它不能被2，3，4，…，12整除




int PrimeA( int m)
{
    
    int i;  // 循环次数
    int k;  // m 的平方根
    
    // 求平方根，注意sqrt()的参数为 double 类型，这里要强制转换m的类型
    k=(int)sqrt( (double)m );
    for(i=2;i<=k;i++)
        if(m%i==0)
            break;
    // 如果完成所有循环，那么m为素数
    // 注意最后一次循环，会执行i++，此时 i=k+1，所以有i>k
    if(i>k)
        printf("%d是素数。\n",m);
    else
        printf("%d不是素数。\n",m);
    return 0;
}


int PrimeB(int m)
{
    int a=0;  // 素数的个数
    
    for(int i=2;i<m;i++){
        if(m%i==0){
            a++;  // 素数个数加1
        }
    }
    if(a==0){
        printf("%d是素数。\n", m);
    }else{
        printf("%d不是素数。\n", m);
    }
    return 0;
    
}

//int main()
//{
//    int m;
//    printf("输入一个整数：");
//    scanf("%d",&m);
//    PrimeA(m);
//    PrimeB(m);
//    return 0;
//
//}




//  输入一个小写字母，编程将其转换为大写字母并输出



int testa()
{
    int a;

    a=getchar();

    printf("%c",a-32);
    return 0;

}


void scanfArray(int*a,int n)
{
    int i;
    printf("请分别输入数组元素的值，这是一个整形数组\n");
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
        
        
    }
    
    return ;
    
    
}








