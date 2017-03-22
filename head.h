#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#pragma once
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define Size_Max 50
typedef struct Book //书籍信息的结构体
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
typedef struct Member //借书人注册的结构体
{
	char name[Size_Max];
	char sex[Size_Max];
	int Study_Number;
	char Borrow_Book_Name[Size_Max];
	struct Member *next;
};
void menu(Book *h, Book *g); //菜单函数
Book* Add_Book(); // 图书基本信息录入 1
Book* Modify_Book(Book *h); //图书信息修改 1
Book* Delete_Book(Book *h); //图书信息删除功能 1
void Print_Book(Book *h); //图书信息遍历 1
Member* Add_Member(Member *h); //借书人注册 1
Book* Search_Book_Name(Book *h); //按图书名检索 1
Book* Search_Book_Author(Book *h); //作者名检索 1
Book* Search_Book_Major(Book *h); //专业领域检索 1
Book* Search_Book_Borrower(Member *h);//读者借阅信息检索 1
Book* Search_Book_Currency(Book *h); //流通情况检索 1
Book *Lent_Book(Book*head_book, Member* head_member); //借书手续 1
Book *Back_Book(Book*head_book, Member* head_member); //还书手续 1
void Save_Book_info(Book *h); //保存图书信息
void Save_Member_info(Member *h); //保存会员信息
Book *Read_Book_info(Book *h); //从文件读取学生信息
Member *Read_Member_info(Member *h); //从文件读取信息

