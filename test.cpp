//#include<iostream>
//using namespace std;
//#include<string>
//#include<cmath>
//------------------------------------------
//int arr[1000][200];
//int sum[1000];
//int num1[1000];
//void Sort(int arr[],int sz)
//{
//	int i, j, tmp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		num1[i] = num;
//		for (j = 0; j < num; j++)
//		{
//			cin >> arr[i][j];
//			sum[i] += arr[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		Sort(arr[i],num1[i]);
//		int num = sum[i] % (num1[i] - 1);
//		for (;; num += num1[i] - 1)
//		{
//			int avg = (sum[i] + num) / (num1[i] - 1);
//			if (avg >= arr[i][num1[i] - 1] )
//			{
//				break;
//			}
//		}
//		cout << num << endl;
//	}
//	return 0;
//}
//-----------------------------------
//int arr[1000];
//int main()
//{
//	int a, b, c, d, x, y , z, n, i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a >> b >> c >> d;
//		int num = 0;
//		for (x = 0; x <= a; x++)
//		{
//			y = 0;
//			if (x > d|| x + y > d)
//			{
//				break;
//			}
//			for (y = 0; y <= b; y++)
//			{
//				if (x + y > d)
//				{
//					break;
//				}
//				for (z = 0; z <= c; z++)
//				{
//					if (x + y + z <= d)
//					{
//						num++;
//					}
//				}
//			}
//		}
//		arr[i] = num;
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//int arr1[1000];
//int arr2[1000];
//int main()
//{
//	int n, k, i;
//	cin >> n >> k;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr1[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr2[i];
//	}
//	int num = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] != arr2[i])
//		{
//			num++;
//		}
//	}
//	if (num > k)
//	{
//		cout << n + k - num << endl;
//	}
//	if (num < k)
//	{
//		cout << n + num - k;
//	}
//	if (num == k)
//	{
//		cout << n << endl;
//	}
//	return 0;
//}
//#include<algorithm>
//int Max(int arr[], int j)
//{
//	int ret = 0;
//	int i;
//	for (i = 0; i < j; i++)
//	{
//		if (ret < arr[i])
//		{
//			ret = arr[i];
//		}
//	}
//	return ret;
//}
//int arr[1000000];
//int main()
//{
//	int a, b, j = 0;
//	cin >> a >> b;
//	int m, n;
//	for (m = 2;; m++)
//	{
//		n = 1;
//		if (2 * m + 4 * n > a || 3 * m + n > b)
//		{
//			break;
//		}
//		for (;; n++)
//		{
//			if (2 * m + 4 * n > a || 3 * m + n > b)
//			{
//				break;
//			}
//		}
//		arr[j] = m + n;
//		j++;
//	}
//	arr[j + 1] = min(a / 2, b / 3);
//	arr[j + 2] = min(a / 4, b);
//	cout << Max(arr, j+2) << endl;
//	return 0;
//}
//#include<algorithm>
//int main()
//{
//	int cost;
//	cin >> cost;
//	int arr[361];
//	for (int i = 0; i <= cost; i++)
//	{
//		arr[i] = 1000;
//		if (i == 2 || i == 3 || i == 7 || i == 11)
//		{
//			arr[i] = 1;
//		}
//	}
//	for (int i = 4; i <= cost; i++)
//	{
//		if (i >= 2)
//		{
//			arr[i] = min(arr[i], arr[i - 2]+1);
//		}
//		if (i >= 3)
//		{
//			arr[i] = min(arr[i], arr[i - 3]+1);
//		}
//		if (i >= 7)
//		{
//			arr[i] = min(arr[i], arr[i - 7]+1);
//		}
//		if (i >= 11)
//		{
//			arr[i] = min(arr[i], arr[i - 11]+1);
//		}
//	}
//	if (arr[cost] == 1000)
//	{
//		cout << "你们铁血来骗，来偷袭我们格里芬的同志，这好吗？这不好！" << endl;
//	}
//	else
//	{
//		cout << arr[cost] << endl;
//	}
//	return 0;
//}
//int arr[100000][4];
//int arr1[100000] = { 0 };
//int main()
//{
//	int n, m, z;
//	cin >> n >> m;
//	int i = n;
//	while (i--)
//	{
//		cin >> z;
//	}
//	for (i = 0; i < m; i++)
//	{
//		cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
//		int ret = 0;
//		for (z = arr[i][0]; z <= arr[i][1]; z++)
//		{
//			if (z >= arr[i][2] && z <= arr[i][3])
//			{
//				ret++;
//			}
//		}
//		arr1[i] = ret;
//	}
//	for (i = 0; i < m; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//	return 0;
//}
//int arr1[100][1010] = { 0 };
//int arr2[100] = { 0 };
//int main()
//{
//	//创建数组储存数据
//	int t, n;
//	cin >> t;
//	int i, j;
//	for (i = 0; i < t; i++)
//	{
//		cin >> n;
//		for (j = 0; j < n; j++)
//		{
//			cin >> arr1[i][j];
//		}
//	}
//	for (i = 0; i < t; i++)
//	{
//		int logo = 1;//用于控制循环
//		int num = 0;//记录操作次数
//		while (logo)
//		{
//			int flag = 0;//用于判断是否有交换
//			//依次进行操作一和操作2
//			//操作一（奇数）
//			for (j = 0; arr1[i][j] != 0&& arr1[i][j+1] != 0; j += 2)
//			{
//				if (arr1[i][j] > arr1[i][j + 1])
//				{
//					int tmp = arr1[i][j];
//					arr1[i][j] = arr1[i][j + 1];
//					arr1[i][j + 1] = tmp;
//					flag = 1;
//				}
//			}
//			//如果有交换 num++
//			if (flag == 1)
//			{
//				num++;
//				flag = 0;
//			}
//			//操作二 （偶数）
//			for (j = 1; arr1[i][j] != 0 && arr1[i][j + 1] != 0; j += 2)
//			{
//				if (arr1[i][j] > arr1[i][j + 1])
//				{
//					int tmp = arr1[i][j];
//					arr1[i][j] = arr1[i][j + 1];
//					arr1[i][j + 1] = tmp;
//					flag = 1;
//				}
//			}
//			//如果有交换 num++
//			if (flag == 1)
//			{
//				num++;
//			}
//			//如果没有交换且num==0 进行操作2 如果没有交换且num==0 结束  储存num
//			if (flag == 0)
//			{
//				arr2[i] = num;
//			}
//			logo = flag;
//		}
//	}
//	//打印结果
//	for (i = 0; i < t; i++)
//	{
//		cout << arr2[i] << endl;
//	}
//	return 0;
//}
//int arr1[760] = { 0 };
//int arr2[760][10] = { 0 };
//int num[760] = { 0 };
//int main()
//{
//	//储存数据
//	int t;
//	cin >> t;
//	int i;
//	for (i = 0;i < t; i++)
//	{
//		cin >> arr1[i];
//	}
//	//将数据分解成单数并储存在数组中
//	for (i = 0; i < t; i++)
//	{
//		int j = 0;
//		while (arr1[i])
//		{
//			arr2[i][j] = arr1[i] % 10;
//			j++;
//			arr1[i] /= 10;
//		}
//	}
//	//处理数组（如果如果数组中某个数字a前有n个数字小于a 则将a改为a-1-n)
//	for (i = 0; i < t; i++)
//	{
//		int n = 0;
//		int j;
//		int z;
//		//计算n
//		for (j = 0; arr2[i][j] != 0; j++)
//		{
//			n = 0;
//			for (z = j + 1; arr2[i][z] != 0; z++)
//			{
//
//				if (arr2[i][j] > arr2[i][z])
//				{
//					n++;
//				}
//			}
//			//修改
//			arr2[i][j] = arr2[i][j] - 1 - n;
//		}
//		//依次提取数字（个位数，从后往前）arr[i][j]乘以j的阶乘再累加到num 最后加一
//		for (z = 0; z < j ; z++)
//		{
//			int jc = 1;//i的阶乘
//			if (z == 0)
//			{
//				jc = 0;
//			}
//			else
//			{
//				int m = z;//用于控制阶乘
//				while (m)
//				{
//					jc *= m;
//					m--;
//				}
//			}
//			//储存num到数组中(还没有加一)
//			num[i] += arr2[i][z] * jc;
//		}
//	}
//	
//	//输出num
//	for (i = 0; i < t; i++)
//	{
//		cout << num[i] + 1 << endl;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<cmath>
//int arr1[110] = { 0 };
//int arr2[110] = { 0 };
//int arr3[110][2000000] = { 0 };
//int arr4[110][2000000] = { 0 };
//#include<map>
//#include<string>
//int main()
//{
//	//储存数据到arr1 和arr2
//	map<int, string>m;//用于储存最后的结果
//	int t;
//	cin >> t;
//	int i, j;
//	for (i = 0; i < t; i++)
//	{
//		cin >> arr1[i] >> arr2[i];
//	}
//	//计算arr1和arr2中所有数的整数因子并储存到arr3 和arr4中(自然就从小到大)
//	//计算arr3
//	for (i = 0; i < t; i++)
//	{
//		int z = 0;
//		for (j = 2; j <= arr1[i]; j++)
//		{
//			if (arr1[i] % j == 0)
//			{
//				arr3[i][z] = j;
//				z++;
//			}
//		}
//	}
//	//计算arr4
//	for (i = 0; i < t; i++)
//	{
//		int z = 0;
//		for (j = 2; j <= arr2[i]; j++)
//		{
//			if (arr2[i] % j == 0)
//			{
//				arr4[i][z] = j;
//				z++;
//			}
//		}
//	}
//	//遍历arr3与arr4中元素比较 若有arr3中元素与arr4中元素相等 flag=1 结束 或arr3中指定元素小于arr4中元素arr3换下一个元素
//	//如果arr3遍历完后flag=0  结束 结束后若flag=0 将yes储存到map 若falg=1 将no储存到map
//	for (i = 0; i < t; i++)
//	{
//		int flag = 0;
//		for (j = 0; arr3[i][j] != 0; j++)
//		{
//			for (int z = 0; arr4[i][z] != 0; z++)
//			{
//				if (arr3[i][j] == arr4[i][z])
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			m.insert(make_pair(i, "YES"));
//		}
//		else
//		{
//			m.insert(make_pair(i, "NO"));
//		}
//	}
//	//打印map容器
//	map<int, string>::iterator it = m.begin();
//	for (i = 0; i < t; i++)
//	{
//		cout << it->second << endl;
//		it++;
//	}
//	return 0;
//}
//#include<string>
//#include<map>
//int main()
//{
//	map<int, string>m;
//	m.insert(make_pair(1, "aaa"));
//	//void printMap(map<int, int>&m)
//	//{
//	//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	//	{
//	//		cout << "key = " << it->first << " value = " << it->second << endl;
//	//	}
//	//}
//	map<int, string>::iterator it = m.begin();
//	cout << it->first << " " << it->second << endl;
//	return 0;
//}
//struct Node
//{
//	int data;
//	Node* next;
//};
//int main()
//{
//	//储存数据到arr1
//	int n;
//	int num = 0;//记录交换次数
//	cin >> n;
//	Node* head = new Node;
//	Node* p = head;
//	while (n--)
//	{
//		p->next = new Node;
//		p = p->next;
//		cin >> p->data;
//	}
//	p->next = NULL;
//	Node* end = p;
//	//i从0开始  若arr1[i]>arr[i+1] 将arr[i]移到最后(可以用链表) num++ 直到 p指向NULL
//	p = head;
//	Node* q = p->next;
//	while (q->next)
//	{
//		if (q->data > q->next->data)
//		{
//			p->next = q->next;
//			end->next = q;
//			q->next = NULL;
//			end = q;
//			q = p->next;
//			num++;
//		}
//		else
//		{
//			p = p->next;
//			q = q->next;
//		}
//	}
//	//打印num
//	cout << num << endl;
//	return 0;
//}
//int main()
//{
//	Node* p = new Node;
//	Node* q = new Node;
//	p->next = q;
//	p->data = 1;
//	q->data = 2;
//	if (p->data < p->next->data)
//	{
//		cout << "yes" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//	return 0;
//}


