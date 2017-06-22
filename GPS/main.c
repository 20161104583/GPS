//
//  main.c
//  GPS
//
//  Created by 20161104583 on 17/6/22.
//  Copyright © 2017年 20161104583. All rights reserved.
//

#include <stdio.h>
int main()
{
    FILE *fr;
    char a[70];
    char a1[70];
    char lat[9];
    char time[7];
    int k,i;
    fr=fopen("//Users//a20161104583//Desktop//GPS//GPSW.txt","r+");
    fscanf(fr,"%s%s",a,a1);
    printf("结果:%s\n%s\n",a,a1);
    for(i=0;i<6;i++){
        time[i]=time[i+7];
    }
    time[6]='\0';
    printf("时间:%s\n",time);
    for(k=0;k<8;k++)
    {
        lat[k]=a[k+16];
    }
    lat[8]='\0';
    printf("纬度:%s\n",lat);
    fclose(fr);
    return 0;
}

