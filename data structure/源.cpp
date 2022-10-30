//1.A.双向队列问题

//#include<iostream>
//using namespace std;
////#define scanf_s (void)scanf
//
//class keyb
//{
//private:
//	struct node
//	{
//		char data;
//		struct node* pre;
//		struct node* next;
//	};
//	node* head;
//	node* rear;
//	node* now;
//public:
//	keyb()
//	{
//		head = new node;
//		head->next = nullptr; head->pre = nullptr;
//		rear = nullptr;
//		now = nullptr;
//	}
//	void creat();
//	void insert(char c);
//	void puts();
//};
//
//void keyb::puts()
//{
//	node* con = head->next;
//	while (con != nullptr)
//	{
//		printf("%c", con->data);
//		con = con->next;
//	}
//	system("pause");
//}
//
//void keyb::creat()
//{
//	char a;
//	scanf_s("%c", &a);
//	while (a == '{' || a == '}' || a == '<' || a == '>')scanf_s("%c", &a);
//
//	while (a != '\n' && a != '/0')
//	{
//		if (a == '{') { now = head; }
//		else if (a == '}') { now = rear; }
//		else if (a == '<') { if (now != nullptr)if (now->pre != nullptr) { now = now->pre; } }
//		else if (a == '>') { if (now != nullptr)if (now->next != nullptr) { now = now->next; } }
//		else if (a == '#')
//		{
//			if (now != nullptr)
//			{
//				if (now->pre != nullptr) {
//					/*node* tmp = rear;
//					rear = rear->pre;
//					rear->next = nullptr;
//					now = rear;
//					delete tmp;*/
//					int con = 1;
//					if (rear == now)con = 0;
//					node* tmp;
//					tmp = now->pre;
//					now->pre->next = now->next;
//					if (now->next != nullptr)now->next->pre = now->pre;
//					delete now;
//					now = tmp;
//					//rear = now;
//					if (con == 0)rear = now;
//				}
//			}
//		}
//		else {
//
//			insert(a);
//		}
//		//cout << now->data << endl;
//
//		scanf_s("%c", &a);
//	}
//}
//
//void keyb::insert(char c)
//{
//	if (now == nullptr)
//	{
//		now = new node;
//		now->data = c;
//		now->next = nullptr;
//		now->pre = head;
//		head->next = now;
//		rear = now;
//	}
//	else
//	{
//		if (now->next == nullptr)
//		{
//			now = new node;
//			now->data = c;
//			now->next = nullptr;
//			now->pre = rear;
//			rear->next = now;
//			rear = now;
//
//		}
//		else {
//			if (now == head)
//			{
//				node* tmp = head->next;
//				node* tmp1 = new node;
//				tmp1->next = tmp;
//				tmp1->data = c;
//				tmp1->pre = head;
//				tmp->pre = tmp1;
//				head->next = tmp1;
//				now = tmp1;
//			}
//			else {
//				node* n = now->next;
//				node* tmp = now;
//				now = new node;
//				now->data = c;
//				now->next = n;
//				now->pre = tmp;
//				if (n != nullptr)
//					n->pre = now;
//				tmp->next = now;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	keyb cs;
//	cs.creat();
//	cs.puts();
//}

//1.C.类似KMP，把近似O（n*n）简化为O（n）

//#include<iostream>
//#include<cstring>
////#define scanf_s scanf
//using namespace std;
//char a0[100005] = { 0 };
//int max1 = 0;
//char d[30] = { 0 };
////char change(char c, int n);
//void Change(char* b)
//{
//	int cs[30][2] = {0};
//	int con =0;
//
//	
//	for (int i = max1 - 1; i >= 0; i--)
//	{
//		if (cs[int(a0[i]) - 97][0] == 0) {
//			cs[int(a0[i]) - 97][0]++;
//			cs[int(a0[i]) - 97][1] = con;
//			con++;
//
//		}
//	}
//
//	for (int i = 0; i < max1; i++)
//	{
//		int k0 = i;
//		for (int j = i + 1; j < max1; j++)
//			if (a0[j] == a0[i])k0 = j;
//
//		b[i] = d[cs[int(a0[i]) - 97][1]];
//	}
//}
//
//
//int main()
//{
//	
//	char* a = new char[100001];
//	scanf_s("%s", a);
//
//	for (int i = 0; i < 26; i++)
//	{
//		d[i] = 97 + i;
//	}
//
//	max1 = strlen(a);
//	//cout << max1 << endl;
//
//	
//	char b[100005]={0};
//	for (int i = 0; i < max1; i++)
//		a0[i] = a[i];
//	Change(b);
//	printf("%s", b);
//}

