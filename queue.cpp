#include <stdio.h>
#include <conio.h>
struct Hang_hoa
{
	char MaHang[10];
	char TenHang[10];
	char DVT[10];
	int SoLuong;
};
struct Node
{
	Hang_hoa Data;
	Node* Next;
};
struct Queue
{
	Node* Head;
	Node* Tail;
};
void CreateQueue(Queue& s) //Khởi tạo stack
{
	s.Head = NULL;
	s.Tail = NULL;
}
Node* Create(Hang_hoa x)
{
	Node* p = new Node;
	if (p == NULL)
		return NULL;
	else
	{
		p->Data = x;
		p->Next = NULL;
		return p;
	}
}
// KIỂM TRA XEM QUEUE CÓ RỖNG HAY KHÔNG
int IsEmty(Queue s)
{
	if (s.Head == NULL)
		return 1;
	else return 0;
}
// THÊM MỘT PHẦN TỬ VÀO ĐẦU
void Push(Queue& s, Node* p)
{
	if (p == NULL)
		return;
	if (IsEmty(s))
		s.Head = s.Tail = p;
	else
	{
		s.Tail->Next = p;
		s.Tail = p;
	}
}
// LẤY PHẦN TỬ ĐẦU VÀ HỦY NÓ ĐI.
//int Pop(Queue& s)
//{
//	int x;
//	if (IsEmty(s))
//		return 0;
//	else
//	{
//		Node* g = s.Head;
//		x = s.Head->Data;
//		s.Head = s.Head->Next;
//		delete g;
//	}
//	return x;
//}
void Top(Queue& s)
{
	Hang_hoa x;
	Node* p = s.Head;
	if (!IsEmty(s))
	{
		printf("%s \t %s \t %s \t %d", p->Data.MaHang, p->Data.TenHang, p->Data.DVT, p->Data.SoLuong);
	}
	else
		return;
}
void Tail_Xuat(Queue& s)
{
	Hang_hoa x;
	Node* p = s.Tail;
	if (!IsEmty(s))
	{
		printf("%s \t %s \t %s \t %d", p->Data.MaHang, p->Data.TenHang, p->Data.DVT, p->Data.SoLuong);
	}
	else
		return;
}
void Nhap(Queue& s)
{
	int n;
	Hang_hoa x;
	printf("Nhap so luong hang hoa: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("\nNhap thong tin thu %d", i);
		printf("\nNhap ma hang: ");
		getchar();
		gets_s(x.MaHang);
		/*scanf_s("%s", &x.MaHang);*/
		/*puts(x.MaHang);*/
		fflush(stdin);
		printf("Nhap ten hang: ");
		gets_s(x.TenHang);
		/*puts(x.TenHang);*/
		/*scanf_s("%c", &x.TenHang);*/
		fflush(stdin);
		printf("Nhap DVT: ");
		gets_s(x.DVT);
		/*puts(x.DVT);*/
		printf("Nhap so luong: ");
		scanf_s("%d", &x.SoLuong);
		Node* c = Create(x);
		Push(s, c);
	}
}
void Xuat(Queue s)
{
	if (s.Head == NULL)
	{
		printf("danh sach rong ");
		return;
	}
	else
	{
		Node* p = s.Head;
		while (p != NULL)
		{
			printf("\n %s \t %s \t %s \t %d", p->Data.MaHang, p->Data.TenHang, p->Data.DVT, p->Data.SoLuong);
			p = p->Next;
		}
	}
}
int main()
{
	Hang_hoa x;
	Queue s;
	CreateQueue(s);
	Nhap(s);
	int lua_chon;
	printf("\nMoi ban chon phep toan voi DS LKD:");
	printf("\n1: Xem phan tu vua them vao");
	printf("\n2: Them phan tu vao Queue");
	printf("\n3: Xem phan tu dau trong Queue");
	printf("\n4: Xuat Queue");
	printf("\n5: Thoat");
	do
	{
		printf("\nBan chon: ");
		scanf_s("%d", &lua_chon);
		switch (lua_chon)
		{
		case 1:
		{
				  Tail_Xuat(s);
				  break;
		}
			/*case 2:
			{
			int x;
			printf("Nhap phan tu can chen vao Queue: ");
			scanf_s("%d", &x);
			Node* p = Create(x);
			Push(s, p);
			break;
			}*/
		case 3:
		{
				  Top(s);
				  break;
		}
		case 4:
		{
				  Xuat(s);
				  break;
		}
		case 5: break;
		}
	} while (lua_chon != 5);
	_getch();
	return 0;
}