#ifndef _MAKEMOVE_
#define _MAKEMOVE_
//�߷�ִ����

#include "define.h"

/*
��������ʼ����Ϸ
��������
���أ���
*/
void InitializeGame(string s);

/*
�����������������
��������
���أ��������巵��1�����Ҹ�������λ�ã����������巵��2���쳣����0��ֱ���˳�-1
*/
extern int PlayerMove();

/*
������ִ���������--�������̺�����ջ
��������
���أ���
*/
extern void makeMove();

/*
������ִ�л������--�������̺�����ջ
��������
���أ��������巵��true�����򷵻�false
*/
extern bool unMakeMove();

/*
�������ж���Ϸ�Ƿ�����������������Ӧ��Ϣ���������
��������
���أ���������true�����򷵻�false
*/
int GameOver();

/*
����������
��������
���أ���
*/
void Replay();

#endif