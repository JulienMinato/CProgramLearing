//
//  Shopping.c
//  CLearn
//
//  Created by 赵亮 on 2017/3/1.
//  Copyright © 2017年 赵亮. All rights reserved.
//  模拟购物

#include <stdio.h>
#include <stdlib.h>
#define SALARY 2000     //工资金额
#define BIGCAT 300       //大猫单价
#define SMALLCAT 200     //小猫单价
#define CROCODILE 500    //鳄鱼宝宝单价
#define NUM 5            //可以购买的总数量
void choice();
void display();
void  smallcat();
void  bbigcat();
void ccrocodile();
void returnMeau();


int N=0;//总数量
int S=0;//总金额
//int main()
//{
//
//
//    display();
//    choice();
//    returnMeau();
//    returnMeau();
//    returnMeau();
//
//
//
//
//
//    return 0;
//
//}

void display()    //显示模块
{
    printf("\t\t******************欢迎光临奥特莱斯购物广场***********************\n");
    printf("\t\t1>蓝脚小猫宠物店 今日出售英短小猫  单价：$%d\n",SMALLCAT);
    printf("\t\t2>蓝脚大猫宠物店 今日出售挪威大猫  单价：$%d\n",BIGCAT);
    printf("\t\t3>鳄鱼宝宝宠物店 今日出售非洲大鳄  单价：$%d\n",CROCODILE);
    printf("请从1-3中选择您想去的商店:（推出商场系统，轻按“0”）\n");
    printf("\n\n\n\n\n*************今日大促销，满两件打9折，满三件打8折，每人最多限购2件********\n");
    
    
    
    
}
void choice()
{
    int a;
    scanf("%d",&a);
    switch (a) {
        case 1:
            smallcat();
            break;
        case 2:
            bbigcat();
            break;
        case 3:
            ccrocodile();
            break;
            
        case 0:
            exit(0);
            break;
            
        default:
            printf("输入错误，不听话吧，不按照要求，系统瘫痪了吧！！！\n");
            break;
    }
}

void  smallcat()
{
    
    
    
    int snum;
    int ssum;
    printf("欢迎光临蓝脚小猫，请问您需要几个呢(但是最多购买三个哦！！！)\n");
    scanf("%d",&snum);
    
    switch (snum) {
        case 1:
            ssum=snum*SMALLCAT;
            break;
        case 2:
            ssum=snum*SMALLCAT*0.9;
            break;
        case 3:
            ssum=snum*SMALLCAT*0.8;
            break;
            
        default:
            printf("输入错误，不听话吧，不按照要求，系统瘫痪了吧！！！\n");
            exit(0);
            break;
    }
    if(((N+snum)<=NUM)&&((S+snum)<=SALARY) )
    {
        
        N=snum+N;
        S=ssum+S;
        
        printf("购物完成，您总共购买%d个小伙伴，原价：$%d,打折后$ %d\n",snum,snum*SMALLCAT,ssum);
    }
    
    else
    {
        printf("钱不够了，也带不走了，下次再来吧，回家！！！\n");
        printf("总共购买%d个小伙伴，总花费%d\n",N,S);
        exit(0);
        
    }
}

void  bbigcat()
{
    
    
    
    int snum;
    int ssum;
    printf("欢迎光临蓝脚大猫，请问您需要几个呢(但是最多购买三个哦！！！)\n");
    scanf("%d",&snum);
    switch (snum) {
        case 1:
            ssum=snum*BIGCAT;
            break;
        case 2:
            ssum=snum*BIGCAT*0.9;
            break;
        case 3:
            ssum=snum*BIGCAT*0.8;
            break;
            
        default:
            printf("输入错误，不听话吧，不按照要求，系统瘫痪了吧！！！\n");
            exit(0);
            break;
    }
    
    if(((N+snum)<=NUM)&&((S+snum)<=SALARY) )
    {
        
        N=snum+N;
        S=ssum+S;
        
        printf("购物完成，您总共购买%d个小伙伴，原价：$%d,打折后$ %d\n",snum,snum*BIGCAT,ssum);
    }
    
    else
    {
        printf("钱不够了，也带不走了，下次再来吧，回家！！！\n");
        printf("总共购买%d个小伙伴，总花费%d\n",N,S);
        exit(0);
        
    }}


void ccrocodile()
{
    
    
    int snum;
    int ssum;
    printf("欢迎光临鳄鱼宝宝，请问您需要几个呢(但是最多购买三个哦！！！)\n");
    scanf("%d",&snum);
    switch (snum) {
        case 1:
            ssum=snum*CROCODILE;
            break;
        case 2:
            ssum=snum*CROCODILE*0.8;
            break;
        case 3:
            ssum=snum*CROCODILE*0.8;
            break;
            
        default:
            printf("输入错误，不听话吧，不按照要求，系统瘫痪了吧！！！\n");
            exit(0);
            break;
    }
    
    if(((N+snum)<=NUM)&&((S+snum)<=SALARY) )
    {
        
        N=snum+N;
        S=ssum+S;
        
        printf("购物完成，您总共购买%d个小伙伴，原价：$%d,打折后$ %d\n",snum,snum*CROCODILE,ssum);
    }
    
    else
    {
        printf("钱不够了，也带不走了，下次再来吧，回家！！！\n");
        printf("总共购买%d个小伙伴，总花费%d\n",N,S);
        exit(0);
        
    }}

void returnMeau()
{
    int a;
    
    printf("是否继续购物，继续请按1，结束请按0\n");
    scanf("%d",&a);
    if (a==1) {
        display();
        choice();
    } else {
        printf("总共购买%d个小伙伴，总花费%d\n",N,S);
        exit(0);
    }
    
    
    
}





