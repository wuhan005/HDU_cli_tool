//
//  function.h
//  HDU_cli_tool
//
//  Created by John Wu on 2019/3/1.
//  Copyright © 2019 John Wu. All rights reserved.
//

#ifndef function_h
#define function_h

#include <stdio.h>

typedef struct Time{
    //字符类型
    struct str{
        char year[10];
        char month[8];
        char day[8];
        char hour[8];
        char minute[8];
        char second[8];
    }str;
    
    //数字类型
    struct num{
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
    }num;
    
}Time;



Time now();
void formartTime(char*);

#endif /* function_h */
