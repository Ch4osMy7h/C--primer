#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#pragma once
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define Size_Max 50
typedef struct Book //�鼮��Ϣ�Ľṹ��
{
	char Book_Name[Size_Max];
	char Book_Major[Size_Max];
	int Book_ISBN;
	double Book_Price;
	char Book_Author[Size_Max];
	char Book_Publisher[Size_Max];
	char Book_state[Size_Max];
	char Borrow_Student_Name[Size_Max];
	char Borrow_Sex[Size_Max];
	int Borrow_Study_Numer;
	struct Book *next;
};
typedef struct Member //������ע��Ľṹ��
{
	char name[Size_Max];
	char sex[Size_Max];
	int Study_Number;
	char Borrow_Book_Name[Size_Max];
	struct Member *next;
};
void menu(Book *h, Book *g); //�˵�����
Book* Add_Book(); // ͼ�������Ϣ¼�� 1
Book* Modify_Book(Book *h); //ͼ����Ϣ�޸� 1
Book* Delete_Book(Book *h); //ͼ����Ϣɾ������ 1
void Print_Book(Book *h); //ͼ����Ϣ���� 1
Member* Add_Member(Member *h); //������ע�� 1
Book* Search_Book_Name(Book *h); //��ͼ�������� 1
Book* Search_Book_Author(Book *h); //���������� 1
Book* Search_Book_Major(Book *h); //רҵ������� 1
Book* Search_Book_Borrower(Member *h);//���߽�����Ϣ���� 1
Book* Search_Book_Currency(Book *h); //��ͨ������� 1
Book *Lent_Book(Book*head_book, Member* head_member); //�������� 1
Book *Back_Book(Book*head_book, Member* head_member); //�������� 1
void Save_Book_info(Book *h); //����ͼ����Ϣ
void Save_Member_info(Member *h); //�����Ա��Ϣ
Book *Read_Book_info(Book *h); //���ļ���ȡѧ����Ϣ
Member *Read_Member_info(Member *h); //���ļ���ȡ��Ϣ

