#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	//char arr[] = "abcdef";
	//strlen
	//printf("%d\n", strlen(arr));        //6     —— 6 数组名是首元素地址 strlen就会从首元素向后数 找"\0" 打不读取"\0"
	//printf("%d\n", strlen(arr + 0));    //6     —— 6 也是首元素地址 效果跟上面的一样
	////printf("%d\n", strlen(*arr));       //error —— error 解引用后是一个元素 就会有ASCII值 地址就会变 报错
	////printf("%d\n", strlen(arr[1]));     //error —— error 同上 是第二个元素 不是地址 strlen不能往后找 报错
	//printf("%d\n", strlen(&arr));       //6     —— 6 &arr是数组的地址 往后就会找到6个元素找到"\0"
	//printf("%d\n", strlen(&arr + 1));   //随机  —— 随机 跳过了一个数组 本数组里的"\0"找不到了 只能在内存中另找"\0"
	//printf("%d\n", strlen(&arr[0] + 1));//5     —— 5 跳过了首元素的地址往后找5个就能够找到"\0"
	//sizeof
	//printf("%d\n", sizeof(arr));      //7 —— 7 字符串内部为"abcdef\0"sizeof在计算大小时需要带上"\0"来计算
	//printf("%d\n", sizeof(arr+0));    //4 —— 4/8 还是那句话 这里arr代表的是首元素地址 是地址 大小都是4/8
	//printf("%d\n", sizeof(*arr));     //1 —— 1 arr是首元素地址 在被*解引用 *arr代表的是首元素 char类型 大小是1
	//printf("%d\n", sizeof(arr[1]));   //1 —— 1 arr[1]是第二个元素的大小
	//printf("%d\n", sizeof(&arr));     //4 —— 4/8 虽然是数组的地址 但是也是地址 是地址就是4/8
	//printf("%d\n", sizeof(&arr+1));   //4 —— 4/8 跳过整个数组后的地址 但是也是地址
	//printf("%d\n", sizeof(&arr[0]+1));//4 —— 4/8 第二个元素的地址 但是也是地址

	///*char* p = "abcdef";*/
	//p是一个存储a的地址的指针
	//strlen
	//printf("%d\n", strlen(p));      //6 —— 6 
	//printf("%d\n", strlen(p+1));    //5 —— 5 
	////printf("%d\n", strlen(*p));     //error 有是老毛病 给strlen一个元素
	////printf("%d\n", strlen(p[0]));   //error 用上
	//printf("%d\n", strlen(&p));     //6 —— 随机 &p取得是p的地址 而不是a的地址 从p向后找"\0" 
	//printf("%d\n", strlen(&p+1));   //5 —— 随机 同上
	//printf("%d\n", strlen(&p[0]+1));//5 —— 5 看上面 p[0]是一个元素a 再去地址取得是a的地址 +1取得b的地址
	//sizeof
	//printf("%d\n", sizeof(p));      //4 —— 4/8 p内存储的是a的地址 是地址就是4/8
	//printf("%d\n", sizeof(p+1));    //4 —— 4/8 p+1内存储的是b的地址
	//printf("%d\n", sizeof(*p));     //1 —— 1 *p解引用是一个a元素 char一个字节
	//printf("%d\n", sizeof(p[0]));   //1 —— 1  int arr[0] arr[0]==*(arr+0)     p[0]==*(p+0) 这两个完全等价 所以同上
	//printf("%d\n", sizeof(&p));     //4 —— 4/8 就是去p的地址 套娃 终究还是地址
	//printf("%d\n", sizeof(&p+1));   //4 —— 4/8 地址
	//printf("%d\n", sizeof(&p[0]+1));//4 —— 4/8 地址

	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", &a[0][0]);
	//printf("%d\n", a[0]+1);
	//printf("%d\n", a+1);
	//printf("%d\n", &a[0]+1);

	//printf("%d\n", sizeof(a));           //48 数组 3*4*4=48
	//printf("%d\n", sizeof(a[0][0]));     //4 代表了二维数组中的一个元素
	//printf("%d\n", sizeof(a[0]));        //16 a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组名单独放在sizeof()内 计算是第一行的大小
	//printf("%d\n", sizeof(a[0]+1));      //4/8 a[0]放到表达式里面去了 表示的是首元素的地址 
	////还是一个逻辑 a[0]在上面不是第一行的数组名吗 边表达式就是第一行第二个元素的地址
	//printf("%d\n", sizeof(*(a[0]+1)));   //4 *(a[0]+1)是第一行第二个元素 大小是四个字节
	//printf("%d\n", sizeof(a+1));         //4/8 a是二维数组的数组名 数组名没有sizeof(数组名)也没有sizeof(&数组名)，所以a是首元素地址
	////而二维数组的首元素是第一行(把二维数组看成一维数组) 此时 二维数组的首元素是他的第一行 说以sizeof(数组名+1)表示的是第二行地址
	//printf("%d\n", sizeof(*(a+1)));      //16 计算第二行的大小 相当于计算一个四位的一维数组的大小
	//printf("%d\n", sizeof(&a[0]+1));     //4/8 第二行的地址
	//printf("%d\n", sizeof(*( & a[0]+1)));//16 第二行这一一维数组的大小
	//printf("%d\n", sizeof(*a));          //16 a是首元素地址 就是第一行的地址 解引用就是第一行数组的大小
	//printf("%d\n", sizeof(a[3]));      //error —— 16 虽然没有第四行 但是根据类型去访问(数组名) 形式上跟a[0]一样
	return 0;
}