/**************************************************************************************************/
/*    Copyright (C)  Class 2 of Software System Design, SSE@USTC, 2014-2015                       */
/*                                                                                                */
/*    FILE NAME             :    linklist.h                                                       */
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
typedef struct DataNode
{
    char*  cmd;
    char*  desc;
    int    (*handler)();
    struct DataNode* next;
}tDataNode;