//1.D.简单的降复杂度问题

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int(* n)[2] = new int[100001][2];
//	long n0,m0;
//	scanf_s("%ld %ld", &n0, &m0);
//	long con = 0;
//	for (long i = 0; i < n0; i++)
//	{
//		scanf_s("%ld", &n[i][0]);
//		con += n[i][0];
//		n[i][1] = con;
//	}
//	int k0 = 0, k1 = 0, result = 0;
//	for (long i = 0; i < m0; i++)
//	{
//		scanf_s("%ld %ld", &k0, &k1);
//		result = (n[k1 - 1][1] - n[k0 - 1][1]+n[k0-1][0]) / (k1 - k0+1);
//		printf("%ld\n", result);
//	}
//}

//1.E.

#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
	node* pre;
};
class apple
{
private:
	node* head;
	//char address[100001][65];
public:
	apple(int n);
	node* find(int n);
	void insertL();
	void insertR();
	void insert();
	void print();

};
void apple::print()
{
	node* p = head->next;
	while (p != nullptr)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

node* apple::find(int n)
{
	node* p = head->next;
	while (p->data != n)
	{
		p = p->next;
	}
	return p;
}


apple::apple(int n)
{
	head = new node;
	head->next = nullptr;
	head->pre = nullptr;
	node* p = head, * q = nullptr;
	for (int i = 0; i < n; i++)
	{
		q = new node;
		q->data = i + 1;
		p->next = q;
		q->pre = p;
		q->next = nullptr;
		p = q;
	}
}

void apple::insert()
{
	char a;
	//scanf_s("%c", &a);
	a = getchar();
	if (a == 'L')insertL();
	else if (a == 'R')insertR();
	getchar();
}

void apple::insertL()
{
	int n, m;
	scanf_s("%d%d", &n, &m);
	node* p = find(n);
	node* q = find(m);
	if (m != n&&p->next!=q) {
		if (p->next != nullptr) {
			node* tmp = p->pre;
			tmp->next = p->next;
			p->next->pre = tmp;

			node* tmp1 = q->pre;
			p->next = q;
			p->pre = tmp1;
			q->pre = p;
			tmp1->next = p;
		}
		else if (p->next == nullptr)
		{
			p->pre->next = nullptr;
			p->next = q;
			p->pre = q->pre;
			q->pre->next = p;
			q->pre = p;
		}

	}
	
}

void apple::insertR()
{
	int n, m;
	scanf_s("%d%d", &n, &m);
	node* p = find(n);
	node* q = find(m);
	if (m != n&&q->next!=p)
	{
		if (q->next == nullptr)
		{
			node* tmp = p->pre;
			tmp->next = p->next;
			p->next->pre = tmp;

			q->next = p;
			p->next = nullptr;
			p->pre = q;

		}
		else if (p->next==nullptr)
		{
			node* tmp = q->next;
			p->pre->next = nullptr;

			p->next = tmp;
			tmp->pre = p;
			q->next = p;
			p->pre = q;
		}
		else if (q->next != nullptr && p->next != nullptr)
		{
			node* tmp = p->pre;
			tmp->next = p->next;
			p->next->pre = tmp;

			p->next = q->next;
			q->next->pre = p;
			p->pre = q;
			q->next = p;

		}
	}
}

int main()
{
	int n,m;
	scanf_s("%d%d", &n, &m);
	getchar();
	apple cs(n);
	for (int i = 0; i < m; i++)
	{
		cs.insert();
	}
	cs.print();

}