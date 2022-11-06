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

//1.E.a.scanf读取一个字符后如果有回车的话，需要用getchar()把回车从缓存区中取出

//#include<iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* next;
//	node* pre;
//};
//class apple
//{
//private:
//	node* head;
//public:
//	apple(int n);
//	void find(int n,int m,node **p,node **q);
//	void insertL();
//	void insertR();
//	void insert();
//	void print();
//
//};
//void apple::print()
//{
//	node* p = head->next;
//	while (p != nullptr)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//
//void apple::find(int n,int m,node **p,node **q)
//{
//	*p = *q = head->next;
//	while ((*p)->data != n || (*q)->data != m)
//	{
//		if (( * p)->data != n) { *p = ( *p)->next; }
//		if ((*q)->data != m) { *q = (*q)->next;  }
//		//cout << 6 << endl;
//	}
//	
//}
//
//
//apple::apple(int n)
//{
//	head = new node;
//	head->next = nullptr;
//	head->pre = nullptr;
//	node* p = head, * q = nullptr;
//	for (int i = 0; i < n; i++)
//	{
//		q = new node;
//		q->data = i + 1;
//		p->next = q;
//		q->pre = p;
//		q->next = nullptr;
//		p = q;
//	}
//}
//
//void apple::insert()
//{
//	char a;
//	//scanf_s("%c", &a);
//	a = getchar();
//	if (a == 'L')insertL();
//	else if (a == 'R')insertR();
//	getchar();
//}
//
//void apple::insertL()
//{
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	node* p = head->next, * q =head->next;
//	find(n, m, &p, &q);
//	//cout << p->data << " " << q->data << endl;
//	if (m != n&&p->next!=q) {
//		if (p->next != nullptr) {
//			node* tmp = p->pre;
//			tmp->next = p->next;
//			p->next->pre = tmp;
//
//			node* tmp1 = q->pre;
//			p->next = q;
//			p->pre = tmp1;
//			q->pre = p;
//			tmp1->next = p;
//		}
//		else if (p->next == nullptr)
//		{
//			p->pre->next = nullptr;
//			p->next = q;
//			p->pre = q->pre;
//			q->pre->next = p;
//			q->pre = p;
//		}
//
//	}
//	
//}
//
//void apple::insertR()
//{
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	node* p = head->next, * q = head->next;
//	find(n, m, &p, &q);
//	if (m != n&&q->next!=p)
//	{
//		if (q->next == nullptr)
//		{
//			node* tmp = p->pre;
//			tmp->next = p->next;
//			p->next->pre = tmp;
//
//			q->next = p;
//			p->next = nullptr;
//			p->pre = q;
//
//		}
//		else if (p->next==nullptr)
//		{
//			node* tmp = q->next;
//			p->pre->next = nullptr;
//
//			p->next = tmp;
//			tmp->pre = p;
//			q->next = p;
//			p->pre = q;
//		}
//		else if (q->next != nullptr && p->next != nullptr)
//		{
//			node* tmp = p->pre;
//			tmp->next = p->next;
//			p->next->pre = tmp;
//
//			p->next = q->next;
//			q->next->pre = p;
//			p->pre = q;
//			q->next = p;
//
//		}
//	}
//}
//
//int main()
//{
//	int n,m;
//	scanf_s("%d%d", &n, &m);
//	getchar();
//	apple cs(n);
//	//cs.print();
//	for (int i = 0; i < m; i++)
//	{
//		cs.insert();
//		//cs.print();
//	}
//	cs.print();
//
//}

//1.E.b.用二维数组下标模拟一维指针移动

//#include<iostream>
//using namespace std;
//
//int pre[100001] = { 0 };
//int next_[10001] = { 0 };
//
//void moveL(int n, int m)
//{
//	
//	int con = pre[n];
//	next_[con] = next_[n];
//	pre[next_[n]] = pre[n];
//
//	
//	next_[n] = m;
//	pre[n] = pre[m];
//	if(pre[m]!=0)next_[pre[m]] = n;
//	pre[m] = n;
//}
//
//void moveR(int n, int m)
//{
//	int con = pre[n];
//	next_[con] = next_[n];
//	pre[next_[n]] = pre[n];
//
//	next_[n] = next_[m];
//	pre[n] = m;
//	if(next_[m] != 0)pre[next_[m]] = n;
//	next_[m] = n;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	int n = 0, m = 0;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		next_[i] = i + 1;
//		pre[i] = i - 1;
//	}
//	next_[n] = 0;
//	char a;
//	int n0=0, m0=0;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> n0 >> m0;
//		if (m0 != n0) {
//			if (a == 'L'&&next_[n0]!=m0)moveL(n0, m0);
//			else if(a=='R'&&next_[m0])moveR(n0, m0);
//		}
//	}
//	int y = 1;
//	while (pre[y] != 0)y++;
//	while (next_[y] != 0)
//	{
//		printf("%d ", y);
//		y = next_[y];
//	}
//	printf("%d ", y);
//}

