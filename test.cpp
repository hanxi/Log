/*=============================================================================
#     FileName: test.cpp
#         Desc: 日志记录模块
#       Author: hanxi
#        Email: hanxi.com@gmail.com
#     HomePage: http://hanxi.cnblogs.com
#      Version: 0.0.1
#   LastChange: 2013-03-07 19:45:54
#      History:
=============================================================================*/

#include "log.h"


int main(int argc, char** argv)
{
    Log log("./log.html",1,HTML_LOG);
    log.append(123456,1);
    log.append(123456,1);
    log.append(123456,1);
    log.append(123456,1);
    log.append(123456,1);
    log.append(123456,1);
    log.append(123456,1);
    return 0;
}

