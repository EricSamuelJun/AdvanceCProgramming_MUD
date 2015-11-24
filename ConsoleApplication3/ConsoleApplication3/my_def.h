#pragma once
#include <stdio.h>
//���� �Ϸ�
//Item �̳� Skill
int skillfx_0(int index);
int skillfx_1(int index);
int skillfx_2(int index);
int skillfx_3(int index);
int skillfx_4(int index);
int skillfx_5(int index);
int skillfx_6(int index);
int skillfx_7(int index);
int skillfx_8(int index);
int skillfx_9(int index);
int skillfx_10(int index);
void Item_HPHill(int mount);
void Item_MPHill(int point);
void Item_StatUP(int point);

//Tool ����
void setcolor(int index);
void BattleSystem(int mindex);
void nobuff();
int RR(int min, int max);

//������ ��
void MainMenu();
void ItemMenu();
void SkillMenu();
int PlayerItemSort();
//����� ����ü �� �������� �Ҵ�
typedef struct Item {
	char itemname[20];
	char itemscripts[100];
	int price;
	int point;
	void(*Item_fx)(int);
}ITEM;
typedef struct skill {
	char skillname[50];
	int(*Skillfx)();
	double Xdamage;
	int mpuse;
}Skill;
typedef struct monster {
	char name[20];
	unsigned int FHP, FMP, hp, mp, Lv, exp, attack, wisdom, speed;
	Skill* skillptr[4];
	ITEM* itembff[3];
}Monster;
typedef struct player {
	char name[20];
	int FHP, FMP, hp, mp, Lv, exp, attack, wisdom, speed;
	Skill* skillptr[10];
	ITEM* itembff[10];
}Player;
Player myPlayer;
ITEM myitem[20];
Skill my_skill[7];
Monster mymonster[5];