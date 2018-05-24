/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main
 *
 *        Version:  1.0
 *        Created:  2018年05月24日 09时39分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    unsigned char nihao[] = { 0xe4,0xbd,0xa0,0xe5,0xa5, 0xbd, 0x21, 0x00};
    //汉字被编译为UTF-8格式编码数据, '你'-0xe4,0xbd,0xa0; '好'-0xe5,0xbd,0x21
    printf("你好!\n");
    printf("%s\n", nihao);
    return 0;
}

