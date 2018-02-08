#include <stdio.h>
#include "avserver.h"
#include "log.h"

/**
*  提示并获取用户键盘输入退出程序
*/
void get_avstop_cmd()
{
    char c;
    avlog("enter 'q' or 'Q' to exit the av server\n");

    while(1)
    {
        c = getchar();
        if(c == 'q' || c == 'Q')
        {
            avlog("av server exit\n");
            break;
        }
        else
        {
            if(c != '\n')
            {
                avlog("enter 'q' or 'Q' to exit the av server\n");
            }
            continue;
        }
    }
}


int main(int argc, char *argv[])
{
    av_server_start(); // 启动服务器
    get_avstop_cmd(); // 获取用户停止服务器指令
    av_server_stop(); // 停止服务器
    return 0;
}