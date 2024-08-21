//#include <stdio.h>
//#include <conio.h>
//struct Node
//{
//	int Data;
//	Node* Next;
//};
//struct List
//{
//	Node* Head;
//	Node* Tail;
//};
//void Create(List& l)
//{
//	l.Head = l.Tail = NULL;
//}
//int Check(List l)
//{
//	if (l.Head == NULL)
//		return 1;
//	return 0;
//}
//Node* CreateNode(int x)
//{
//	Node* p = new Node;
//	if (p == NULL)
//		return NULL;
//	else
//	{
//		p->Data = x;
//		p->Next = NULL;
//		return p;
//	}
//}
//int AddHead(List& l, Node* p)
//{
//	if (p == NULL)
//		return 0;
//	if (!Check(l))
//	{
//		l.Head = p;
//		l.Tail = p;
//	}
//	else
//	{
//		p->Next = l.Head;
//		l.Head = p;
//	}
//	return 1;
//}
//int AddTail(List& l, Node* p)
//{
//	if (p == NULL)
//		return 0;
//	if (Check(l))
//	{
//		l.Head = p;
//		l.Tail = p;
//	}
//	else
//	{
//		l.Tail->Next = p;
//		l.Tail = p;
//	}
//	return 1;
//}
//void Them_x_truoc_y(List& l)
//{
//	int x, y;
//	printf("\nBan muon them gia tri vao truoc phan tu nao: ");
//	scanf_s("%d", &x);
//	Node* p = l.Head;
//	Node* q = NULL;
//	while (p != NULL && p->Data != x)
//	{
//		q = p;
//		p = p->Next;
//	}
//	if (p == NULL)
//	{
//		printf("\nKhong co gia tri nay");
//		return;
//	}
//	else
//	{
//		printf("Da tim thay gia tri");
//		printf("\nNhap gia tri can them vao truoc: ");
//		scanf_s("%d", &y);
//		p = CreateNode(y);
//		if (q == NULL)
//			AddHead(l, p);
//		else
//		{
//			p->Next = q->Next;
//			q->Next = p;
//		}
//	}
//}
//void Them_x_sau_y(List& l)
//{
//	int x, y;
//	printf("\nBan muon them gia tri vao sau phan tu nao: ");
//	scanf_s("%d", &x);
//	Node* p = l.Head;
//	while (p != NULL && p->Data != x)
//	{
//		p = p->Next;
//	}
//	if (p == NULL)
//	{
//		printf("\nKhong co gia tri nay");
//		return;
//	}
//	else
//	{
//		printf("Da tim thay gia tri");
//		printf("\nNhap gia tri can them vao sau: ");
//		scanf_s("%d", &y);
//		Node* q = CreateNode(y);
//		if (p == l.Tail)
//			AddTail(l, p);
//		else
//		{
//			q->Next = p->Next;
//			p->Next = q;
//		}
//	}
//}
//void DelteteHead(List& l)
//{
//	if (l.Head == NULL)
//		return;
//	else
//	{
//		Node* p = l.Head;
//		l.Head = l.Head->Next;
//		if (l.Head == NULL)
//			l.Tail = NULL;
//		delete p;
//	}
//}
//void DeleteTail(List& l)
//{
//	if (l.Head == NULL)
//		return;
//	else
//	{
//		Node* p = l.Head;
//		Node* q = l.Tail;
//		while (p->Next != q)
//		{
//			p = p->Next;
//		}
//		l.Tail = p;
//		l.Tail->Next = NULL;
//		delete q;
//
//	}
//}
//void Xoa_vi_tri_bat_ki(List& l)
//{
//	int x;
//	printf("Nhap gia tri can xoa: ");
//	scanf_s("%d", &x);
//	if (l.Head == NULL)
//		return;
//	if (l.Head->Data == x)
//	{
//		DelteteHead(l);
//	}
//	if (l.Tail->Data == x)
//	{
//		DeleteTail(l);
//	}
//	Node* g = new Node;
//	for (Node* k = l.Head; k != NULL; k = k->Next)
//	{
//		if (k->Data == x)
//		{
//			g->Next = k->Next;
//			delete k;
//			return;
//		}
//		g = k;
//	}
//}
//int KtraNT(int x)
//{
//	if (x < 2)
//		return 0;
//	else
//	{
//		for (int i = 2; i < x; i++)
//		{
//			if (x % i == 0)
//				return 0;
//		}
//	}
//	return 1;
//}
//int DemNT(List& l)
//{
//	int dem = 0;
//	Node* p = l.Head;
//	while (p != NULL)
//	{
//		if (KtraNT(p->Data))
//			dem++;
//		p = p->Next;
//	}
//	printf("\nCo %d so nguyen to", dem);
//	return dem;
//}
////void Xoaphantulonhon(List &l)
////{
////
////}
//void Nhap(List& l)
//{
//	int n, x;
//	printf("Nhap so Node: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap gia tri: ");
//		scanf_s("%d", &x);
//		Node* p = CreateNode(x);
//		AddTail(l, p);
//	}
//}
//void Xuat(List& l)
//{
//	if (l.Head == NULL)
//		printf("Danh sach rong");
//	else
//	{
//		Node* p = l.Head;
//		while (p != NULL)
//		{
//			printf("%4d", p->Data);
//			p = p->Next;
//		}
//	}
//}
//
//int main()
//{
//	List l;
//	Create(l);
//	Nhap(l);
//	//Xuat(l);
//	//Them_x_truoc_y(l);
//	//Xuat(l);
//	//Them_x_sau_y(l);
//	//Xuat(l);
//	//DelteteHead(l);
//	DeleteTail(l);
//	//printf("Xoa dau, xoa cuoi");
//	//Xuat(l);
//	//DemNT(l);
//	//Xoa_vi_tri_bat_ki(l);
//	Xuat(l);
//	_getch();
//	return 0;
//}
