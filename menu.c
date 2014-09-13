/**************************************************************************************************/
/*    Copyright (C)  Class 2 of Software System Design, SSE@USTC, 2014-2015                       */
/*                                                                                                */
/*    FILE NAME             :    menu.c                                                           */
/*    PRINCIPAL AUTHOR      :    Liantian SA14226238                                              */
/*    SUBSYSTEM NAME        :    menu                                                             */
/*    LANGUAGE              :    C                                                                */
/*    TARGET ENVIRONMENT    :    ANY                                                              */
/*    DATE OF FIRST RELEASE :    2014/08/31                                                       */
/*    DESCRIPTION           :    This is a menu program                                           */
/**************************************************************************************************/
/*
 * Revision log:
 *
 * Created by Liantian, 2014/09/12
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"
#include "linklist.c"

#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10

int Help();

static tDataNode head[]=
{
	{"help", "this is help cmd!", Help, &head[1]},
	//{"first", "this is first cmd!", first, head+2}
	//{"second", "this is second cmd!", second, head+3}
	//{"third", "this is third cmd !", third, head+4}
	//{"fourth", "this is fourth cmd !", fourth, head+5}
	//{"fifth", "this is fifth cmd !", fifth, head+6}
	//{"sixth", "this is sixth cmd !", sixth, head+7}
	//{"seventh", "this is seventh cmd !", seventh, head+8}
	//{"eighth", "this is eighth cmd !", eighth, head+9}
	{"version", "menu program v1.0", NULL, NULL}
};

int Help()
{
	ShowAllCmd(head);
	return 0;
}

int main()
{
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd > ");
        scanf("%s",cmd);
        tDataNode *p = FindCmd(head, cmd);
        if( p == NULL)
        {
            printf("This is a wrong cmd!\n");
        }
        else
        {
            printf("%s - %s\n", p->cmd, p->desc);
            if(p->handler != NULL)
            {
                p->handler();
            }
        }
}
    return 0;
}