//#include<map>
//#include<string>
//int arr1[210000] = { 0 };
//int main()
//{
//	//储存数据
//	int n;
//	cin >> n;
//	map<int, string>m;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		m.insert(make_pair(i, s));
//	}
//	string org;//保留母串
//	cin >> org;
//	//比较（可惜不会kmp算法） 如果相符  num++  直到源字符串找完 记录num到数组中
//	map<int, string>::iterator it = m.begin();
//	for (i = 0; i < n; i++)
//	{
//		string str = it->second;
//		for (int j = 0; j <= (int)(org.size() - str.size()); j++)
//		{
//			string ret = org.substr(j, str.size());
//			if (str == ret)
//			{
//				arr1[i]++;
//			}
//		}
//		it++;
//	}
//	//打印num
//	for (i = 0; i < n; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//	return 0;
//}
//typedef struct Node
//{
//	int data;
//	Node* next;
//	Node* prev;
//}Node;
//int arr1[210] = { 0 };
//void test1()
//{
//	//储存数据(用环链表)
//	Node* head, *p, *s;
//	int n;
//	cin >> n;
//	int i;
//	head = new Node;
//	p = head;//初始化
//	cin >> head->data;
//	for (i = 0; i < n-1; i++)
//	{
//		s = p;
//		p->next = new Node;
//		p = p->next;
//		cin >> p->data;
//		p->prev = s;
//	}
//	p->next = head;
//	head->prev = p;
//	p = head;
//	//将所有相邻结点的数据相加并储存到数组中 找到数组中最大值的下标i 将链表中第i个节点 和第i+1个节点合并 然后找合并后节点的左右节点中较大的节点合并 直到全部
//	//合并 
//	//建立数组
//	for (i = 0;; i++)
//	{
//		arr1[i] = p->data + p->next->data;
//		p = p->next;
//		if (p == head)
//		{
//			break;
//		}
//	}
//	//找最大值下标
//	int flag = 0;
//	int max = 0;
//	for (i = 0; arr1[i] != 0; i++)
//	{
//		if (max < arr1[i])
//		{
//			max = arr1[i];
//			flag = i;
//		}
//	}
//	//合并
//	int num = 0;//记录最后结果
//	p = head;
//	while (flag--)
//	{
//		p = p->next;
//	}
//	n -= 2;
//	while (n--)
//	{
//		//后合并
//		if (p->next->data >= p->prev->data)
//		{
//			s = new Node;
//			s->data = p->data + p->next->data;
//			num += s->data;
//			p->prev->next = s;
//			s->prev = p->prev;
//			s->next = p->next->next;
//			p->next->next->prev = s;
//			delete p;
//			p = s;
//		}
//		//前合并
//		else
//		{
//			s = new Node;
//			p = p->prev;
//			s->data = p->data + p->next->data;
//			num += s->data;
//			p->prev->next = s;
//			s->prev = p->prev;
//			s->next = p->next->next;
//			p->next->next->prev = s;
//			delete p;
//			p = s;
//		}
//	}
//	num += (p->data + p->next->data);
//	//输出最后节点的数据
//	cout <<  num<< endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//刷Leetcond上的题 限制20分钟没思路就看题解 或60分钟没做出来也看题解