//1.B.BFS算法实现迷宫问题

//#include<iostream>
//using namespace std;
//
//struct node
//{
//	int row;
//	int col;
//	int step;
//	struct node* pre;
//	struct node* next;
//};
//
//class bfs
//{
//public:
//	bfs(int n,int m)
//	{
//		for(int i=0;i<=n+1;i++)
//			for (int j = 0; j <= m + 1; j++)
//			{
//				if (i >= 1 && i <= n && j >= 1 && j <= m)cin >> data[i][j];
//				else data[i][j] = 1;
//				if (data[i][j] == 3)
//				{
//					n0 = i, n1 = j;
//				}
//				else if (data[i][j] == 4)
//				{
//					m0 = i; m1 = j;
//				}
//			}
//		
//		data[n0][n1] = 0; data[m0][m1] = 0;
//		head = new node;
//		head->next = nullptr;
//		head->pre = nullptr;
//		rear = nullptr;
//	}
//	bool empty();
//	void inque(node* p);
//	node* outque();
//	node* front();
//	int serach();
//private:
//	int data[105][105];
//	int track[105][105]={0};
//	node* head;
//	node* rear;
//	int n0, n1, m0, m1;
//};
//bool bfs::empty()
//{
//	if (head->next == nullptr)return 1;
//	else return 0;
//}
//void bfs::inque(node *p)
//{
//	node* tmp = new node;
//	tmp->row = p->row;
//	tmp->col = p->col;
//	tmp->step = p->step;
//
//	if (head->next == nullptr)rear = tmp;
//	node* tmp1 = head->next;
//
//	tmp->next = head->next;
//	if(tmp1!=nullptr)tmp1->pre = tmp;
//	tmp->pre = head;
//	head->next = tmp;
//}
//
//node* bfs::outque()
//{
//	if (rear != nullptr)
//	{
//		if (rear != head)
//		{
//			node* tmp = rear;
//			rear = rear->pre;
//			rear->next = nullptr;
//			delete tmp;
//		}
//	}
//	return nullptr;
//}
//node* bfs::front()
//{
//	return rear;
//}
//
//int bfs::serach()
//{
//	node* tmp=new node;
//	node* p=new node;
//	int result0=m0, result1=m1;
//	p->row = n0, p->col = n1, p->step = 0, p->next = nullptr;
//
//	track[n0][n1] = 1;
//	inque(p);
//	while (empty() == 0)
//	{
//		n0 = front()->row; n1 = front()->col;
//		printf("%d %d\n", n0, n1);
//		int step = front()->step + 1;
//		if (n0 == result0 && n1 == result1)return (front()->step);
//		
//		if (data[n0][n1+1] == 0&&track[n0][n1+1]==0)
//		{
//			p->row = n0; p->col = n1 + 1; p->step = step; p->next = nullptr;
//			inque(p);
//			track[n0][n1 + 1] = 1;
//		}//右
//		if (data[n0][n1 - 1] == 0 && track[n0][n1 - 1] == 0)
//		{
//			p->row = n0; p->col = n1 - 1; p->step = step; p->next = nullptr;
//			inque(p);
//			track[n0][n1 - 1] = 1;
//		}//左
//		if (data[n0+1][n1] == 0 && track[n0+1][n1] == 0)
//		{
//			p->row = n0+1; p->col = n1; p->step = step; p->next = nullptr;
//			inque(p);
//			track[n0+1][n1] = 1;
//		}//下
//		if (data[n0-1][n1] == 0 && track[n0-1][n1] == 0)
//		{
//			p->row = n0-1; p->col = n1; p->step = step; p->next = nullptr;
//			inque(p);
//			track[n0-1][n1] = 1;
//		}//上
//		outque();
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int cs0, cs1;
//	while (scanf_s("%d %d", &cs0, &cs1) != EOF)
//	{
//		bfs cs(cs0, cs1);
//		int con = cs.serach();
//		if (con != -1)printf("%d\n", con);
//		else printf("unreachable\n");
//		
//	}
//}


