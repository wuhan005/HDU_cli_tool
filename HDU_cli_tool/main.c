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
char* timeSchedule(){
    
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
    
    
    char* result = "";
    
    return result;
}

//TODO:时间格式化函数


int main(int argc, const char * argv[]) {
    
    
    return 0;
}


