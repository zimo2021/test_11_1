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
//		cout << "������Ѫ��ƭ����͵Ϯ���Ǹ���ҵ�ͬ־��������ⲻ�ã�" << endl;
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
//	//�������鴢������
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
//		int logo = 1;//���ڿ���ѭ��
//		int num = 0;//��¼��������
//		while (logo)
//		{
//			int flag = 0;//�����ж��Ƿ��н���
//			//���ν��в���һ�Ͳ���2
//			//����һ��������
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
//			//����н��� num++
//			if (flag == 1)
//			{
//				num++;
//				flag = 0;
//			}
//			//������ ��ż����
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
//			//����н��� num++
//			if (flag == 1)
//			{
//				num++;
//			}
//			//���û�н�����num==0 ���в���2 ���û�н�����num==0 ����  ����num
//			if (flag == 0)
//			{
//				arr2[i] = num;
//			}
//			logo = flag;
//		}
//	}
//	//��ӡ���
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
//	//��������
//	int t;
//	cin >> t;
//	int i;
//	for (i = 0;i < t; i++)
//	{
//		cin >> arr1[i];
//	}
//	//�����ݷֽ�ɵ�����������������
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
//	//�������飨������������ĳ������aǰ��n������С��a ��a��Ϊa-1-n)
//	for (i = 0; i < t; i++)
//	{
//		int n = 0;
//		int j;
//		int z;
//		//����n
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
//			//�޸�
//			arr2[i][j] = arr2[i][j] - 1 - n;
//		}
//		//������ȡ���֣���λ�����Ӻ���ǰ��arr[i][j]����j�Ľ׳����ۼӵ�num ����һ
//		for (z = 0; z < j ; z++)
//		{
//			int jc = 1;//i�Ľ׳�
//			if (z == 0)
//			{
//				jc = 0;
//			}
//			else
//			{
//				int m = z;//���ڿ��ƽ׳�
//				while (m)
//				{
//					jc *= m;
//					m--;
//				}
//			}
//			//����num��������(��û�м�һ)
//			num[i] += arr2[i][z] * jc;
//		}
//	}
//	
//	//���num
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
//	//�������ݵ�arr1 ��arr2
//	map<int, string>m;//���ڴ������Ľ��
//	int t;
//	cin >> t;
//	int i, j;
//	for (i = 0; i < t; i++)
//	{
//		cin >> arr1[i] >> arr2[i];
//	}
//	//����arr1��arr2�����������������Ӳ����浽arr3 ��arr4��(��Ȼ�ʹ�С����)
//	//����arr3
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
//	//����arr4
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
//	//����arr3��arr4��Ԫ�رȽ� ����arr3��Ԫ����arr4��Ԫ����� flag=1 ���� ��arr3��ָ��Ԫ��С��arr4��Ԫ��arr3����һ��Ԫ��
//	//���arr3�������flag=0  ���� ��������flag=0 ��yes���浽map ��falg=1 ��no���浽map
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
//	//��ӡmap����
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
//	//�������ݵ�arr1
//	int n;
//	int num = 0;//��¼��������
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
//	//i��0��ʼ  ��arr1[i]>arr[i+1] ��arr[i]�Ƶ����(����������) num++ ֱ�� pָ��NULL
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
//	//��ӡnum
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
//	//��������
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
//	string org;//����ĸ��
//	cin >> org;
//	//�Ƚϣ���ϧ����kmp�㷨�� ������  num++  ֱ��Դ�ַ������� ��¼num��������
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
//	//��ӡnum
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
//	//��������(�û�����)
//	Node* head, *p, *s;
//	int n;
//	cin >> n;
//	int i;
//	head = new Node;
//	p = head;//��ʼ��
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
//	//���������ڽ���������Ӳ����浽������ �ҵ����������ֵ���±�i �������е�i���ڵ� �͵�i+1���ڵ�ϲ� Ȼ���Һϲ���ڵ�����ҽڵ��нϴ�Ľڵ�ϲ� ֱ��ȫ��
//	//�ϲ� 
//	//��������
//	for (i = 0;; i++)
//	{
//		arr1[i] = p->data + p->next->data;
//		p = p->next;
//		if (p == head)
//		{
//			break;
//		}
//	}
//	//�����ֵ�±�
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
//	//�ϲ�
//	int num = 0;//��¼�����
//	p = head;
//	while (flag--)
//	{
//		p = p->next;
//	}
//	n -= 2;
//	while (n--)
//	{
//		//��ϲ�
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
//		//ǰ�ϲ�
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
//	//������ڵ������
//	cout <<  num<< endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//ˢLeetcond�ϵ��� ����20����û˼·�Ϳ���� ��60����û������Ҳ�����

//template<typename T>//���Խ��и����������͵�����
//void Qsort(int left,int right,T arr[])//ָ������
//{
//	if (left < right)//�ز����� ����ݹ鲻ͣ
//	{
//		//��������
//		int l = left;
//		int r = right;
//		int base = arr[left];
//		while (l < r)
//		{
//			//�ҵ���ߵ�һ������base�������ұߵ�һ��С��base����������
//			while (l < r&&arr[r] >= base)r--;
//			while (l < r&&arr[l] <= base)l++;
//			if (l < r)
//			{
//				int temp = arr[l];
//				arr[l] = arr[r];
//				arr[r] = temp;
//			}
//		}
//		//��baseֵ��l��r �غϵ�ֵ����(������base��ߵ�����baseС base�ұߵ�����base��
//		arr[left] = arr[l];
//		arr[l] = base;
//		//�õݹ���������߽���ͬ���Ĳ���
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


//���������㷨�������ܽ�
/*
�������򷽷����ۺϱȽ�һ��ʱ������
1.��ƽ����ʱ���������֣����������򷽷�:ʱ�临�Ӷ�ΪO(nlogi)�ķ�����:
�������򡢶�����͹鲢���������Կ�������Ϊ���;
ʱ�临�Ӷ�ΪO(n2)����:
��ֱ�Ӳ�������ð������ͼ�ѡ������������ֱ�Ӳ���Ϊ��ã��ر��Ƕ���Щ�Թؼ��ֽ�������ļ�¼������Ϊ���;
ʱ�临�Ӷ�ΪO(n)�����򷽷�ֻ��:��������
ע�����
2.�����ż�¼���а��ؼ���˳������ʱ��ֱ�Ӳ��������ð�������ܴﵽO(n)��ʱ�临�Ӷ�;�����ڿ���������ԣ�
������õ��������ʱ��ʱ�������˻�ΪO(n2)�������Ӧ�þ�������������
3.��ѡ�����򡢶�����͹鲢�����ʱ�����ܲ����¼�����йؼ��ֵķֲ����ı䡣


�������򷽷����ۺϱȽ϶����ռ����ܣ�ָ�����������������ĸ����ռ��С
1.���еļ����򷽷�(����:ֱ�Ӳ��롢ð�ݺͼ�ѡ��)�Ͷ�����Ŀռ临�Ӷ�ΪO(1)
��.��������ΪO(logn)��Ϊջ����ĸ����ռ�
3.�鲢�������踨���ռ���࣬��ռ临�Ӷ�ΪO(n)
4.��ʽ���������踽�������βָ�룬��ռ临�Ӷ�ΪO(rd)

�ġ����ڡ����򷽷���ʱ�临�Ӷȵ��¡�
���������۵ĸ������򷽷��������������⣬�����������ǻ��ڡ��ȽϹؼ��֡�������������򷽷�������֤�����������򷨿��ܴﵽ������ʱ�临�Ӷ�ΪO(nlogn)��
���������ǻ��ڡ��ȽϹؼ��֡������򷽷�,�����������������)��
��������һ���ж���������������ڡ��ȽϹؼ��֡�������������򷽷���
*/
//ʵ��һ�¸����㷨
//1.ð������
//2.ֱ�Ӳ�������
//3.ѡ������
//4.��������
//5.������
//6.�鲢����
//7.��������
//8.ϣ������

//void test05()
//{
//	//8.ϣ������
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
//				j -= gap;//������һ����������Ĺ��� ��һ�������е����Ƶ����Ƶ�����ǰλ��
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
//template<typename T>//���Խ��и����������͵�����
//void Qsort(int left, int right, T arr[])//ָ������
//{
//	if (left < right)//�ز����� ����ݹ鲻ͣ
//	{
//		//��������
//		int l = left;
//		int r = right;
//		int base = arr[left];
//		while (l < r)
//		{
//			//�ҵ���ߵ�һ������base�������ұߵ�һ��С��base����������
//			while (l < r&&arr[r] >= base)r--;
//			while (l < r&&arr[l] <= base)l++;
//			if (l < r)
//			{
//				int temp = arr[l];
//				arr[l] = arr[r];
//				arr[r] = temp;
//			}
//		}
//		//��baseֵ��l��r �غϵ�ֵ����(������base��ߵ�����baseС base�ұߵ�����base��
//		arr[left] = arr[l];
//		arr[l] = base;
//		//�õݹ���������߽���ͬ���Ĳ���
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
//	//2.ֱ�Ӳ�������(�����ڻ�����������飬����������������뵽����������)
//	int arr[10] = { 9,5,3,1,6,7,4,2,8,10 };//����Ҳ�����ã������鷳��
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
//	//3.ѡ������
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
//	//1.ð������
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
//			while (j >= step && tmp < arr[j - step])   //����ֱ�Ӳ�������
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
//			while (j >= step && tmp < arr[j - step])   //����ֱ�Ӳ�������
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
//������
//typedef struct Node
//{
//	int hen;//������
//	int lie;//������
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
//	//�������ķ���
//	//����һ����
//	//����B�������������� ������B������ȷ���������
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
//	��0��,��0�У���ʼ����
//	�������һ������Ƶ㣬
//	��  �������Ƶ� ��ʼ  �����ɴ����
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

