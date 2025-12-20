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
	int input = 0;
	contact con;
	initcontact(&con);
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
			printf("退出成功\n");
			break;
		default:
			printf("输入错误请重试\n");
			break;
		}
	} while (input);
	return 0;
}
