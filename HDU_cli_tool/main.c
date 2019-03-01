//
//  main.c
//  HDU_cli_tool
//
//  Created by John Wu on 2019/3/1.
//  Copyright © 2019 John Wu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <time.h>

//获取当前时间安排
char* timeSchedule(){
    
    //获取当前时间
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    
    char** className = {"预备铃", "第一节", "第二节", "第三节", "第四节", "第五节", "预备铃", "第六节", "第七节", "第八节", "第九节", "预备铃", "第十节", "第十一节", "第十二节"};
    int** classTime = {
        {0, 0, 0, 0},
        {8, 5, 8, 50},      //1
        {8, 55, 9, 40},     //2
        {10, 0, 10, 45},    //3
        {10, 50, 11, 35},   //4
        {11, 40, 12, 25},   //5
        {12, 25, 13, 30},
        {13, 30, 14, 15},   //6
        {14, 20, 15, 05},   //7
        {15, 15, 16, 00},   //8
        {16, 05, 16, 50},   //9
        {16, 50, 18, 30},
        {18, 30, 19, 15},   //10
        {19, 20, 20, 05},   //11
        {20, 10, 20, 55},   //12
    };
    
    struct timeString{
        char year[10];
        char month[8];
        char day[8];
    };
    
    char* result = "";
    
    return result;
}

//TODO:时间格式化函数


int main(int argc, const char * argv[]) {
    //printf("%s", timeSchedule());
    
    time_t timep;
    struct tm *p;
    
    time(&timep);
    p = gmtime(&timep);
    
    printf("%d\n",p->tm_sec); /*获取当前秒*/
    printf("%d\n",p->tm_min); /*获取当前分*/
    printf("%d\n",8 + p->tm_hour);/*获取当前时,这里获取西方的时间,刚好相差八个小时*/
    printf("%d\n",p->tm_mday);/*获取当前月份日数,范围是1-31*/
    printf("%d\n",1 + p->tm_mon);/*获取当前月份,范围是0-11,所以要加1*/
    printf("%d\n",1900 + p->tm_year);/*获取当前年份,从1900开始，所以要加1900*/
    printf("%d\n",p->tm_yday); /*从今年1月1日算起至今的天数，范围为0-365*/
    return 0;
}


