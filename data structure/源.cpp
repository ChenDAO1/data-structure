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

//2.C,next数组和fail函数的转化

//#include<iostream>
//#include<cstring>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    char* s = new char[1000001];
//    scanf("%s", s);
//    //printf("%d     88\n",strlen(s));
//    long long* next = new long long[n + 10];
//    //    long long *data=new long long[n+10];
//    long long* f = new long long[1000001];
//    //
//    //
//    long long j = 0, k = -1;
//    next[0] = -1; f[0] = 0;
//    //printf("-1\n");
//    while (j < n - 1)
//    {
//        if (k == -1 || s[k] == s[j])
//        {
//            j++; k++; next[j] = k;
//        }
//        else k = next[k];
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        f[i] = next[i + 1] - 1;
//    }
//
//    if (s[n - 1] == s[f[n - 2] + 1])f[n - 1] = f[n - 2] + 1;
//    else f[n - 1] = -1;
//
//
//    for (int i = 0; i < n; i++)
//    {
//        long long jk = i;
//        if (f[i] != -1)
//        {
//            jk = f[jk];
//            if (f[jk] != -1)
//            {
//                jk = f[jk];
//            }
//            f[i] = jk;
//        }
//    }
//    long long result = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (f[i] != -1)result = result + i - f[i];
//    }
//    printf("%lld", result);
//
//}

//0.D KMP算法基础

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char* s = new char[10005];
//	char* p = new char[10005];
//	scanf_s("%s", s);
//	scanf_s("%s", p);
//
//
//
//	int* next = new int[10005];
//	int slength = strlen(s);
//	int length = strlen(p);
//	int k = -1; next[0] = -1;
//	for (int i = 0; i < length-1; i++)
//	{
//		while (k >= 0 && p[i] != p[k])k = next[k];
//		next[i + 1] = ++k;
//	}
//
//	printf("%d %d %d \n", next[length / 4], next[length / 2], next[length * 3 / 4]);
//
//	k = 0;
//	int con = 0;
//	for (int i = 0; i < slength; i++)
//	{
//		if (s[i] == p[k]||k==-1)k++;
//		else
//		{
//			k = next[k];
//			i--;
//		}
//		//printf("%d   %d 55\n", k,i);
//		if (k == length)
//		{
//			printf("%d", i - length+1); 
//			con = 1;
//			break;
//		}
//	}
//	if (con == 0)printf("-1");
//
//
//
//}
//
//

//0.E 二叉树得创建和遍历

//class stack
//{
//private:
//	int* cs = new int[200000];
//	int top = -1;
//public:
//	void push(int n);
//	int pop();
//	bool empty();
//};
//void stack::push(int n)
//{
//	cs[++top] = n;
//}
//int stack::pop()
//{
//	if (top > 0)return cs[--top];
//	else if (top == 0) {
//		top--;
//		return cs[0];
//	}
//}
//bool stack::empty()
//{
//	if (top == -1)return 1;
//}
//#include<iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//
//node* creat()
//{
//	int k;
//	scanf_s("%d", &k);
//	if (k == 0)return nullptr;
//	node* head = new node;
//	head->data = k;
//	head->left = creat();
//	head->right = creat();
//	return head;
//}
//
//void nodefirst(node* head)
//{
//	if (head != nullptr)
//	{
//		printf("%d ", head->data);
//		nodefirst(head->left);
//		nodefirst(head->right);
//	}
//}
//void nodesecond(node* head)
//{
//	if (head == nullptr)return;
//	
//		nodefirst(head->left);
//		printf("%d ", head->data);
//		nodefirst(head->right);
//	
//}
//void nodethird(node* head)
//{
//	if (head == nullptr)return;
//	
//		nodefirst(head->left);
//		nodefirst(head->right);
//		printf("%d ", head->data);
//	
//}
//int main()
//{
//	node* head = new node;
//	head = creat();
//	//nodefirst(head); printf("\n");
//	nodesecond(head); printf("\n");
//	nodethird(head); printf("\n");
//}

//0.F 二叉树查找父结点

