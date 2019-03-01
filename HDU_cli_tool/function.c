//
//  function.c
//  HDU_cli_tool
//
//  Created by John Wu on 2019/3/1.
//  Copyright © 2019 John Wu. All rights reserved.
//

#include "function.h"
#include <time.h>

//获取当前时间数据 （str num 两种类型）
Time now(){
    
    //获取当前时间
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    
    Time timeData;
    //添加时间到结构体中
    //字符
    sprintf(timeData.str.year, "%d", 1900 + p->tm_year);
    sprintf(timeData.str.month, "%d", p->tm_mon);
    sprintf(timeData.str.day, "%d", p->tm_mday);
    sprintf(timeData.str.hour, "%d", 8 + p->tm_hour); //8小时时区
    sprintf(timeData.str.minute, "%d", p->tm_min);
    sprintf(timeData.str.second, "%d", p->tm_sec);
    //数字
    timeData.num.year = 1900 + p->tm_year;
    timeData.num.month = p->tm_mon;
    timeData.num.day = p->tm_mday;
    timeData.num.hour = 8 + p->tm_hour; //8小时时区
    timeData.num.minute = p->tm_min;
    timeData.num.second = p->tm_sec;
    
    return timeData;
}

