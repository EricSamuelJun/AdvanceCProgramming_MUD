#include "my_def.h"
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<stdio.h>

void MainMenu() {
	printf("Hello,World!\n");
}
void BattleSystem(int mindex) {
	int temp[10] = 0;
	/*
	1. Getturn
	2. DoTurn
	3. If(monster[mindex].hp){
	}
	*/
	while (mymonster[mindex].hp || myPlayer.hp) {

	}
	printf("�������� �¸��ߴ�!\n");
	Sleep(400);
	printf("%s�� �������� �����ߴ�!\n", myPlayer.name);
	temp[9] = PlayerItemSort();
	{
		if (RR(0, 2)) {
			mymonster[mindex].itembff[0];
			printf("%s�� �����!\n", mymonster[mindex].itembff[0]->itemname);
			myPlayer.itembff[temp[9] + 1] = mymonster[mindex].itembff[0];
		}
		if (RR(0, 2)) {
			mymonster[mindex].itembff[1];
			printf("%s�� �����!\n", mymonster[mindex].itembff[1]->itemname);
			myPlayer.itembff[temp[9] + 1] = mymonster[mindex].itembff[1];
		}
		if (RR(0, 2)) {
			mymonster[mindex].itembff[2];
			printf("%s�� �����!\n", mymonster[mindex].itembff[2]->itemname);
			myPlayer.itembff[temp[9] + 1] = mymonster[mindex].itembff[2];
		}
	}
}
void setcolor(int index) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), index);
}
void nobuff() {
	///////////////////������. ���۸� ��� ���� �Է��� ���� �޴´�!
	while (getchar() != '\n');
}
int RR(int min, int max) {
	int temp = 0;
	temp = ((double)rand() / RAND_MAX)*(max - min + 1) + min;
	return (int)temp;
}
Player myPlayer = {
	"���ΰ�",10,10,10,10,5,0,2,2,2,{ NULL },{ NULL }
};
ITEM myitem[20] = {
	//{"�̸�","����",����,ȸ��(Ȥ�� ������ Ȥ�� �ε���),�Լ�}
	{ "HP ȸ��","HP�� 5��ŭ ȸ����Ų��",5,5,&(Item_HPHill) },
	{ "HP ȸ����","HP�� 10 ȸ����Ų��",10,10,&(Item_HPHill) },
	{ "MP ȸ��","MP�� 5 ȸ����Ų��",5,5,&(Item_MPHill) },
	{ "MP ȸ����","MP�� 10 ȸ����Ų��",10,10,&(Item_MPHill) },
	{ "���� ����","Attack ������ 1 ��½�Ų��",10,1,&(Item_StatUP) },
	{ "������ ����","Wisdom ������ 1 ��½�Ų��",10,2,&(Item_StatUP) },
	{ "�ӵ��� ����","Speed ������ 1 ��½�Ų��",10,3,&(Item_StatUP) },
	{ "ü���� ����","FHP ������ 1 ��½�Ų��",10,4,&(Item_StatUP) },
	{ "������ ����","FMP ������ 1 ��½�Ų��",10,5,&(Item_StatUP) }
};
Skill my_skill[7] = {
	//{"��ų �̸�",&(�Լ�),�����, ������뷮}
	{ "�ϵ���/����ũĮ����",&(skillfx_0),4,5 },
	{ "�ͽ��÷���/�ǻ��γ��",&(skillfx_1),4,5 },
	{ "����Ʈ���ǵ�/���κ��̵�",&(skillfx_2),4,5 },
	{ "4",0,0,0 },
	{ "5",0,0,0 },
	{ "6",0,0,0 },
	{ "��ũ�÷��Ӹ�����/����� �׸�â",&(skillfx_6),4,5 }
};
Monster mymonster[5] = {
	{ "�ļҰ��ǿ���",10,10,10,10,5,500,2,2,2,{ &(my_skill[6]),NULL,NULL,NULL },{ &(myitem[0]),&(myitem[0]),NULL } }
};
int PlayerItemSort() {
	ITEM* temp[20];
	int i = 0,j=0;
	for (i = 0;i>=20; i++) {
		if (!(myPlayer.itembff)) {
			temp[j] = myPlayer.itembff[i];
			j++;
		}
	}
	for (i = 0;temp[i] == NULL; i++) {
		myPlayer.itembff[i] = temp[i];
	}
	return i;
}