#include"head.h"
char * s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n'); //���һ��з�
		if (find) //�����ַ����Null
			*find = '\0'; //�ڴ˴����ÿ��ַ�
		else
			while (getchar() != '\n')
				continue; //����ʣ����
	}
	return ret_val;
}
Book* Add_Book()//����ͼ������Ϣ
{
	system("cls");
	Book * head = NULL;
	Book * Prev, *Current;
	char input[Size_Max];
	puts("�������һ��ͼ�������");
	while (s_gets(input, Size_Max) != NULL && input[0] != '0')
	{
		Current = (Book *)malloc(sizeof(struct Book));
		if (head = NULL)
			head = Current;
		else
			Prev->next=Current;
		strcpy_s(Current->Book_Name, input);
		puts("������ͼ���רҵ����\n");
		scanf_s("%s", &Current->Book_Major);
		puts("������ͼ��ı��\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("������ͼ��ĵ���\n");
		scanf_s("%lf", &Current->Book_Price);
		puts("������ͼ��ı��\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("������ͼ�������\n");
		scanf_s("%s", &Current->Book_Author);
		puts("������ͼ��ĳ�����\n");
		scanf_s("%s", &Current->Book_Publisher);
		puts("������ͼ��Ĵ���״̬\n");
		scanf_s("%s", &Current->Book_state);
		fflush(stdin);
		while (getchar() != '\n')
			continue;
		puts("��������һ�������Ϣ������հ���ֹͣ):");
		Prev = Current;
	}
	return head;
}
void Print_Book(Book* head) //ͼ����Ϣ����
{
	system("cls");
	fflush(stdin);
	Book * Prev, *Current;
	if (head = NULL)
		printf("û���鼮��Ϣ");
	else while (head != NULL)
		printf("�������鼮�嵥:\n");
	Current = head;
	while (Current != NULL)
	{
		printf("ͼ������\tרҵ����\t���\t����\t����\t������\t����״̬\n");
		for (Prev = head; Prev; Prev = Prev->next)
			printf("%s\t%s\t%d\t%.2lf\t%s\t%s\t%s\t\n", Prev->Book_Name, Prev->Book_Major, Prev->Book_ISBN, Prev->Book_Price, Prev->Book_Author, Prev->Book_Publisher, Prev->Book_state);
	}
	system("pause");
}
Book* Modify_Book(Book *head) //ͼ����Ϣ�޸�
{
	int number;
	Book* Current;
	system("cls");//����
	fflush(stdin);
	printf("���������޸ĵ����");
	scanf_s("%d", &number);
	for (Current=head; Current; Current = Current->next)
	{
		if (number== Current->Book_ISBN)
		{
			puts("����Ŀǰ���:\n");
			printf("ͼ������\tרҵ����\t���\t����\t����\t������\t����״̬\n");
			printf("%s\t%s\t%d\t%.2lf\t%s\t%s\t%s\t\n", Current->Book_Name, Current->Book_Major, Current->Book_ISBN, Current->Book_Price, Current->Book_Author, Current->Book_Publisher, Current->Book_state);
			break;
		}
	}
		if (Current)
	{
		printf("\n\t\t�������޸ĺ��ͼ�����Ϣ\n");
		puts("������ͼ�������\n");
		scanf_s("%s", &Current->Book_Name);
		puts("������ͼ���רҵ����\n");
		scanf_s("%s", &Current->Book_Major);
		puts("������ͼ��ı��\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("������ͼ��ĵ���\n");
		scanf_s("%lf", &Current->Book_Price);
		puts("������ͼ��ı��\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("������ͼ�������\n");
		scanf_s("%s", &Current->Book_Author);
		puts("������ͼ��ĳ�����\n");
		scanf_s("%s", &Current->Book_Publisher);
		puts("������ͼ��Ĵ���״̬\n");
		scanf_s("%s", &Current->Book_state);
		fflush(stdin);
	}
		else
			printf("\n�޴�ͼ���¼��\n");
		getchar();
		return h;
}
Book* Delete_Book(Book *h)/*ɾ������*/
{
	int number; char c;
	Book *head = h;
	Book *ptr = h;
	system("cls");     /*����*/
	printf("\n����������ɾ������ţ�");
	scanf_s("%d",&number);
	fflush(stdin);
	printf("***********************************************************\n");
	while (h != NULL)
	{
		if (h->Book_ISBN == number)
		{
			puts("����Ŀǰ���:\n");
			printf("ͼ������\tרҵ����\t���\t����\t����\t������\t����״̬\n");
			printf("%s\t%s\t%d\t%.2lf\t%s\t%s\t%s\t\n", Current->Book_Name, Current->Book_Major, Current->Book_ISBN, Current->Book_Price, Current->Book_Author, Current->Book_Publisher, Current->Book_state);
			printf("�Ƿ���Ҫɾ����ͼ�� Y/N\n");
			scanf("%c", &c);
			if (c == 'Y')
			{
				if (h != ptr)
				{
					ptr->next = h->next;
					free(h);
				}
				else head = h->next;
				system("CLS");
				printf("�ѳɹ�ɾ��\n");
				return head;
			}
			ptr = h;
			h = h->next;
		}
		printf("�޷���ѯ����ͼ�����Ϣ");
		system("Pause");
	}
	return ptr;
}
Book* Search_Book_Name(Book *h)//��������
{
	char name[20];
	Book *Current=h;
	printf("\n��������Ҫ��ѯ������:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("ͼ���\tͼ����\t������\t������\tרҵ����\tͼ��۸�\t����״̬\n");
	for (;Current;Current=Current->next)
		if (strcmp(name,Current->Book_Name) == 0)
		{
			printf("%s\t%s\t%s\t%s\t%s\t%6.2f%s\t\n", Current->Book_ISBN, Current->Book_Name, Current->Book_Publisher, Current->Book_Major, Current->Book_Price,Current->Book_state);
			break;
		}
	if (Current == NULL)
	{
		printf("�޸�ͼ���¼\n");
	}
	getchar();
	return h;
}
Book* Search_Book_Author(Book *h)//����������
{
	char name[20];
	Book *Current = h;
	printf("\n��������Ҫ��ѯ��������:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("ͼ���\tͼ����\t������\t������\tרҵ����\tͼ��۸�\t����״̬\n");
	for (; Current; Current = Current->next)
		if (strcmp(name, Current->Book_Author) == 0)
		{
			printf("%s\t%s\t%s\t%s\t%s\t%6.2f%s\t\n", Current->Book_ISBN, Current->Book_Name, Current->Book_Publisher, Current->Book_Major, Current->Book_Price, Current->Book_state);
		}
	if (Current == NULL)
	{
		printf("�޸�ͼ���¼\n");
	}
	getchar();
	return h;
}
Book* Search_Book_Major(Book *h)//��רҵ�������
{
	char name[20];
	Book *Current = h;
	printf("\n��������Ҫ��ѯ��רҵ����:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("ͼ���\tͼ����\t������\t������\tרҵ����\tͼ��۸�\t����״̬\n");
	for (; Current; Current = Current->next)
		if (strcmp(name, Current->Book_Name) == 0)
		{
			printf("%s\t%s\t%s\t%s\t%s\t%6.2f%s\t\n", Current->Book_ISBN, Current->Book_Name, Current->Book_Publisher, Current->Book_Major, Current->Book_Price, Current->Book_state);
		}
	if (Current == NULL)
	{
		printf("�޸������¼\n");
	}
	getchar();
	return h;
}
Member* Add_Member(Member *h) //��Աע��
{
	system("cls");
	Member * head = NULL;
	Member * Prev, *Current;
	char input[Size_Max];
	puts("�������Ա������");
	while (s_gets(input, Size_Max) != NULL && input[0] != '0')
	{
		Current = (Member *)malloc(sizeof(struct Member));
		if (head = NULL)
			head = Current;
		else
			Prev->next = Current;
		strcpy_s(Current->name, input);
		puts("�������Ա���Ա�\n");
		scanf_s("%s", &Current->sex);
		puts("�������Ա��ѧ��\n");
		scanf_s("%d", &Current->Book_ISBN);
		fflush(stdin);
		Prev = Current;
		char c;
		printf("�ɹ����,�Ƿ�������� Y/N");
		if (c == 'N') return h;
		else
			puts("��������һλ��Ա����Ϣ������հ���ֹͣ):");
	}
	return head;

}
Book* Search_Book_Borrower(Member *h)
{
	int number;
	Member *Current = h;
	printf("\n��������Ҫ��ѯ�Ļ�Աѧ��:");
	fflush(stdin);
	scanf_s("%d", number);
	printf("��Ա����\t��Ա�Ա�\t��Աѧ��\t��Ա����ͼ��\n");
	for (; Current; Current = Current->next)
		if (number==Current->Study_Number)
		{
			printf("%s\t%s\t%d\t%s\t\n", Current->name, Current->sex, Current->Study_Number, Current->Borrow_Book_Name);
		}
	if (Current == NULL)
	{
		printf("�޸û�Ա��Ϣ\n");
	}
	getchar();
	return h;
}
Book* Search_Book_Currency(Book *h) //��ѯĳ�������ͨ���
{
	char name[20];
	Book *Current = h;
	printf("\n��������Ҫ��ѯ������:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("��ͨ״̬:\n");
	for (; Current; Current = Current->next)
		if (strcmp(name, Current->Book_Name) == 0)
		{
			printf("%s\n", Current->Book_state);
			break;
		}
	if (Current == NULL)
	{
		printf("�޸�ͼ����ͨ״��\n");
	}
	getchar();
	return h;
}
Book *Lent_Book(Book*head_book,Member*head_member) //�����������
{
	int number1;
	int number2;
	Book *ptr_book;
	Member *ptr_member;
	system("cls");
	fflush(stdin);
	printf("���������ͼ����\n:");
	scanf_s("%d", &number1);
	printf("�������Ա��ѧ��\n");
	scanf_s("%d", &number2);
	for (ptr_book = head_book; ptr_book; ptr_book = ptr_book->next)
		for (ptr_member = head_member; ptr_member; ptr_member = ptr_member->next)
		{
			if ((ptr_book->Book_ISBN == number1) && (ptr_member->Study_Number == number2))
			{
				strcpy(ptr_book->Book_Name, ptr_member->name);   // �ñ�ͼ����ͨ״��
				strcpy(ptr_book->Borrow_Sex, ptr_member->sex);
				ptr_book->Borrow_Study_Numer = ptr_member->Study_Number;
				strcpy(ptr_book->Book_state, "��");
				strcpy(ptr_member->Borrow_Book_Name, ptr_book->Book_Name);
				break;
			}
			if (ptr_book) {
				printf("���޴�ͼ���û�Ա������!/n/n");
			}
		}
	return head_book;
}
Book *Back_Book(Book*head_book, Member*head_member)//����������
{
	int number1;
	int number2;
	Book *ptr_book;
	Member *ptr_member;
	system("cls");
	fflush(stdin);
	printf("���������ͼ����\n:");
	scanf_s("%d", &number1);
	printf("�������Ա��ѧ��\n");
	scanf_s("%d", &number2);
	for (ptr_book = head_book; ptr_book; ptr_book = ptr_book->next)
		for (ptr_member = head_member; ptr_member; ptr_member = ptr_member->next)
		{
			if ((ptr_book->Book_ISBN == number1) && (ptr_member->Study_Number == number2))
			{
				strcpy(ptr_book->Book_Name, "��");   // �ñ�ͼ����ͨ״��
				strcpy(ptr_book->Borrow_Sex, "��");
				ptr_book->Borrow_Study_Numer = 0;
				strcpy(ptr_book->Book_state, "��");
				strcpy(ptr_member->Borrow_Book_Name, "��");
				break;
			}
			if (ptr_book) {
				printf("������������������!/n/n");
			}
		}
	return head_book;
}
#endif // HEAD_H_INCLUDED
#include"head.h"
void menu(Book *h, Book *g)
{
	int t = 0;
	while (1)
	{
		system("cls");
		fflush(stdin);
	}
}
#include<stdio.h>
#include"head.h"
int main(void)
{
	Book *h = NULL;
	Book *g = NULL;
	menu(h, g);
	return 0;
}