#include"head.h"
char * s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n'); //查找换行符
		if (find) //如果地址不是Null
			*find = '\0'; //在此处放置空字符
		else
			while (getchar() != '\n')
				continue; //处理剩余行
	}
	return ret_val;
}
Book* Add_Book()//保存图书新信息
{
	system("cls");
	Book * head = NULL;
	Book * Prev, *Current;
	char input[Size_Max];
	puts("请输入第一本图书的名字");
	while (s_gets(input, Size_Max) != NULL && input[0] != '0')
	{
		Current = (Book *)malloc(sizeof(struct Book));
		if (head = NULL)
			head = Current;
		else
			Prev->next=Current;
		strcpy_s(Current->Book_Name, input);
		puts("请输入图书的专业领域\n");
		scanf_s("%s", &Current->Book_Major);
		puts("请输入图书的编号\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("请输入图书的单价\n");
		scanf_s("%lf", &Current->Book_Price);
		puts("请输入图书的编号\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("请输入图书的作者\n");
		scanf_s("%s", &Current->Book_Author);
		puts("请输入图书的出版社\n");
		scanf_s("%s", &Current->Book_Publisher);
		puts("请输入图书的存在状态\n");
		scanf_s("%s", &Current->Book_state);
		fflush(stdin);
		while (getchar() != '\n')
			continue;
		puts("请输入下一本书的信息（输入空白行停止):");
		Prev = Current;
	}
	return head;
}
void Print_Book(Book* head) //图书信息遍历
{
	system("cls");
	fflush(stdin);
	Book * Prev, *Current;
	if (head = NULL)
		printf("没有书籍信息");
	else while (head != NULL)
		printf("以下是书籍清单:\n");
	Current = head;
	while (Current != NULL)
	{
		printf("图书名称\t专业领域\t编号\t单价\t作者\t出版社\t存在状态\n");
		for (Prev = head; Prev; Prev = Prev->next)
			printf("%s\t%s\t%d\t%.2lf\t%s\t%s\t%s\t\n", Prev->Book_Name, Prev->Book_Major, Prev->Book_ISBN, Prev->Book_Price, Prev->Book_Author, Prev->Book_Publisher, Prev->Book_state);
	}
	system("pause");
}
Book* Modify_Book(Book *head) //图书信息修改
{
	int number;
	Book* Current;
	system("cls");//清屏
	fflush(stdin);
	printf("请输入想修改的书号");
	scanf_s("%d", &number);
	for (Current=head; Current; Current = Current->next)
	{
		if (number== Current->Book_ISBN)
		{
			puts("本书目前情况:\n");
			printf("图书名称\t专业领域\t编号\t单价\t作者\t出版社\t存在状态\n");
			printf("%s\t%s\t%d\t%.2lf\t%s\t%s\t%s\t\n", Current->Book_Name, Current->Book_Major, Current->Book_ISBN, Current->Book_Price, Current->Book_Author, Current->Book_Publisher, Current->Book_state);
			break;
		}
	}
		if (Current)
	{
		printf("\n\t\t请输入修改后此图书的信息\n");
		puts("请输入图书的名称\n");
		scanf_s("%s", &Current->Book_Name);
		puts("请输入图书的专业领域\n");
		scanf_s("%s", &Current->Book_Major);
		puts("请输入图书的编号\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("请输入图书的单价\n");
		scanf_s("%lf", &Current->Book_Price);
		puts("请输入图书的编号\n");
		scanf_s("%d", &Current->Book_ISBN);
		puts("请输入图书的作者\n");
		scanf_s("%s", &Current->Book_Author);
		puts("请输入图书的出版社\n");
		scanf_s("%s", &Current->Book_Publisher);
		puts("请输入图书的存在状态\n");
		scanf_s("%s", &Current->Book_state);
		fflush(stdin);
	}
		else
			printf("\n无此图书记录！\n");
		getchar();
		return h;
}
Book* Delete_Book(Book *h)/*删除函数*/
{
	int number; char c;
	Book *head = h;
	Book *ptr = h;
	system("cls");     /*清屏*/
	printf("\n请输入你想删除的书号：");
	scanf_s("%d",&number);
	fflush(stdin);
	printf("***********************************************************\n");
	while (h != NULL)
	{
		if (h->Book_ISBN == number)
		{
			puts("本书目前情况:\n");
			printf("图书名称\t专业领域\t编号\t单价\t作者\t出版社\t存在状态\n");
			printf("%s\t%s\t%d\t%.2lf\t%s\t%s\t%s\t\n", Current->Book_Name, Current->Book_Major, Current->Book_ISBN, Current->Book_Price, Current->Book_Author, Current->Book_Publisher, Current->Book_state);
			printf("是否想要删除该图书 Y/N\n");
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
				printf("已成功删除\n");
				return head;
			}
			ptr = h;
			h = h->next;
		}
		printf("无法查询到该图书的信息");
		system("Pause");
	}
	return ptr;
}
Book* Search_Book_Name(Book *h)//根据书名
{
	char name[20];
	Book *Current=h;
	printf("\n请输入需要查询的书名:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("图书号\t图书名\t作者名\t出版社\t专业领域\t图书价格\t存在状态\n");
	for (;Current;Current=Current->next)
		if (strcmp(name,Current->Book_Name) == 0)
		{
			printf("%s\t%s\t%s\t%s\t%s\t%6.2f%s\t\n", Current->Book_ISBN, Current->Book_Name, Current->Book_Publisher, Current->Book_Major, Current->Book_Price,Current->Book_state);
			break;
		}
	if (Current == NULL)
	{
		printf("无该图书记录\n");
	}
	getchar();
	return h;
}
Book* Search_Book_Author(Book *h)//根据作者名
{
	char name[20];
	Book *Current = h;
	printf("\n请输入需要查询的作者名:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("图书号\t图书名\t作者名\t出版社\t专业领域\t图书价格\t存在状态\n");
	for (; Current; Current = Current->next)
		if (strcmp(name, Current->Book_Author) == 0)
		{
			printf("%s\t%s\t%s\t%s\t%s\t%6.2f%s\t\n", Current->Book_ISBN, Current->Book_Name, Current->Book_Publisher, Current->Book_Major, Current->Book_Price, Current->Book_state);
		}
	if (Current == NULL)
	{
		printf("无该图书记录\n");
	}
	getchar();
	return h;
}
Book* Search_Book_Major(Book *h)//按专业领域检索
{
	char name[20];
	Book *Current = h;
	printf("\n请输入需要查询的专业领域:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("图书号\t图书名\t作者名\t出版社\t专业领域\t图书价格\t存在状态\n");
	for (; Current; Current = Current->next)
		if (strcmp(name, Current->Book_Name) == 0)
		{
			printf("%s\t%s\t%s\t%s\t%s\t%6.2f%s\t\n", Current->Book_ISBN, Current->Book_Name, Current->Book_Publisher, Current->Book_Major, Current->Book_Price, Current->Book_state);
		}
	if (Current == NULL)
	{
		printf("无该领域记录\n");
	}
	getchar();
	return h;
}
Member* Add_Member(Member *h) //会员注册
{
	system("cls");
	Member * head = NULL;
	Member * Prev, *Current;
	char input[Size_Max];
	puts("请输入会员的名字");
	while (s_gets(input, Size_Max) != NULL && input[0] != '0')
	{
		Current = (Member *)malloc(sizeof(struct Member));
		if (head = NULL)
			head = Current;
		else
			Prev->next = Current;
		strcpy_s(Current->name, input);
		puts("请输入会员的性别\n");
		scanf_s("%s", &Current->sex);
		puts("请输入会员的学号\n");
		scanf_s("%d", &Current->Book_ISBN);
		fflush(stdin);
		Prev = Current;
		char c;
		printf("成功添加,是否继续输入 Y/N");
		if (c == 'N') return h;
		else
			puts("请输入下一位会员的信息（输入空白行停止):");
	}
	return head;

}
Book* Search_Book_Borrower(Member *h)
{
	int number;
	Member *Current = h;
	printf("\n请输入需要查询的会员学号:");
	fflush(stdin);
	scanf_s("%d", number);
	printf("会员姓名\t会员性别\t会员学号\t会员借阅图书\n");
	for (; Current; Current = Current->next)
		if (number==Current->Study_Number)
		{
			printf("%s\t%s\t%d\t%s\t\n", Current->name, Current->sex, Current->Study_Number, Current->Borrow_Book_Name);
		}
	if (Current == NULL)
	{
		printf("无该会员信息\n");
	}
	getchar();
	return h;
}
Book* Search_Book_Currency(Book *h) //查询某本书的流通情况
{
	char name[20];
	Book *Current = h;
	printf("\n请输入需要查询的书名:");
	fflush(stdin);
	scanf_s("%s", name);
	printf("流通状态:\n");
	for (; Current; Current = Current->next)
		if (strcmp(name, Current->Book_Name) == 0)
		{
			printf("%s\n", Current->Book_state);
			break;
		}
	if (Current == NULL)
	{
		printf("无该图书流通状况\n");
	}
	getchar();
	return h;
}
Book *Lent_Book(Book*head_book,Member*head_member) //办理借书手续
{
	int number1;
	int number2;
	Book *ptr_book;
	Member *ptr_member;
	system("cls");
	fflush(stdin);
	printf("请输入借阅图书编号\n:");
	scanf_s("%d", &number1);
	printf("请输入会员的学号\n");
	scanf_s("%d", &number2);
	for (ptr_book = head_book; ptr_book; ptr_book = ptr_book->next)
		for (ptr_member = head_member; ptr_member; ptr_member = ptr_member->next)
		{
			if ((ptr_book->Book_ISBN == number1) && (ptr_member->Study_Number == number2))
			{
				strcpy(ptr_book->Book_Name, ptr_member->name);   // 该本图书流通状况
				strcpy(ptr_book->Borrow_Sex, ptr_member->sex);
				ptr_book->Borrow_Study_Numer = ptr_member->Study_Number;
				strcpy(ptr_book->Book_state, "无");
				strcpy(ptr_member->Borrow_Book_Name, ptr_book->Book_Name);
				break;
			}
			if (ptr_book) {
				printf("暂无此图书或该会员不存在!/n/n");
			}
		}
	return head_book;
}
Book *Back_Book(Book*head_book, Member*head_member)//办理还书手续
{
	int number1;
	int number2;
	Book *ptr_book;
	Member *ptr_member;
	system("cls");
	fflush(stdin);
	printf("请输入借阅图书编号\n:");
	scanf_s("%d", &number1);
	printf("请输入会员的学号\n");
	scanf_s("%d", &number2);
	for (ptr_book = head_book; ptr_book; ptr_book = ptr_book->next)
		for (ptr_member = head_member; ptr_member; ptr_member = ptr_member->next)
		{
			if ((ptr_book->Book_ISBN == number1) && (ptr_member->Study_Number == number2))
			{
				strcpy(ptr_book->Book_Name, "无");   // 该本图书流通状况
				strcpy(ptr_book->Borrow_Sex, "无");
				ptr_book->Borrow_Study_Numer = 0;
				strcpy(ptr_book->Book_state, "无");
				strcpy(ptr_member->Borrow_Book_Name, "无");
				break;
			}
			if (ptr_book) {
				printf("输入有误，请重新输入!/n/n");
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