//template<typename T>//可以进行各种数据类型的排序
//void Qsort(int left,int right,T arr[])//指向两边
//{
//	if (left < right)//必不可少 否则递归不停
//	{
//		//快速排序
//		int l = left;
//		int r = right;
//		int base = arr[left];
//		while (l < r)
//		{
//			//找到左边第一个大于base的数和右边第一个小于base的数并交换
//			while (l < r&&arr[r] >= base)r--;
//			while (l < r&&arr[l] <= base)l++;
//			if (l < r)
//			{
//				int temp = arr[l];
//				arr[l] = arr[r];
//				arr[r] = temp;
//			}
//		}
//		//将base值与l和r 重合的值交换(做到了base左边的数比base小 base右边的数比base大）
//		arr[left] = arr[l];
//		arr[l] = base;
//		//用递归对左右两边进行同样的操作
//		Qsort(left, r - 1, arr);
//		Qsort(r + 1, right, arr);
//	}
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for(i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	Qsort(0, 9, arr);
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}


//各种排序算法的性能总结
/*
各种排序方法的综合比较一、时间性能
1.按平均的时间性能来分，有三类排序方法:时间复杂度为O(nlogi)的方法有:
快速排序、堆排序和归并排序，其中以快速排序为最好;
时间复杂度为O(n2)的有:
·直接插入排序、冒泡排序和简单选择排序，其中以直接插入为最好，特别是对那些对关键字近似有序的记录序列尤为如此;
时间复杂度为O(n)的排序方法只有:基数排序。
注意事项：
2.当待排记录序列按关键文顺序有序时，直接插入排序和冒泡排序能达到O(n)的时间复杂度;而对于快速排序而言，
这是最不好的情况，此时的时间性能退化为O(n2)，因此是应该尽量避免的情况。
3.简单选择排序、堆排序和归并排序的时间性能不随记录序列中关键字的分布而改变。


各种排序方法的综合比较二、空间性能：指的是排序过程中所需的辅助空间大小
1.所有的简单排序方法(包括:直接插入、冒泡和简单选择)和堆排序的空间复杂度为O(1)
⒉.快速排序为O(logn)，为栈所需的辅助空间
3.归并排序所需辅助空间最多，其空间复杂度为O(n)
4.链式基数排序需附设队列首尾指针，则空间复杂度为O(rd)

四、关于“排序方法的时间复杂度的下”
·本章讨论的各种排序方法，除基数排序外，其它方法都是基于“比较关键字”进行排序的排序方法，可以证明，这类排序法可能达到的最快的时间复杂度为O(nlogn)。
基数排序不是基于“比较关键字”的排序方法,所以它不受这个限制)。
·可以用一棵判定树来描述这类基于“比较关键字”进行排序的排序方法。
*/
//实现一下各种算法
//1.冒泡排序
//2.直接插入排序
//3.选择排序
//4.快速排序
//5.堆排序
//6.归并排序
//7.基数排序
//8.希尔排序

