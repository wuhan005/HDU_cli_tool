//
//  function.c
//  HDU_cli_tool
//
//  Created by John Wu on 2019/3/1.
//  Copyright © 2019 John Wu. All rights reserved.
//

#include "function.h"
#include <time.h>
#include <string.h>

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
    sprintf(timeData.str.month, "%02d", p->tm_mon);
    sprintf(timeData.str.day, "%02d", p->tm_mday);
    sprintf(timeData.str.hour, "%02d", 8 + p->tm_hour); //8小时时区
    sprintf(timeData.str.minute, "%02d",p->tm_min);
    sprintf(timeData.str.second, "%02d", p->tm_sec);
    //数字
    timeData.num.year = 1900 + p->tm_year;
    timeData.num.month = p->tm_mon;
    timeData.num.day = p->tm_mday;
    timeData.num.hour = 8 + p->tm_hour; //8小时时区
    timeData.num.minute = p->tm_min;
    timeData.num.second = p->tm_sec;
    
    return timeData;
}

//格式化时间
void formartTime(char* formartString){
    char result[1000] = "";
    Time time = now();
    
    //若超出最大空间，则返回默认值
    if(strlen(formartString) > 100 || strlen(formartString) == 0){
        strcpy(formartString, "Y年M月D日 h:m:s");
        formartTime(formartString);
    }
    

    for(int i = 0; i < strlen(formartString); i++){
        char temp[2] = "";  //临时转换字符
        
        switch (formartString[i]) {
            case 'Y':
                strcat(result, time.str.year);
                break;
            case 'M':
                strcat(result, time.str.month);
                break;
            case 'D':
                strcat(result, time.str.day);
                break;
            case 'h':
                strcat(result, time.str.hour);
                break;
            case 'm':
                strcat(result, time.str.month);
                break;
            case 's':
                strcat(result, time.str.second);
                break;
                
            default:
                temp[0] = formartString[i];
                strcat(result, temp);
                break;
        }
    }
    
    //memset(formartString, 0, sizeof(formartString));
    strcpy(formartString, result);
}

