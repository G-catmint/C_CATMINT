#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
struct stud {
    int num;
    char name[10];
    int score[3];
    int sum;
};
//void display()
//{
//    for(int i=0,i<)
//}
int main()
{
    struct stud s[4];
    int n;
    int max = 0;
    double avg = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%s%d%d%d", &s[i].num, &s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
    }
    //display();
    for (int i = 0; i < n; i++)
    {
        s[i].sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
        if (s[i].sum >= s[max].sum)
        {
            max = i;
        }
        printf("%d %s %d %d %d %d\n", s[i].num, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].sum);
    }
    for (int H = 0; H < n; H++)
    {
        avg += s[H].sum;
    }
    avg /= (double)n*3;
    printf("总平均分=%lf\n",avg);
    printf("%d %s %d %d %d %d\n", s[max].num, s[max].name, s[max].score[0], s[max].score[1], s[max].score[2], s[max].sum);
    return 0;
}