//void test05()
//{
//	//8.希尔排序
//	int arr[10] = { 9,5,3,1,6,7,4,2,8,10 };
//	int n = sizeof(arr) / 4;
//	int gap = n / 2;
//	int i, j;
//	while (gap)
//	{
//		for (i = gap; i < n; i++)
//		{
//			int tmp = arr[i];
//			j = i;
//			while (j >= gap &&tmp < arr[j - gap])
//			{
//				arr[j] = arr[j - gap];
//				j -= gap;//体现了一个插入排序的过程 将一个数组中的数移到能移到的最前位置
//			}
//			arr[j] = tmp;
//		}
//		gap /= 2;
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";//1 2 3 4 5 6 7 8 9 10
//	}
//	cout << endl;
//}
//template<typename T>//可以进行各种数据类型的排序
//void Qsort(int left, int right, T arr[])//指向两边
//{
//	if (left < right)//必不可少 否则递归不停
//	{
//		//快速排序
//		int l = left;
//		int r = right;
//		int base = arr[left];
//		while (l < r)
//		{
//			//找到左边第一个大于base的数和右边第一个小于base的数并交换
//			while (l < r&&arr[r] >= base)r--;
//			while (l < r&&arr[l] <= base)l++;
//			if (l < r)
//			{
//				int temp = arr[l];
//				arr[l] = arr[r];
//				arr[r] = temp;
//			}
//		}
//		//将base值与l和r 重合的值交换(做到了base左边的数比base小 base右边的数比base大）
//		arr[left] = arr[l];
//		arr[l] = base;
//		//用递归对左右两边进行同样的操作
//		Qsort(left, r - 1, arr);
//		Qsort(r + 1, right, arr);
//	}
//}
//void test04()
//{
//	int arr[10] = { 9,5,3,1,6,7,4,2,8,10 };
//	int sz = sizeof(arr) / 4;
//	int i;
//	Qsort(0, 9, arr);
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";//1 2 3 4 5 6 7 8 9 10
//	}
//	cout << endl;
//}
//
//void test03()
//{
//	//2.直接插入排序(适用于基本有序的数组，将无序数组逐个插入到有序数组中)
//	int arr[10] = { 9,5,3,1,6,7,4,2,8,10 };//无序也可以用，不过麻烦点
//	int i, j;
//	int sz = sizeof(arr) / 4;
//	int tmp;
//	for (i = 1; i < sz; i++)
//	{
//		tmp = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";//1 2 3 4 5 6 7 8 9 10
//	}
//	cout << endl;
//}
//void test02()
//{
//	//3.选择排序
//	int arr[10] = { 9,5,3,1,6,7,4,2,8,10 };
//	int i, j;
//	int sz = sizeof(arr) / 4;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int min = 100000;
//		int flag = i;
//		for (j = i; j < sz; j++)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j];
//				flag = j;
//			}
//		}
//		int temp = arr[i];
//		arr[i] = min;
//		arr[flag] = temp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";//1 2 3 4 5 6 7 8 9 10
//	}
//	cout << endl;
//}
//void test01()
//{
//	//1.冒泡排序
//	int arr[10] = { 9,5,3,1,6,7,4,2,8,10 };
//	int i, j;
//	int sz = sizeof(arr) / 4;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";//1 2 3 4 5 6 7 8 9 10
//	}
//	cout << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	test05();
//	return 0;
//}
//
//void shellSort(int arr[], int n)
//{
//	int tmp = 0;
//	int step = n / 2;
//	while (step)
//	{
//		for (int i = step; i < n; i++)
//		{
//			tmp = arr[i];
//			int j = i;
//			while (j >= step && tmp < arr[j - step])   //采用直接插入排序
//			{
//				arr[j] = arr[j - step];
//				j -= step;
//			}
//
//			arr[j] = tmp;
//		}
//
//		step = step / 2;
//	}
//}

//int main()
//{
//	int arr[]{ 3, 14, 25, -22, -3, 87, 126, 34, 64, -70, 15, 17 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	//shellSort(arr, n);
//	int tmp = 0;
//	int step = n / 2;
//	while (step)
//	{
//		for (int i = step; i < n; i++)
//		{
//			tmp = arr[i];
//			int j = i;
//			while (j >= step && tmp < arr[j - step])   //采用直接插入排序
//			{
//				arr[j] = arr[j - step];
//				j -= step;
//			}
//
//			arr[j] = tmp;
//		}
//
//		step = step / 2;
//	}
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//	return 0;
//}


#include<iostream>
using namespace std;
//过河卒
//typedef struct Node
//{
//	int hen;//横坐标
//	int lie;//纵坐标
//	Node* lchild;
//	Node* rchild;
//}Node;
//void creat(Node* head, int bhen, int blie,int mhen,int mlie,int& num)
//{
//	if (head->hen - mhen == 2 && head->lie - mlie == 1 || head->hen - mhen == 2 && head->lie - mlie == -1
//		|| head->hen - mhen == -2 && head->lie - mlie == 1 || head->hen - mhen == -2 && head->lie - mlie == -1
//		|| head->hen - mhen == 1 && head->lie - mlie == 2 || head->hen - mhen == 1 && head->lie - mlie == -2
//		|| head->hen - mhen == -1 && head->lie - mlie == 2 || head->hen - mhen == -1 && head->lie - mlie == -2
//		|| head->hen - mhen == 0 && head->lie - mlie == 0
//		)return;
//	if (head->hen < bhen&&head->lie < blie)
//	{
//		Node* lchild = new Node;
//		Node* rchild = new Node;
//		lchild->lchild = lchild->rchild = rchild->lchild = rchild->rchild = NULL;
//		lchild->hen = head->hen + 1;
//		lchild->lie = head->lie;
//		rchild->hen = head->hen;
//		rchild->lie = head->lie + 1;
//		head->lchild = lchild;
//		head->rchild = rchild;
//		creat(lchild, bhen, blie,mhen,mlie,num);
//		creat(rchild, bhen, blie,mhen,mlie,num);
//	}
//	if (head->hen == bhen&&head->lie < blie)
//	{
//		Node* rchild = new Node;
//		rchild->lchild = rchild->rchild = NULL;
//		rchild->hen = head->hen;
//		rchild->lie = head->lie + 1;
//		head->rchild = rchild;
//		creat(rchild, bhen, blie, mhen, mlie,num);
//	}
//	if (head->hen < bhen&&head->lie == blie)
//	{
//		Node* lchild = new Node;
//		lchild->lchild = lchild->rchild = NULL;
//		lchild->hen = head->hen + 1;
//		lchild->lie = head->lie;
//		head->lchild = lchild;
//		creat(lchild, bhen, blie, mhen, mlie, num);
//	}
//	if (head->hen == bhen&&head->lie == blie)
//	{
//		num++;
//	}
//}
//int main()
//{
//	//采用树的方法
//	//建立一个树
//	//输入B的坐标和马的坐标 并根据B的坐标确定树的深度
//	int bhen, blie, mhan, mlie;
//	cin >> bhen >> blie >> mhan >> mlie;
//	Node* head = new Node;
//	head->hen = 0;
//	head->lie = 0;
//	int num = 0;
//	creat(head, bhen, blie,mhan,mlie,num);
//	cout << num << endl;
//	return 0;
//}