//#include<iostream>
//using namespace std;
////#define scanf_s scanf
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//
//node* creat()
//{
//	int k;
//	scanf_s("%d", &k);
//	if (k == 0)return nullptr;
//	node* head = new node;
//	head->data = k;
//	head->left = creat();
//	head->right = creat();
//	return head;
//}
//
//int find(node* head,int result)
//{
//	if (head != nullptr) {
//		if (head->data == result)return 0;
//		
//		if (head->left != nullptr) {
//			if (head->left->data == result)return head->data;
//		}
//		if (head->right != nullptr) {
//			if (head->right->data == result)return head->data;
//		}
//
//		int a=find(head->left, result);
//		int b=find(head->right, result);
//		if (a != 0)return a;
//		else return b;
//	}
//	return 0;
//}
//
//int main()
//{
//	node* head = new node;
//	head = creat();
//	int m;
//	scanf_s("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		int n;
//		scanf_s("%d", &n);
//		printf("%d\n", find(head, n));
//	}
//}

//0.G 二叉树删除子树

//#include<iostream>
//using namespace std;
////#define scanf_s scanf
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//
//node* creat()
//{
//	int k;
//	scanf_s("%d", &k);
//	if (k == 0)return nullptr;
//	node* head = new node;
//	head->data = k;
//	head->left = creat();
//	head->right = creat();
//	return head;
//}
//
//
//void nodesecond(node* head)
//{
//	if (head != nullptr)
//	{
//		nodesecond(head->left);
//		printf("%d ", head->data);
//		nodesecond(head->right);
//	}
//}
//
//node * find(node* head, int result)     //查找result的父结点
//{
//	if (head != nullptr) {
//		if (head->data == result)return nullptr;
//
//		if (head->left != nullptr) {
//			if (head->left->data == result)return head;
//		}
//		if (head->right != nullptr) {
//			if (head->right->data == result)return head;
//		}
//
//		node * a = find(head->left, result);
//		node * b = find(head->right, result);
//		if (a != nullptr)return a;
//		else return b;
//	}
//	return nullptr;
//}
//
//void deletetree(node* head, int k)
//{
//	
//	node* y = find(head, k);
//	if (y == nullptr) {
//		printf("0\n"); return;
//	}
//	if (y->left != nullptr) {
//		if(y->left->data==k)y->left = nullptr;
//	}
//	if (y->right != nullptr) {
//		if(y->right->data==k)y->right = nullptr;
//	}
//	nodesecond(head); printf("\n");
//}
//
//int main()
//{
//	node* head = new node;
//	head = creat();
//	int m;
//	scanf_s("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		int n;
//		scanf_s("%d", &n);
//		deletetree(head, n);
//	}
//}


//PPT 0.G 存在问题，接受到函数处理后的指针依然为原值,啊啊啊啊啊啊啊啊啊啊啊啊啊，你个******，=都能给你写成==

//#include<iostream>
//using namespace std;
////#define scanf_s scanf
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//
//node* creat()
//{
//	int k;
//	scanf_s("%d", &k);
//	if (k == 0)return nullptr;
//	node* head = new node;
//	head->data = k;
//	head->left = creat();
//	head->right = creat();
//	printf("%p\n", head);
//	return head;
//}
//
//void nodesecond(node* head)
//{
//	if (head != nullptr)
//	{
//		nodesecond(head->left);
//		printf("%d ", head->data);
//		nodesecond(head->right);
//	}
//}
//
//node* find(node* head, int result)
//{
//	if (head != nullptr) {
//		if (head->data == result)return head;
//
//		node* a = new node;
//		node* b = new node;
//
//		a = find(head->left, result);
//		b = find(head->right, result);
//		if (a != nullptr)return a;
//		else return b;
//	}
//	else return nullptr;
//}
//
//node* father(node* head, node* p)
//{
//	if (head == nullptr || p == nullptr || p == head)return nullptr;
//	if (head->left == p || head->right == p)return head;
//	node* a = new node;
//	node* b = new node;
//     a = father(head->left, p);
//	 b = father(head->right, p);
//	if (a != nullptr)return a;
//	else return b;
//}
//
//void deletetree(node* head, int k)
//{
//	node* y = find(head, k);
//	//printf("%d     99\n", y->data);
//	node* f = father(head, y);
//	if (f != nullptr)
//	{
//		printf("%d     77\n",   f->data);
//		printf("%d     99\n", y->data);
//		if (f->left == y) { f->left = nullptr; }
//		if (f->right == y) { f->right = nullptr; }
//	}
//	else printf("0\n");
//	//printf("%d           test\n", f->right->data);
//	printf("%p\n", head);
//	//printf("%d           test\n", head->right->data);
//	nodesecond(f); printf("\n");
//}
//
//int main()
//{
//	node* head = new node;
//	head = creat();
//	printf("%p\n", head);
//	int m;
//	scanf_s("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		int n;
//		scanf_s("%d", &n);
//		deletetree(head, n);
//	}
//}

