//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int f(int x,int y)
//{
//    if(y==0)
//        return x;
//    else
//        return f(y,x%y);
//}
//int main()
//{
//    int n,m,i,t;
//    scanf("%d",&t);
//    for(i=0;i<t;i++)
//    {
//        scanf("%d%d",&n,&m);
//        printf("%d",f(n,m));
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int l=0,flag=0,wei=1,t[25001][2]={0},count=0,i;
//    char temp;
//    while((temp=getchar())!=EOF&&temp!='\n')
//    {
//        if(l==0&&temp==')')
//        {
//            flag=1;
//            wei++;
//            continue;
//        }
//        if(temp=='(')
//        {
//            t[count+l][0]=wei;
//            l++;
//        }
//        if(temp==')')
//        {
//            l--;
//            t[count][1]=wei;
//            count++;
//        }
//        wei++;
//    }
//    if(!flag&&!l)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    for(i=0;i<count;i++)
//    {
//        printf("%d %d\n",t[i][0],t[i][1]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n,i,count=0,cur=0;
//    char temp[10];
//    scanf("%d",&n);
//    char t[n][101];
//    for(i=0;i<n;i++)
//    {
//        scanf("%s",temp);
//        if(!strcmp(temp,"VISIT"))
//        {
//            if(cur<count)
//                count=cur;
//            scanf("%s",t[count]);
//            printf("%s\n",t[count]);
//            cur++;
//            count++;
//        }
//        else if(!strcmp(temp,"BACK"))
//        {
//            if(cur-1<=0)
//                printf("Ignore\n");
//            else
//            {
//                cur--;
//                printf("%s\n",t[cur-1]);
//            }
//        }
//        else if(!strcmp(temp,"FORWARD"))
//        {
//            if(cur==count)
//                printf("Ignore\n");
//            else
//            {
//                cur++;
//                printf("%s\n",t[cur-1]);
//            }
//        }
//    }
//    return 0;
//}
//    enum liquid
//    {
//        o=1,
//        c=8,
//        p=16,
//        q=32,
//        f=128
//    };
//#include<stdio.h>
//int main()
//{
//    enum liquid jar;
//    jar=q;
//    printf("%d\n",jar);
//    jar=jar+p;
//    printf("%d",jar);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%d",sizeof 'a');
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%d",1<=10<=0);
//    return 0;
//}
