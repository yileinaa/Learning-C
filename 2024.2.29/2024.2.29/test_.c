#include "contact.h"
//��̬�汾��̬�ļ�
void menu()
{
	printf("*****************************\n");
	printf("***1.add             2.del***\n");
	printf("***3.search       4.modify***\n");
	printf("***5.show           6.sort***\n");
	printf("***0.exit                 ***\n");
	printf("*****************************\n");
}

int main()
{
	Contact con;
	Init(&con);
	int input = 0;
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add(&con);
			break;
		case 2:
			Del(&con);
			break;
		case 3:
			Search(&con);
			break;
		case 4:
			Modify(&con);
			break;
		case 5:
			Show(&con);
			break;
		case 6:
			Sort(&con);
			break;
		case 0:
			printf("�˳���");
			Save(&con);
			Destroy(&con);
			break;
		default:
			printf("����");
			break;
		}
	} while (input);
}