//杂想，关于结构体指针

//#include<iostream>
//using namespace std;
//
//void make(int* pp)                   //但如果为结构体指针的话，head已指向了left的实际地址，所以对它更改能实际用于树
//{
//    pp = new int(66); //试图改变p指向的地址
//}
//int main()
//{
//    int a = 5;
//    int* p = &a; //指针变量指向一个int类型的地址
//    cout << "address:" << &a << "       value:" << a << endl;
//    cout << "address:" << p << "       value:" << *p << endl;
//    make(p);
//    cout << "address:" << p << "       value:" << *p << endl;
//}

//#include<iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//node* test(node* head)
//{
//	printf("%p    kol\n", head->left);
//	 head->left = nullptr;
//	 printf("%p    data\n", head->left);
//	return nullptr;
//}
//
//int main()
//{
//	node* head = new node;
//	node* p1 = new node;
//	p1->data = 0;
//	node* p2 = new node;
//	head->left = p1; head->right = p2;
//	printf("%p   test()bi\n", test(head));
//	printf("%p    data\n", head->left);
//}

//3.A

//#include<iostream>        //错出在right上
//using namespace std;
//
//int con = -1;
//struct node
//{
//	char data;
//	node* left;
//	node* right;
//};
//
//node* creat(char* s1, char* s2,int n)
//{
//	printf("%d\n", n);
//	if (n == 0)return nullptr;
//	if (n == 1)
//	{
//		node* head = new node;
//		head->left = nullptr;
//		head->right = nullptr;
//		head->data = s1[0];
//		return head;
//	}
//
//
//	node* head = new node;
//	int k = -1;
//	for(int i=0;i<n;i++)
//		if (s2[i] == s1[n - 1])
//		{
//			k = i; break;
//		}
//	if (k == -1) { con = 0; return nullptr; }
//	char* s3 = new char[30];
//	char* s4 = new char[30];
//	char* s5 = new char[30];
//	char* s6 = new char[30];
//	strncpy(s3, s1, k);
//	strncpy(s5, s2, k);
//	strncpy(s4, s2 + k + 1, n - k - 1);
//	strncpy(s6, s2 + k , n - k-1);
//	cout << s3 << endl << s4 << endl << s5 << endl << s6 << endl;
//	head->data = s1[n - 1];
//	head->left = creat(s3, s5,k);
//	if (k + 1 < n)head->right = creat(s6, s4, n - k - 1);
//	else head->right = nullptr;
//	return head;
//}
//
//void nodefirst(node* head)
//{
//	if (head != nullptr)
//	{
//		printf("%c ", head->data);
//		nodefirst(head->left);
//		nodefirst(head->right);
//	}
//}
//
//int main()
//{
//	char s1[30];//后
//	char s2[30];//中
//	cin >> s1 >> s2;
//	int n = strlen(s1);
//	node* head = creat(s1, s2,n);
//	if (con == -1)nodefirst(head);
//	else printf("INVAILD");
//}


//3.B,找二叉树树中两个点之间的最短路径