//int step_x[] = { -1,-2,-2,-1,1,2,2,1 };
//int step_y[] = { -2,-1,1,2,-2,-1,1,2 };
//bool vis[25][25];
//int n, m, x, y;
//long long dp[25][25];
//void init()
//{
//	vis[x][y] = true;
//	for (int i = 0; i < 8; i++)
//	{
//		int xx = x + step_x[i];
//		int yy = y + step_y[i];
//		if (xx >= 0 && xx <= n&&yy >= 0 && yy <= m)
//		{
//			vis[xx][yy] = true;
//		}
//	}
//	/*
//	第0行,第0列，初始化，
//	如果遇到一个马控制点，
//	从  这个马控制点 开始  都不可达！！！
//	*/
//	for (int i = 0; i <= n; i++)
//	{
//		if (!vis[i][0])
//			dp[i][0] = 1;
//		else
//			break;
//	}
//	for (int i = 0; i <= m; i++)
//	{
//		if (!vis[0][i])
//			dp[0][i] = 1;
//		else
//			break;
//	}
//}
//int main()
//{
//	cin >> n >> m >> x >> y;
//	init();
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (!vis[i][j])
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}

//int arr1[10];//系统初始化为0
//int main()
//{
//	int arr[10];//系统不会初始化
//	return 0;
//}

//过河卒
//int step_x[8] = { 1,1,-1,-1,2,2,-2,-2 };
//int step_y[8] = { 2,-2,-2,2,1,-1,-1,1 };
//long long dp[25][25];//long long 必不可少 否则会出错
//bool vis[25][25];//系统初始化为false
//int x, y, n, m;//放在此处方便全局调用，用不着传参
//void init()
//{
//	vis[x][y] = true;
//	dp[1][1] = 1;
//	dp[0][1] = 1;//防治初始化时将dp[1][1]初始化为0
//	int i;
//	for (i = 0; i < 8; i++)
//	{
//		int xx = x + step_x[i];
//		int yy = y + step_y[i];
//		if (xx >= 0 && xx <= 25 && yy >= 0 && yy <= 25)
//		{
//			vis[xx][yy] = true;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m >> x >> y;
//	n++, m++, x++, y++;//简化初始过程
//	int i, j;
//	init();//初始化二维数组dp 和vis
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			if (!vis[i][j])
//			{
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//			}
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}


//#include<algorithm>
//typedef long long LL;
//int step_x[] = { -1,-2,-2,-1,1,2,2,1 };
//int step_y[] = { -2,-1,1,2,-2,-1,1,2 };
//bool vis[25][25];
//int n, m, x, y;
//LL dp[25][25];
//void init()
//{
//	dp[1][1] = 1;
//	vis[x][y] = true;
//	for (int i = 0; i < 8; i++)
//	{
//		int xx = x + step_x[i];
//		int yy = y + step_y[i];
//		if (xx >= 0 && xx <= 25 && yy >= 0 && yy <= 25)
//		{
//			vis[xx][yy] = true;
//		}
//	}
//
//}
//int main()
//{
//	cin >> n >> m >> x >> y;
//	n++, m++;
//	x++, y++;
//	init();
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (!vis[i][j])
//				dp[i][j] = max(dp[i - 1][j] + dp[i][j - 1], dp[i][j]);
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}
//
//
//分析
/*
1.储存数据到二维数组arr中
2,从arr中最后一位开始判断地毯是否覆盖判断点
3.循环直到找到某地毯覆盖该点
4.输出该地毯
*/
//int n;
//int arr[11000][5];
//int x, y;//用于储存判断点
//int main()
//{
//	cin >> n;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cin >> x >> y;
//	for (i = n-1; i>=0; i--)
//	{
//		if (x >= arr[i][0] && x<=arr[i][0] + arr[i][2] && y>=arr[i][1] && y <= arr[i][1] + arr[i][3])
//		{
//			break;
//		}
//	}
//	if (i == -1)
//		cout << i << endl;
//	else
//		cout << i + 1 << endl;
//	return 0;
//}

//分析
/*
1.储存数据到二维数组arr中
2.处理数据 遍历二维数组 依次找到非0的数 以此为第一个过点找下面非零可过点 并累加 将累加结果存到arr1数组中 将此点置为0
3.循环 直到数组全部为零
4.将arr1中最大的两个数相加
5.输出
*/
//int arr[10][10];
//int N;
//int arr1[110];
//int x = 1, y = 1;//记录改变的坐标
//int num;//记录改变值
//int main()
//{
//
//	int sum = 0;//记录非零元素个数
//	cin >> N;
//	while (x + y)
//	{
//		cin >> x >> y >> num;
//		arr[x][y] = num;
//		sum++;
//	}
//	int i, j, z;
//	for (z = 0; z < sum; z++)
//	{
//		int flag = 0;//判断是否为每遍遍历的第一个数
//		int i1 = 0, j1 = 0;
//		for (i = 1; i <= N; i++)
//		{
//			for (j = 1; j <= N; j++)
//			{
//				if (i>=i1 && j>=j1 && arr[i][j] != 0)
//				{
//					arr1[z] += arr[i][j];
//					if (flag == 0)
//					{
//						arr[i][j] = 0;
//					}
//					i1 = i;//记录该点坐标
//					j1 = j;
//					flag = 1;
//				}
//			}
//		}
//	}
//	int flag = 0;//用于记录最大值的坐标
//	int max = -1;
//	for (i = 0; i < sum; i++)
//	{
//		if (arr1[i] > max)
//		{
//			max = arr1[i];
//			flag = i;
//		}
//	}
//	int ret = max;
//	max = -1;
//	arr1[flag] = 0;
//	for (i = 0; i < sum; i++)
//	{
//		if (arr1[i] > max)
//		{
//			max = arr1[i];
//			flag = i;
//		}
//	}
//	ret += max;
//	cout << ret << endl;
//	return 0;
//}
//
///*
//8
//2 3 13
//2 6  6
//3 5  7
//4 4 14
//5 2 21
//5 6  4
//6 3 15
//7 2 14
//0 0  0
//*/
//上面代码有问题，下面经行修改
//先不要将走过的第一个值置为零 将走的下一个值置为零 直到从该位置走到最后和为该位置本身停止