//2.A,建立操作数的权重O(n^2)

//#include<iostream>
//#include<windows.h>
//#include<ctime>
//
//using namespace std;
//
//int pow_(double m, int n)
//{
//	if (n == 0)return 1;
//	double k = pow_(m, n / 2);
//	double result = k * k;
//	if (n % 2 == 1) { result *= m; }
//	return result;
//}
//struct node
//{
//	char a;
//	int data;
//	int position;
//	int value;
//};
//
//class exp_
//{
//private:
//	node sign[1001]={0};
//	int data[1001][3] = { 0 };
//	int max1;
//	int max2;
//public:
//	exp_();
//	int evaluation();
//	int sign_data(char a);
//	void sort();
//};
//
//void exp_::sort()
//{
//	int i = 0;
//	/*while (i < max2)
//	{
//		printf("%c %d %d\n", sign[i].a, sign[i].value, sign[i].position);
//		i++;
//	}*/
//
//	int y = 0;
//	while (y < max2)
//	{
//		int j = y + 1;
//		while (j!=max2)
//		{
//			//printf("%d %d    value\n", sign[y].value, sign[j].value);
//			if (sign[y].value <sign[j].value) {
//				node k = sign[j];
//				sign[j] = sign[y];
//				sign[y] = k;
//			}
//
//			j++;
//			printf("%d %d    value\n", sign[y].value, sign[j-1].value);
//			printf("%d %d     %d %d     op\n", sign[y].value, sign[j].value, j, max2);
//		}
//		y++;
//	}
//	i = 0;
//	while (i < max2)
//	{
//		printf("%c %d %d\n", sign[i].a, sign[i].value, sign[i].position);
//		i++;
//	}
//	i = 0;
//	while (i < max1)
//	{
//		printf("%d %d %d\n", data[i][0],data[i][1],data[i][2]);
//		i++;
//	}
//	
//}
//
//int exp_::sign_data(char a)
//{
//	if (a == '+' || a == '-')return 0;
//	else if (a == '*' || a == '/')return 1;
//	else if (a == '^')return 2;
//	else return 3;
//}
//
//
//
//int exp_::evaluation()
//{
//	sort();
//	
//	int y = 0;
//	int result = 0;
//	while (y < max2)
//	{
//		if (sign[y].a == '*')
//		{
//
//			int u = sign[y].position;
//			if (data[u][2] == 0) {
//				result = data[u][0] * data[u + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[u + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[u + 1][2] = 1;
//			}
//			else
//			{
//				/*int u= sign[y].position;
//				result=data[u-1][0] * data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u - 1][0], data[sign[y].position + 1][0]);
//				data[u - 1][0] = result;
//				data[sign[y].position + 1][2] = 1;*/
//				
//
//				int u = sign[y].position;
//				while (data[u][2] != 0 && u >= 0)
//				{
//					u--;
//					if (u < 0) {
//						u = 0; break;
//					}
//				}
//				if (u == 0 && data[u][2] == 1)u = 0;
//				else if (u != 0 && u != y)u++;
//				result = data[u][0] * data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[sign[y].position + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[sign[y].position + 1][2] = 1;
//			}
//		}
//		else if (sign[y].a == '/')
//		{
//			if (data[sign[y].position + 1][0] == 0)return -1;
//
//			int u = sign[y].position;
//			if (data[u][2] == 0) {
//				result = data[u][0] / data[u + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[u + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[u + 1][2] = 1;
//			}
//			else
//			{
//
//				/*int u = sign[y].position;
//				result = data[u - 1][0] / data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u - 1][0], data[sign[y].position + 1][0]);
//				data[u - 1][0] = result;
//				data[sign[y].position + 1][2] = 1;*/
//				
//
//				int u = sign[y].position;
//				while (data[u][2] != 0 && u >= 0)
//				{
//					u--;
//					if (u < 0) {
//						u = 0; break;
//					}
//				}
//				if (u == 0 && data[u][2] == 1)u = 0;
//				else if (u != 0 && u != y)u++;
//				result = data[u][0] / data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[sign[y].position + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[sign[y].position + 1][2] = 1;
//			}
//		}
//		else if (sign[y].a == '+')
//		{
//
//			int u = sign[y].position;
//			if (data[u][2] == 0) {
//				result = data[u][0] + data[u + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[u + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[u + 1][2] = 1;
//			}
//			else
//			{
//
//				/*int u = sign[y].position;
//				result = data[u - 1][0] + data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u - 1][0], data[sign[y].position + 1][0]);
//				data[u - 1][0] = result;
//				data[sign[y].position + 1][2] = 1;*/
//				
//
//				int u = sign[y].position;
//				while (data[u][2] != 0 && u >= 0)
//				{
//					u--;
//					if (u < 0) {
//						u = 0; break;
//					}
//				}
//				if (u == 0 && data[u][2] == 1)u = 0;
//				else if (u != 0 && u != y)u++;
//				result = data[u][0] + data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[sign[y].position + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[sign[y].position + 1][2] = 1;
//			}
//		}
//		else if (sign[y].a == '-')
//		{
//
//			int u = sign[y].position;
//			if (data[u][2] == 0) {
//				result = data[u][0] - data[u + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[u + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[u + 1][2] = 1;
//			}
//			else
//			{
//				/*int u = sign[y].position;
//				result = data[u - 1][0] - data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u - 1][0], data[sign[y].position + 1][0]);
//				data[u - 1][0] = result;
//				data[sign[y].position + 1][2] = 1;*/
//				
//
//				int u = sign[y].position;
//				while (data[u][2] != 0 && u >= 0)
//				{
//					u--;
//					if (u < 0) {
//						u = 0; break;
//					}
//				}
//				if (u == 0 && data[u][2] == 1)u = 0;
//				else if (u != 0 && u != y)u++;
//				result = data[u][0] - data[sign[y].position + 1][0];
//				printf("%d %d %d             56\n", result, data[u][0], data[sign[y].position + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[sign[y].position + 1][2] = 1;
//			}
//		}
//		else
//		{
//			int u = sign[y].position;
//			if (data[u][2] == 0) {
//				
//				result = pow_(data[u][0], data[sign[y].position + 1][0]);
//				printf("%d %d %d             56\n", result, data[u][0], data[u + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[u + 1][2] = 1;
//			}
//			else
//			{
//
//				/*int u = sign[y].position;
//				
//				result = pow_(data[u - 1][0], data[sign[y].position + 1][0]);
//				data[u - 1][0] = result;
//				data[sign[y].position + 1][2] = 1;
//				printf("%d %d %d             56\n", result, data[u - 1][0], data[sign[y].position + 1][0]);*/
//
//				int u = sign[y].position;
//				while (data[u][2] != 0 && u >= 0)
//				{
//					u--;
//					if (u < 0) {
//						u = 0; break;
//					}
//				}
//				if (u == 0 && data[u][2] == 1)u = 0;
//				else if (u != 0 && u != y)u++;
//				result = pow_(data[u][0], data[sign[y].position + 1][0]);
//				printf("%d %d %d             56\n", result, data[u][0], data[sign[y].position + 1][0]);
//				data[u][0] = result;
//				data[u][2] = 1; data[sign[y].position + 1][2] = 1;
//			}
//			
//		}
//		
//		y++;
//		
//	}
//	return result;
//}
//
//exp_::exp_()
//{
//	char a;
//	scanf_s("%c", &a);
//	int con = 0;
//	int cs = 0;
//	int value = 0;
//
//	int tt = 1;
//	int uu = 0;        //result
//	int con2 = 0;
//
//	while (a != '\n')
//	{
//		if (int(a) >= 48 && int(a) <= 57)
//		{
//			tt=uu*10;
//			uu = (a - 48);        //记录数据
//			uu = tt + uu;
//			//printf("%d\n", uu);
//			con2 = 1;
//		}
//		else if (int(a) == 43 || int(a) == 45)
//		{
//			sign[cs].a = a;
//			sign[cs].data = sign_data(a);
//			sign[cs].position = con-1;
//			sign[cs].value = value + 0;
//			cs++;
//		}
//		else if (int(a) == 42 || int(a) == 47)
//		{
//			sign[cs].a = a;
//			sign[cs].data = sign_data(a);
//			sign[cs].position = con-1;
//			sign[cs].value = value + 1;
//			cs++;
//		}
//		else if (int(a) == 94)
//		{
//			sign[cs].a = a;
//			sign[cs].data = sign_data(a);
//			sign[cs].position = con-1;
//			sign[cs].value = value + 2;
//			cs++;
//		}
//		else if (int(a) == 40 || int(a) == 41)
//		{
//
//			if (a == '(') {
//				value = value + 100;
//			}
//			else
//			{
//				value = value - 100;
//			}
//			
//		}
//		scanf_s("%c", &a);
//		if (con2 == 1 && ((int)a < 48 || (int)a>58))
//		{
//			data[con][0] = uu;
//			printf("%d\n", uu);
//			uu = 0;
//			tt = 1;
//			con2 = 0;
//			con++;
//		}
//	}
//	max1 = con, max2 = cs;
//	//printf("\n%d %d\n", max1, max2);
//}
//
//int main()
//{
//	/*exp_ cs;
//	int a = cs.evaluation();
//	if (a != -1)printf("%d", a);
//	else printf("INVALID");*/
//
//	time_t begin, end;
//	double ret;
//	begin = clock();
//	while (1) {
//		exp_ cs;
//		int a = cs.evaluation();
//		if (a != -1)printf("%d\n", a);
//		else printf("INVALID\n");
//	}
//
//	end = clock();
//	ret = double(end - begin) / CLOCKS_PER_SEC;
//	cout << "runtime:   " << ret << endl;
//}