//#include<iostream>
//#include<cstring>
//#include<stdio.h>
//using namespace std;
//
//#define scanf scanf_s
//
//struct node
//{
//    int data;
//    node* father;
//    node* left;
//    node* right;
//};
//
//node* find_(node* head, int result)                                                          //查找result的父结点
//{
//    if (head != nullptr) {
//        if (head->data == result)return nullptr;
//
//        if (head->left != nullptr) {
//            if (head->left->data == result)return head;
//        }
//        if (head->right != nullptr) {
//            if (head->right->data == result)return head;
//        }
//
//        node* a = find_(head->left, result);
//        node* b = find_(head->right, result);
//        if (a != nullptr)return a;
//        else return b;
//    }
//    return nullptr;
//}
//
//
//node* creat()
//{
//    int k;
//    scanf("%d", &k);
//    if (k == 0)return nullptr;
//    node* head = new node;
//    node* head2 = new node;
//    node* head3 = new node;
//    head->data = k;
//
//    head2 = creat();
//    head3 = creat();
//    head->left = head2;
//    head->right = head3;
//
//    if (head2 != nullptr)head2->father = head;
//    if (head3 != nullptr)head3->father = head;
//    return head;
//}
//
//int main()
//{
//    node* head = creat();
//    head->father = nullptr;
//    int sxd = 0;
//    scanf("%d", &sxd);
//    while (sxd != 0) {
//        int n, m;
//        scanf("%d%d", &n, &m);
//        int data1[20000] = { 0 }, data2[20000] = { 0 };
//        node* p = find_(head, n);
//        node* q = find_(head, m);
//
//        int result = 0;
//        data1[0] = n;
//        int totall1 = 1;
//        while (p != nullptr)
//        {
//            data1[totall1++] = p->data;
//            p = p->father;
//        }
//        data2[0] = m;
//        int totall2 = 1;
//        while (q != nullptr)
//        {
//            data2[totall2++] = q->data;
//            q = q->father;
//        }
//        totall1--, totall2--;
//
//        int bian = 1;
//        int cs = 0;
//        while (data1[totall1-cs] == data2[totall2-cs]&&totall1>=cs&&totall2>=cs)cs++;
//        cs--;
//        if (data1[totall1 - cs] == data2[totall2 - cs]&&(totall2-cs==0))bian = 0;
//        result = totall1 + totall2 + 2 - (cs + 1) * 2;
//        //cout << totall1 << " " << totall2 << " " << cs << " " << "test"<<endl;
//
//        cout << result << endl;
//        for (int y = 0; y <= totall1-cs; y++)cout << data1[y] << " ";
//        if (!bian) { for (int y = 0; y < totall2 - cs; y++)cout << data2[y] << " "; }
//        else
//        {
//            for (int y = totall2 - cs - 1; y >= 0; y--)cout << data2[y] << " ";
//        }
//        cout << endl;
//        sxd--;
//    }
//
//
//}


//编写算法求给定二叉树中一条最长的路径，并输出此路径上各结点的值。

//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//int pathlength(node* head)
//{
//	if (head == nullptr)return 0;
//	if (head->left == nullptr && head->right == nullptr)return 1;
//	int a = pathlength(head->left);
//	int b = pathlength(head->right);
//	return (a > b ? a : b) + 1;
//}
//
//void printpath(node* head)
//{
//	if (head == nullptr)return;
//	cout << head->data << " ";
//	int a = pathlength(head->left);
//	int b = pathlength(head->right);
//	if (a >= b)printpath(head->left);
//	else printpath(head->right);
//}

//判断两颗二叉树是否相似（有相同结构）

//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//int similar(node* p, node* q)
//{
//	if (p == nullptr && q == nullptr)return 1;
//	if (p == nullptr && q != nullptr || p != nullptr && q == nullptr)return 0;
//	int a = similar(p->left, q->left);
//	int b = similar(p->right, q->right);
//	if (a == 0 || b == 0)return 0;
//}

//对左兄弟-右儿子链接的树，编写算法计算树的深度

//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	node* child;
//	node* brother;
//};
//
//int deepth(node* head)
//{
//	if (head == nullptr)return 0;
//	int a = deepth(head->child) + 1;
//	int b = deepth(head->brother) + 1;
//	if (a > b)return a;
//}

// 