//int arr[10][10];
//int arr2[10][10];
//int N;
//int arr1[110];
//int x = 1, y = 1;//记录改变的坐标
//int num;//记录改变值
//int main()
//{
//
//	int sum = 0;//记录非零元素个数
//	cin >> N;
//	while (x + y)
//	{
//		cin >> x >> y >> num;
//		arr[x][y] = num;
//		sum++;
//	}
//	int i, j, z;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			arr2[i][j] = arr[i][j];
//		}
//	}
//	int i1 = 0, j1 = 0, ii = 0, jj = 0;
//	int ret = 0;
//	for (z = 0; z < sum; z++)
//	{
//		arr2[ii][jj] = 0;
//		for (i = 0; i < 10; i++)
//		{
//			for (j = 0; j < 10; j++)
//			{
//				arr[i][j] = arr2[i][j];
//			}
//		}
//		ret = 0;
//		int m = 0;//控制进入循环
//		int m1 = 0;//控制跳出循环
//		while (m==0 || m1 != arr[ii][jj])
//		{
//			arr1[z] = 0;
//			int flag = 0;//记录从开始位置走了多少元素
//			for (i = 1; i <= N; i++)
//			{
//				for (j = 1; j <= N; j++)
//				{
//					if (i >= i1 && j >= j1 && arr[i][j] != 0)
//					{
//						arr1[z] += arr[i][j];
//						if (flag == 0)
//						{
//							ii = i;
//							jj = j;//记录第一个点的坐标
//						}
//						if (flag == 1)
//						{
//							arr[i][j] = 0;
//						}
//						i1 = i;//记录该点坐标
//						j1 = j;
//						flag++;
//					}
//				}
//			}
//			m1 = arr1[z];
//			if(ret>arr1[z])
//			{
//				arr1[z] = ret;
//			}
//			else
//			{
//				ret = arr1[z];
//			}
//			i1 = 0, j1 = 0;
//			m++;
//		}
//	}
//	int flag = 0;//用于记录最大值的坐标
//	int max = -1;
//	for (i = 0; i < sum; i++)
//	{
//		if (arr1[i] > max)
//		{
//			max = arr1[i];
//			flag = i;
//		}
//	}
//	int ret1 = max;
//	max = -1;
//	arr1[flag] = 0;
//	for (i = 0; i < sum; i++)
//	{
//		if (arr1[i] > max)
//		{
//			max = arr1[i];
//			flag = i;
//		}
//	}
//	ret1 += max;
//	cout << ret1 << endl;
//	return 0;
//}

/*
8
2 3 13
2 6  6
3 5  7
4 4 14
5 2 21
5 6  4
6 3 15
7 2 14
0 0  0
*/

//#include<algorithm>
//using namespace std;
//int dp[12][12][12][12];
//int arr[12][12];
//void fun(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				for (int l = 1; l <= n; l++)
//				{
//					dp[i][j][k][l] = max(max(dp[i - 1][j][k - 1][l], dp[i - 1][j][k][l - 1]), max(dp[i][j - 1][k - 1][l], dp[i][j - 1][k][l - 1])) + arr[i][j] + arr[k][l];
//					if (i == k&&j == l)
//					{
//						dp[i][j][k][l] -= arr[i][j];
//					}
//				}
//			}
//		}
//	}
//	cout << dp[n][n][n][n] << endl;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int x, y, val;
//	cin >> x >> y >> val;
//	while (!(x == 0 && y == 0 && val == 0))
//	{
//		arr[x][y] = val;
//		cin >> x >> y >> val;
//	}
//	fun(n);
//	return 0;
//}

/*
1.储存数据
2.比较每组数第一位和最后一位数的大小 每次取每组中最小值之和乘以2^i并加到num
3.输出num
*/
//#include<cmath>
//typedef struct Node
//{
//	int data;
//	Node* next;
//	Node* prve;
//}Node;
//Node* Head[100000];//头指针数组
//Node* End[100000];//尾指针数组
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int i, j;
//	Node* p;
//	Node* q;
//	for (i = 0; i < n; i++)
//	{
//		Head[i] = new Node;
//		p = Head[i];
//		cin >> p->data;
//		p->next = new Node;
//		q = p;
//		p = p->next;
//		for (j = 0; j < m-2 ; j++)
//		{
//			cin >> p->data;
//			p->next = new Node;
//			p->prve = q;
//			q = p;
//			p = p->next;
//		}
//		cin >> p->data;
//		p->prve = q;
//		End[i] = p;
//	}
//	int sum = 0;//记录最后的值
//	for (i = 0; i < m; i++)
//	{
//		int ret = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (Head[j]->data <= End[j]->data)
//			{
//				ret += Head[j]->data;
//				Head[j] = Head[j]->next;
//			}
//			else
//			{
//				ret += End[j]->data;
//				End[j] = End[j]->prve;
//			}
//		}
//		sum += ret*(int)pow(2, i + 1);
//	}
//	cout << sum << endl;
//	return 0;
//}

/*int arr[110];*/
/*int main()
{
long long num = 0;
int n;
cin >> n;
while (n)
{
int ret = n;
long long sum = 1;
while (ret)
{
sum *= ret;
ret--;
}
num += sum;
n--;
}
cout << num << endl;
return 0;
}*/
//2845178393  -2938623273982363111
//1177652997443428940313  (输入为22)
//int main()
//{
//	char a[202] = { 0 }, b[202] = { 0 };
//	scanf("%s%s", a, b);
//	int alen = strlen(a), blen = strlen(b), t = 0, i;
//	int a1[202] = { 0 }, b1[202] = { 0 };
//	for (i = 0; i < alen; i++)	a1[i] = a[alen - 1 - i] - '0';
//	for (i = 0; i < blen; i++)	b1[i] = b[blen - 1 - i] - '0';
//	alen = (alen > blen) ? alen : blen;
//	for (i = 0; i <= alen; i++)
//		t = a1[i] - b1[i], t<0 ? (t += 10, a1[i + 1]--) : t, a1[i] = t;
//	while (!a1[i] && i) i--;
//	for (; i >= 0; i--) printf("%d\n", a1[i]);
//	return 0;
//}