//2.A,直接计算中缀表达式的方法

//#include<iostream>
//using namespace std;
////#define scanf_s scanf
//
//
//class cs
//{
//public:
//	bool unempty() {
//		if (head != -1)return 1;
//		else return 0;
//	}
//	int peek() { return data[head]; }
//	void push(int a)
//	{
//		data[head + 1] = a;
//		head = head + 1;
//	}
//	int pop()
//	{
//		int a = data[head];
//		data[head] = 0;
//		head--;
//		return a;
//	}
//private:
//	int data[1005];
//	int head = -1;
//};
//
//int pow_(int m, int n)           //运用快速幂算法
//{
//	if (n == 0)return 1;
//	double k = pow_(m, n / 2);
//	double result = k * k;
//	if (n % 2 == 1) { result *= m; }
//	return result;
//}
//
//double evaluation(int a, int b, char c)             //求值
//{
//	if (c == '+')return int(a + b);
//	else if (c == '-')return int(a - b);
//	else if (c == '*')return int(a * b);
//	else if (c == '/') {
//		if (b != 0)return int(a / b);
//		else return 0.333;
//	}
//	else return pow_(a, b);
//}
//
//int result(char *s)
//{
//	char a;
//	int hh = 0;
//	int con = 0;
//
//	int value[300] = { 0 };
//	value['+'] = value['-'] = 1;
//	value['*'] = value['/'] = 2;
//	value['^'] = 3;
//
//	//char* s = new char[1005];
//	//char a;
//	// scanf_s("%c",&a);
//	//while(a!='\n'){
//
//
//	cs num, op;
//	
//		//printf("%s\n", s);
//		int ll = strlen(s);
//		int i = 0;
//		while (i<ll)                         //读完一行的数据
//		{
//			if (int(s[i]) >= 48 && int(s[i]) <= 57)          //碰到数字，先进行初步处理，当确定下一个字符为操作符时再压栈
//			{
//				hh = hh * 10 + s[i] - '0';
//				con = 1;
//			}
//			else if (int(s[i]) == 40)op.push(int(s[i]));            //碰到左括号，为直接压栈
//			else if (int(s[i]) == 41) {                      //碰到右括号，优先对括号内的数据进行计算，也就是消除括号
//				char tmp = op.pop();
//
//
//				while (tmp != 40 && tmp != -1)
//				{
//					int a = num.pop(); int b = num.pop();
//					double d = evaluation(b, a, tmp);
//					if (d == 0.333) {
//						printf("INVALID\n"); return 0;
//					}
//					num.push(evaluation(b, a, tmp));
//					tmp = op.pop();
//				}
//			}
//			else                                 //碰到其他操作符时，确保压进去的操作符为栈中权值最大项，否则先对权值较大项进行处理，直至当前操作符比栈中操作符权值都大
//			{
//				while (op.unempty() && op.peek() != 40 && value[int(s[i])] <= value[op.peek()])
//				{
//					int a = num.pop(); int b = num.pop(); char c = op.pop();
//					double d = evaluation(b, a, c);
//					if (d == 0.333) {
//						printf("INVALID\n"); return 0;
//					}
//					num.push(d);
//				}
//				op.push(int(s[i]));
//			}
//
//
//			i++;
//			if (!(int(s[i]) >= 48 && int(s[i]) <= 57) && con == 1)          //当下一个为操作符时，压数字进栈
//			{
//				num.push(hh);
//				hh = 0; con = 0;
//			}
//		}
//
//		double cs = 0;
//
//		while (op.unempty())           //把接下来还在栈中的数据进行计算
//		{
//			int a = num.pop(); int b = num.pop(); char c = op.pop();
//			cs = evaluation(b, a, c);
//			if (cs == 0.333) {
//				printf("INVALID\n"); return 0;
//			}
//			num.push(cs);
//		}
//		printf("%d\n", num.peek());
//
//}
//
//
//
//
//
//int main()
//{
//	//while (yy)
//	//{
//	//	double a = result();
//
//
//	//	if (yy == 1) {
//	//		if (a != 0.333)
//	//			printf("%.0lf\n", a);
//	//		else printf("INVALID\n");
//	//	}
//	//}
//
//	char* s = new char[1005];
//	while (scanf_s("%s", s) != EOF)
//	{
//		result(s);
//		char* s = new char[1005];
//	}
//}

