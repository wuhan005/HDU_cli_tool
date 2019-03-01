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

#include "function.h"

//获取当前时间安排
void timeSchedule(char* text){
    char result[100] = "";
    
    char className[25][25] = {
        "准备上课",
        "第一节课", "第一节课课间",
        "第二节课", "第二节课课间",
        "第三节课", "第三节课课间",
        "第四节课", "第四节课课间",
        "第五节课", "中午休息",
        "第六节课", "第六节课课间",
        "第七节课", "第七节课课间",
        "第八节课", "第八节课课间",
        "第九节课", "下午休息",
        "第十节课", "第十节课课间",
        "第十一节课", "第十一节课课间",
        "第十二节课", "休息时间",
    };
    
    //从8:00开始算起
    int classTime[23] =   {5, 45, 5, 45, 20, 45, 5, 45, 5, 45, 65, 45, 5, 45, 10, 45, 5, 45, 100, 45, 5, 45, 5, 45};

    //时间
    char nowTime[50] = "Y-M-D h:m:s";
    formartTime(nowTime);
    strcat(result, nowTime);
    
    
    Time time = now();
    int nowIndex = 0;   //当前所在的事件的索引
    int remainMinute = 0;
    char remainMinuteString[10] = "";
    char timeStatus[200] = "\n现在是";
    
    //休息时间
    if((time.num.hour > 20 || time.num.hour < 8) || (time.num.hour == 20 && time.num.minute > 55) || (time.num.hour == 8 && time.num.minute < 5)){
        strcpy(timeStatus, "\n现在是休息时间。");
    }else{
        //int passMinutes = (time.num.hour - 8) * 60 + time.num.minute;
        int passMinutes =(10-8) * 60 +40;
        int sumMinutes = 5;

        //正常时间
        for(int i = 1; i < 24; i++){
            if(sumMinutes > passMinutes){
                nowIndex = i - 1;
                remainMinute = sumMinutes - passMinutes;    //距离下一个事件的剩余时间
                break;
            }else{
                sumMinutes += classTime[i];
                nowIndex++;
            }
        }
        
        strcat(timeStatus, className[nowIndex]);
        strcat(timeStatus, "，距离 ");
        strcat(timeStatus, className[nowIndex + 1]);
        strcat(timeStatus, " 还有 ");
        sprintf(remainMinuteString, "%d",remainMinute);
        strcat(timeStatus, remainMinuteString);
        strcat(timeStatus, " 分钟。");
    }

    strcat(result, timeStatus);
    
    strcpy(text, result);
}

//TODO:时间格式化函数


int main(int argc, const char * argv[]) {
    char times[200] = "";
    timeSchedule(times);
    printf("%s", times);
    return 0;
}