//---------------------------------------------------------------------------------可以保存！！！！！！！！！！！！
//高精度加减法
//string a, b;
//int a1[300], b1[300];
//int main()
//{
//	cin >> a >> b;
//	int i;
//	int lena = a.size();
//	int lenb = b.size();
//	for (i = 0; i < lena; i++)a1[i] = a[lena - i - 1] - '0';
//	for (i = 0; i < lenb; i++)b1[i] = b[lenb - i - 1] - '0';
//	int max = lena > lenb ? lena : lenb;
//	for (i = 0; i < max; i++)
//	{
//		int t = a1[i] - b1[i];
//		if (t < 0)
//		{
//			a1[i + 1]--;
//			t += 10;
//		}
//		a1[i] = t;
//	}
//	while (!a1[i] && i)i--;
//	for (; i >= 0; i--)
//	{
//		cout << a1[i];//Ok
//	}
//	cout << endl;
//	return 0;
//}

//高精度加法
//string a, b;
//int a1[300], b1[300];
//int main()
//{
//	cin >> a >> b;
//	int i;
//	int lena = a.size();
//	int lenb = b.size();
//	for (i = 0; i < lena; i++)a1[i] = a[lena - i - 1] - '0';
//	for (i = 0; i < lenb; i++)b1[i] = b[lenb - i - 1] - '0';
//	int max = lena > lenb ? lena : lenb;
//	for (i = 0; i < max; i++)
//	{
//		int t = a1[i] + b1[i];
//		if (t >= 10)
//		{
//			a1[i + 1] += t / 10;
//			t %= 10;
//		}
//		a1[i] = t;
//	}
//	while (!a1[i] && i)i--;
//	for (; i >= 0; i--)
//	{
//		cout << a1[i];//Ok
//	}
//	cout << endl;
//	return 0;
//}

//高精度乘法
//string a, b;
//int a1[40], b1[40], c1[50];
//int main()
//{
//	cin >> a >> b;
//	int lena = a.size();
//	int lenb = b.size();
//	int i, j;
//	int flag = -1;
//	for (i = 0; i < lena; i++)a1[i] = a[lena - 1 - i] - '0';
//	for (i = 0; i < lenb; i++)b1[i] = b[lenb - 1 - i] - '0';
//	for (i = 0; i < lena; i++)
//	{
//		for(j = 0; j < lenb; j++)
//		{
//			int t = a1[i] * b1[j];
//			if (t >= 10)
//			{
//				c1[i + j + 1] += t / 10;
//				if (i + j + i > flag)flag = i + j + 1;
//				t %= 10;
//			}
//			c1[i + j] += t;
//			if (i + j > flag)flag = i + j;
//		}
//	}
//	for (i = 0; i<flag; i++)
//	{
//		if (c1[i] >= 10)
//		{
//			c1[i + 1] += c1[i] / 10;
//			if (i + 1 > flag)flag = i + 1;
//			c1[i] %= 10;
//		}
//	}
//	for (i=flag; i >= 0; i--)
//	{
//		cout << c1[i];//可以了
//	}
//	cout << endl;
//	return 0;
//}
//------------------------------------------------------做一个博客吧
//int j[30];
//int j1[35];
//int a[40];
//int main()
//{
//int n;
//cin >> n;
//int i, k, z;
//j[0] = 1;
//int f1 = 1;//记录j的位数
//for (i = 1; i <= n; i++)
//{
//	int f2 = -1;//记录j1的位数
//	//计算i的阶乘
//	for (k = 1; k <= i; k++)
//	{
//		int a, b;
//		int flag = 0;//判断i是否大于10
//		for (z = 0; z < f1; z++)
//		{

//			if (k >= 10)
//			{
//				a = k % 10;
//				b = k / 10;
//				flag = 1;
//			}
//			else
//			{
//				a = k;
//			}
//			int t = j[z] * a;
//			if (t >= 10)
//			{
//				j1[z + 1] += t / 10;
//				t %= 10;
//				if (z + 1 > f2)f2 = z + 1;
//			}
//			j1[z] = t;
//			if (z > f2)f2 = z;
//		}
//		for (int m = 0; m < f2; m++)
//		{
//			if (j1[m] >= 10)
//			{
//				j1[m + 1] += j1[m] / 10;
//				if (m + 1 > f2)f2 = m + 1;
//				j1[m] %= 10;
//			}
//		}
//		j = j1;
//		f1 = f2;
//	}
//	

//}
/*j = j1;
return 0;
}*/

//#include<iostream>
//#include<cstring>
//using namespace std;
//int n, a[90], b[90], c[90], f[90], d = 0, len_a, len_b = 1, len_c = 1, len_ans, m = 1;
//string s;
//int main() {
//	cin >> n;
//	b[0] = 1; //初始化
//	for (int i = 1; i <= n; i++) { //计算i的阶乘，已经算好了i-1的阶乘
//		len_a = 0; //i的长度
//		int p = i;
//		while (p>0) { //把i存进a数组
//			a[len_a++] = p % 10;
//			p /= 10;
//		}
//		for (int j = 0; j<len_a; j++) //计算a*b（i*（i-1）的阶乘），即i的阶乘，看不懂的网上查，我也不知道为什么
//			for (int k = 0; k <= len_b; k++)
//				c[j + k] += a[j] * b[k];
//		for (int j = 0; j<len_c; j++) //需要进位的就进位
//			if (c[j]>9) c[j + 1] += c[j] / 10, c[j] %= 10;
//		if (c[len_c]) len_c++; //看最高位要不要进位
//		len_ans = len_b, len_b = len_c, m = max(m, len_c); //把len_b赋值给len_ans，修改len_b的值，m为i阶乘的长度，看有没有进位
//		for (int k = len_c - 1; k >= 0; k--) 
//			b[k] = c[k]; //把c存进b数组，即存进i的阶乘，下次循环b为i-1的阶乘
//		len_c = len_a + len_ans;
//		memset(c, 0, sizeof(c)); //清零c数组，准备计算下个阶乘
//		for (int j = 0; j<m; j++) { //高精加，直接套模板
//			f[j] += b[j];
//			if (f[j]>9) f[j + 1] += f[j] / 10, f[j] %= 10; //进位，注意不要写成f[j+1]++，f[j]-=10;就因为这里wa了一个点
//		}
//	}
//	while (!f[m] && m>0) m--; //去掉首导零
//	for (int i = m; i >= 0; i--) cout << f[i]; //倒序输出
//	return 0; //圆满结束
//}
//计算1的阶乘加到n的阶乘
//int a[80], b[80], c[80], d[80], la = 1, lb = 1, lc , ld = 1;
//int main()
//{
//	int n;
//	int x = -1;//记录b和d的最大长度
//	b[0] = 1;//放入1的阶乘
//	cin >> n;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		la = 0;
//		//将i存到a中
//		int p = i;
//		while (p)
//		{
//			a[la] = p % 10;
//			la++;
//			p /= 10;
//		}
//		//假设已知(i-1)的阶乘放在b中 将a与b中元素相乘并放在c中
//		for (int k = 0; k < la; k++)
//		{
//			for (int j = 0; j <= lb; j++)
//			{
//				c[k + j] += a[k] * b[j];
//				if (c[k + j] >= 10)
//				{
//					c[k + j + 1] += c[k + j] / 10;
//					c[k + j] %= 10;
//					if (k + j + 1 > lc)lc = k + j + 1;
//				}
//				if (k + j  > lc)lc = k + j ;
//			}
//		}
//		//将c中元素赋给b
//		for (int k = 0; k <= lc; k++)
//		{
//			b[k] = c[k];
//		}
//		lb = lc;
//		memset(c, 0, sizeof(c));//置零  为了下一个阶乘
//		x = max(x, lb);
//		//将i的阶乘加到d
//		for (int k = 0; k <= x; k++)
//		{
//			d[k] += b[k];
//			if (d[k] >= 10)
//			{
//				d[k + 1] += d[k] / 10;
//				if (k + 1 > x)
//				{
//					x = k + 1;
//				}
//				d[k] %= 10;
//			}
//		}
//	}
//	for (i = x; i >= 0; i--)
//	{
//		cout << d[i];
//	}
//	cout << endl;
//	return 0;
//}