//int arr1[10];//ϵͳ��ʼ��Ϊ0
//int main()
//{
//	int arr[10];//ϵͳ�����ʼ��
//	return 0;
//}

//������
//int step_x[8] = { 1,1,-1,-1,2,2,-2,-2 };
//int step_y[8] = { 2,-2,-2,2,1,-1,-1,1 };
//long long dp[25][25];//long long �ز����� ��������
//bool vis[25][25];//ϵͳ��ʼ��Ϊfalse
//int x, y, n, m;//���ڴ˴�����ȫ�ֵ��ã��ò��Ŵ���
//void init()
//{
//	vis[x][y] = true;
//	dp[1][1] = 1;
//	dp[0][1] = 1;//���γ�ʼ��ʱ��dp[1][1]��ʼ��Ϊ0
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
//	n++, m++, x++, y++;//�򻯳�ʼ����
//	int i, j;
//	init();//��ʼ����ά����dp ��vis
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
//����
/*
1.�������ݵ���ά����arr��
2,��arr�����һλ��ʼ�жϵ�̺�Ƿ񸲸��жϵ�
3.ѭ��ֱ���ҵ�ĳ��̺���Ǹõ�
4.����õ�̺
*/
//int n;
//int arr[11000][5];
//int x, y;//���ڴ����жϵ�
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

//����
/*
1.�������ݵ���ά����arr��
2.�������� ������ά���� �����ҵ���0���� �Դ�Ϊ��һ���������������ɹ��� ���ۼ� ���ۼӽ���浽arr1������ ���˵���Ϊ0
3.ѭ�� ֱ������ȫ��Ϊ��
4.��arr1���������������
5.���
*/
//int arr[10][10];
//int N;
//int arr1[110];
//int x = 1, y = 1;//��¼�ı������
//int num;//��¼�ı�ֵ
//int main()
//{
//
//	int sum = 0;//��¼����Ԫ�ظ���
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
//		int flag = 0;//�ж��Ƿ�Ϊÿ������ĵ�һ����
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
//					i1 = i;//��¼�õ�����
//					j1 = j;
//					flag = 1;
//				}
//			}
//		}
//	}
//	int flag = 0;//���ڼ�¼���ֵ������
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
//������������⣬���澭���޸�
//�Ȳ�Ҫ���߹��ĵ�һ��ֵ��Ϊ�� ���ߵ���һ��ֵ��Ϊ�� ֱ���Ӹ�λ���ߵ�����Ϊ��λ�ñ���ֹͣ

//int arr[10][10];
//int arr2[10][10];
//int N;
//int arr1[110];
//int x = 1, y = 1;//��¼�ı������
//int num;//��¼�ı�ֵ
//int main()
//{
//
//	int sum = 0;//��¼����Ԫ�ظ���
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
//		int m = 0;//���ƽ���ѭ��
//		int m1 = 0;//��������ѭ��
//		while (m==0 || m1 != arr[ii][jj])
//		{
//			arr1[z] = 0;
//			int flag = 0;//��¼�ӿ�ʼλ�����˶���Ԫ��
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
//							jj = j;//��¼��һ���������
//						}
//						if (flag == 1)
//						{
//							arr[i][j] = 0;
//						}
//						i1 = i;//��¼�õ�����
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
//	int flag = 0;//���ڼ�¼���ֵ������
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
1.��������
2.�Ƚ�ÿ������һλ�����һλ���Ĵ�С ÿ��ȡÿ������Сֵ֮�ͳ���2^i���ӵ�num
3.���num
*/
//#include<cmath>
//typedef struct Node
//{
//	int data;
//	Node* next;
//	Node* prve;
//}Node;
//Node* Head[100000];//ͷָ������
//Node* End[100000];//βָ������
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
//	int sum = 0;//��¼����ֵ
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
//1177652997443428940313  (����Ϊ22)
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