//2.C,自己做法，思想错了，直接保存该种字符的第一个位置是不行的

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//    char* s = new char[n + 1];
//    scanf_s("%s", s+1);
//    //printf("%s\n %c \n", s + 1,s[1]);
//    long long(*data)[2] = new long long[n + 1][2];
//    int apl[260] = { 0 };
//
//    int i = 1;
//    while (i <= n)
//    {
//
//
//        
//        if (apl[int(s[i])] == 0) { apl[int(s[i])] = i; }     //使字母表中的数值为该字母第一次出现的位置
//        
//
//        printf("%d          88888\n", apl[s[i]]);
//        if (s[i] != s[1])               //当检索字母与首字母不匹配时
//        {
//
//            printf("%c %c %d %d\n", s[i], s[1], apl[s[i]],i);
//            if (apl[s[i]] == i) {       //当检索字符为第一次出现时
//                data[i][0] = 0;
//                data[i][1] = 0;
//            }
//            else             //当检索字符不为第一次出现时
//            {
//                if (apl[s[i]] != i) {         //确保该字符不是刚刚写入的
//                    if (i < 2 * apl[s[i] ])
//                    {
//                        data[i][0] = 0;
//                        data[i][1] = 0;
//                        printf("%lld  %lld\n", data[i][0], data[i][1]);
//                        i++;
//                        continue;
//                    }
//                    long long yy = apl[s[i]];
//                    int con = 1;
//                    int conclude = 1;
//                    while (con < yy)
//                    {
//                        if (s[con] != s[i - yy+con])conclude = 0;
//                        con++;
//                    }
//
//                    if (conclude == 0)
//                    {
//                        data[i][0] = 0;
//                        data[i][1] = 0;
//                    }
//                    else
//                    {
//                        data[i][0] = yy;
//                        data[i][1] = i - yy;
//                    }
//                }
//                else
//                {
//                    data[i][0] = 0;
//                    data[i][1] = 0;
//                }
//            }
//        }
//        else
//        {
//           
//            if (i != 1) {
//                data[i][0] = 1 ;
//                data[i][1] = i - data[i][0];
//            }
//            else
//            {
//                data[i][0] = 0;
//                data[i][1] = 0;
//            }
//        }
//
//        printf("%lld  %lld\n", data[i][0], data[i][1]);
//
//
//        i++;
//    }
//
//    
//
//    long long result = 0;
//    int u = 1;
//    while (u <= n)
//    {
//        result = result + data[u][1];
//        u++;
//    }
//    printf("%lld", result);
//
//
//}