//bool is_pri(int i)//判断质数
//{
//	if (i == 2)return true;
//	int m;
//	int flag = 0;
//	for (m = 3; m <= sqrt(i); m++)
//	{
//		if (i%m == 0)flag = 1;
//	}
//	if (flag == 0)return true;
//	return false;
//}
//bool is_ph(int i)//判断回文
//{
//	int p = i;
//	int num = 0;
//	while (p)
//	{
//		num = num * 10 + p % 10;
//		p /= 10;
//	}
//	if (i == num)return true;
//	return false;
//}

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int i;
//	for (i = a; i <= b; i++)
//	{
//		if (i % 2 != 0)
//		{
//			int p = i;
//			int num = 0;
//			while (p)
//			{
//				num = num * 10 + p % 10;
//				p /= 10;
//			}
//			if (i == num)
//			{
//				int flag = 0;
//				for (int j = 3; j <= sqrt(i); j++)
//				{
//					if (i%j == 0)
//					{
//						flag = 1;
//					}
//				}
//				if (flag == 0)
//				{
//					cout << i << endl;
//				}
//			}
//		}
//		if (i > 10000000)
//		{
//			break;//则相当于投机取巧  因为一千万到一亿之间没有回文质数 哈哈哈
//		}
//	}
//	return 0;
//}

//class stu
//{
//public:
//	bool operator ==(stu s)
//	{
//		int sum1 = this->c + this->e + this->m;
//		int sum2 = s.c + s.e + s.m;
//		if (this->c - s.c >= -5 && this->c - s.c <= 5 &&
//			this->m - s.m >= -5 && this->m - s.m <= 5 &&
//			this->e - s.e >= -5 && this->e - s.e <= 5 &&
//			sum1 - sum2 >= -10 && sum1 - sum2 <= 10)
//		{
//			return true;
//		}
//		return false;
//	}
//	int c;
//	int m;
//	int e;
//};
//stu arr[1100];
//int main()
//{
//	int	N;
//	cin >> N;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		cin >> arr[i].c >> arr[i].m >> arr[i].e;
//	}
//	int num = 0;
//	int j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = i + 1; j < N; j++)
//		{
//			if (arr[i] == arr[j])num++;
//		}
//	}
//	cout << num << endl;
//	return 0;
//}

//int main()
//{
//	int arr[5][6][7];//其中5代表高 6代表行  7代表列
//	cout << (int)&arr[0][0][0] << "  "<<(int)&arr[4][3][2] << endl;//16447284  16448048 
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int arr1[1100];//兵种0 1
//int arr2[1100];//生命力
//int arr3[1100];//攻击力3
//bool func(int x, int y)
//{
//	return x > y;
//}
//int main()
//{
//	int t;
//	cin >> t;
//	int i;
//	while (t--)
//	{
//		vector<int>v;
//		int n, h, a, b,flag=0;
//		cin >> n >> h >> a >> b;
//		for (i = 0; i < n; i++)
//		{
//			cin >> arr1[i];
//
//		}
//		for (i = 0; i < n; i++)
//		{
//			cin >> arr2[i];
//		}
//		for (i = 0; i < n; i++)
//		{
//			cin >> arr3[i];
//		}
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[j] == 1)
//			{
//				if (a == 0)
//				{
//					if (arr3[j] > 0)
//					{
//						cout << "Yes" << endl;
//						cout << 1 << endl;
//						flag = 1;
//						break;
//					}
//				}
//				int z = (arr2[j] % a);
//				if (z != 0)
//				{
//					int x = ((arr2[j] / a) + 1)*arr3[j];
//					v.push_back(x);
//				}
//				else
//				{
//					int x = ((arr2[j] / a) )*arr3[j];
//					v.push_back(x);
//				}
//			}
//			else
//			{
//				if (b == 0)
//				{
//					if (arr3[j] > 0)
//					{
//						cout << "Yes" << endl;
//						cout << 1 << endl;
//						flag = 1;
//						break;
//					}
//				}
//				int z = (arr2[j] % b);
//				if (z != 0)
//				{
//					int x = ((arr2[j] / b) + 1)*arr3[j];
//					v.push_back(x);
//				}
//				else
//				{
//					int x = ((arr2[j] / b))*arr3[j];
//					v.push_back(x);
//				}
//			}
//		}
//		if (flag)continue;
//		sort(v.begin(), v.end(),func);
//		int num = 0;
//		for (int i = 0; i< n; i++)
//		{
//			h -= v[i];
//			if (h <= 0)
//			{
//				cout << "Yes" << endl;
//				cout << i + 1 << endl;
//				break;
//			}
//		}
//		if (h > 0)
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}