//---------------------------------------------------------------------------------���Ա��棡����������������������
//�߾��ȼӼ���
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

//�߾��ȼӷ�
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

//�߾��ȳ˷�
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
//		cout << c1[i];//������
//	}
//	cout << endl;
//	return 0;
//}
//------------------------------------------------------��һ�����Ͱ�
//int j[30];
//int j1[35];
//int a[40];
//int main()
//{
//int n;
//cin >> n;
//int i, k, z;
//j[0] = 1;
//int f1 = 1;//��¼j��λ��
//for (i = 1; i <= n; i++)
//{
//	int f2 = -1;//��¼j1��λ��
//	//����i�Ľ׳�
//	for (k = 1; k <= i; k++)
//	{
//		int a, b;
//		int flag = 0;//�ж�i�Ƿ����10
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
//	b[0] = 1; //��ʼ��
//	for (int i = 1; i <= n; i++) { //����i�Ľ׳ˣ��Ѿ������i-1�Ľ׳�
//		len_a = 0; //i�ĳ���
//		int p = i;
//		while (p>0) { //��i���a����
//			a[len_a++] = p % 10;
//			p /= 10;
//		}
//		for (int j = 0; j<len_a; j++) //����a*b��i*��i-1���Ľ׳ˣ�����i�Ľ׳ˣ������������ϲ飬��Ҳ��֪��Ϊʲô
//			for (int k = 0; k <= len_b; k++)
//				c[j + k] += a[j] * b[k];
//		for (int j = 0; j<len_c; j++) //��Ҫ��λ�ľͽ�λ
//			if (c[j]>9) c[j + 1] += c[j] / 10, c[j] %= 10;
//		if (c[len_c]) len_c++; //�����λҪ��Ҫ��λ
//		len_ans = len_b, len_b = len_c, m = max(m, len_c); //��len_b��ֵ��len_ans���޸�len_b��ֵ��mΪi�׳˵ĳ��ȣ�����û�н�λ
//		for (int k = len_c - 1; k >= 0; k--) 
//			b[k] = c[k]; //��c���b���飬�����i�Ľ׳ˣ��´�ѭ��bΪi-1�Ľ׳�
//		len_c = len_a + len_ans;
//		memset(c, 0, sizeof(c)); //����c���飬׼�������¸��׳�
//		for (int j = 0; j<m; j++) { //�߾��ӣ�ֱ����ģ��
//			f[j] += b[j];
//			if (f[j]>9) f[j + 1] += f[j] / 10, f[j] %= 10; //��λ��ע�ⲻҪд��f[j+1]++��f[j]-=10;����Ϊ����wa��һ����
//		}
//	}
//	while (!f[m] && m>0) m--; //ȥ���׵���
//	for (int i = m; i >= 0; i--) cout << f[i]; //�������
//	return 0; //Բ������
//}
//����1�Ľ׳˼ӵ�n�Ľ׳�
//int a[80], b[80], c[80], d[80], la = 1, lb = 1, lc , ld = 1;
//int main()
//{
//	int n;
//	int x = -1;//��¼b��d����󳤶�
//	b[0] = 1;//����1�Ľ׳�
//	cin >> n;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		la = 0;
//		//��i�浽a��
//		int p = i;
//		while (p)
//		{
//			a[la] = p % 10;
//			la++;
//			p /= 10;
//		}
//		//������֪(i-1)�Ľ׳˷���b�� ��a��b��Ԫ����˲�����c��
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
//		//��c��Ԫ�ظ���b
//		for (int k = 0; k <= lc; k++)
//		{
//			b[k] = c[k];
//		}
//		lb = lc;
//		memset(c, 0, sizeof(c));//����  Ϊ����һ���׳�
//		x = max(x, lb);
//		//��i�Ľ׳˼ӵ�d
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

//bool is_pri(int i)//�ж�����
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
//bool is_ph(int i)//�жϻ���
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
//			break;//���൱��Ͷ��ȡ��  ��Ϊһǧ��һ��֮��û�л������� ������
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
//	int arr[5][6][7];//����5����� 6������  7������
//	cout << (int)&arr[0][0][0] << "  "<<(int)&arr[4][3][2] << endl;//16447284  16448048 
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int arr1[1100];//����0 1
//int arr2[1100];//������
//int arr3[1100];//������3
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




