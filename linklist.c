/**************************************************************************************************/
/*    Copyright (C)  Class 2 of Software System Design, SSE@USTC, 2014-2015                       */
/*                                                                                                */
/*    FILE NAME             :    linklist.c                                                       */
/*    PRINCIPAL AUTHOR      :    Liantian SA14226238                                              */
/*    SUBSYSTEM NAME        :    linklist                                                         */
/*    LANGUAGE              :    C                                                                */
/*    TARGET ENVIRONMENT    :    ANY                                                              */
/*    DATE OF FIRST RELEASE :    2014/08/31                                                       */
/*    DESCRIPTION           :    This is a linklist program                                       */
/**************************************************************************************************/
/*
 * Revision log:
 *
 * Created by Liantian, 2014/09/12
 *
 */
int ShowAllCmd(tDataNode head[])
{
	tDataNode *p= head;
	while(p->handler!= NULL)
	{
		printf("%s\t\t%s\n", p->cmd, p->desc);
		p= p->next;
	}
	printf("%s\t\t%s\n", p->cmd, p->desc);
	return 0;
}

tDataNode *FindCmd(tDataNode head[], char* cmd)
{
    tDataNode *p= head;
	while(p->handler!= NULL)
	{
		if(!strcmp(p->cmd,cmd)) return p;
		p= p->next;
	}
	return NULL;
}


