#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void jiem()
{
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("&&&& 1.add        2.del   &&&&\n");
	printf("&&&& 3.search     4.modify&&&&\n");
	printf("&&&& 5.show       6.sort& &&&&\n");
	printf("&&&& 0.exit               &&&&\n");
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");

}
int main()
{
	char SL[10] = { 0 };
	int input = 0;
	contact con;
	int err=initcontact(&con);
	if (err == 1)
	{
		printf("初始化失败,请重新打开\n");
		return 0;
	}
	printf("是否读档？(yes/no)\n");
	scanf("%s", &SL);
	if (0 == strcmp(SL, "yes"))
	{
		Ladecontact(&con);
	}
	do
	{
		jiem();
		printf("请做出你的选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			addcontact(&con);
			break;
		case 2:
			delcontact(&con);
			break;
		case 3:
			searcontact(&con);
			break;
		case 4:
			modicontact(&con);
			break;
		case 5:
			showcontact(&con);
			break;
		case 6:
			paixu(&con);
			break;
		case 0:
			savecontact(&con);
			delkongj(&con);
			printf("退出成功\n");
			break;
		default:
			printf("输入错误请重试\n");
			break;
		}
	} while (input);
	return 0;
}