//     关于引用：如果在函数中要改变原来的值，void alt(int &a){a=3;}调用时就不必再加&
*void insert(node* &root,int x) 因为要修改root本身的值 所以要加引用&
*关于struct;如需要使用构造函数赋值，最好再加一个默认构造函数
 struct node{
    int a;
    node(){}//默认构造函数，确保正常声明：node stemp;
    node(int _a):a(_a){}//构造函数，确保：node stemp=node(2);
 };
//fill()与memset()的区别
#include <algorithm>
int a[size],b[size][size];
fill(a,a+size,num);//algorithm
fill(b[0],b[0]+size*size,num);//二维
fill(vector.begin,vector.end,num);
memset(a,0,sizeof a);//cstring
memset(a,-1,sizeof a);//按字节填充字符，只能用来填充char型数组，若填充int只能填充 0 和 -1 
char c[size];memset(c,char,sizeof c);
//1116  变量命名避免关键字：rank 取没有任何歧义的
//1101 末尾要加一个回车。
//1099 acc
//1076 重做
//1066 特别是判断平衡因子时一定要注意是2还是-2,1还是-1；LL和RR要注意子树顺序；代码以会默写！！！
//1065 sum may be overflow  :a>0&b>0  a+b<0 ,a<0&b<0  a+b>=0
//1058 acc
//*1057 粗心：在pop()之后使用top()  超时问题：树状数组解决，详见末尾知识点1（树状数组）：：属Top要求，可先不看
//1055 1,字符串比较要用strcmp(str1,str2)<0==str1<str2 #include<cstring> ;2,for(int i=0;i<n&&num!=0;i++)终止条件不能用逗号，防止num!=0&&i>=n的情况
//1053 学习1053的思考方式 如果测试数据较多，使用程序自动输入测试，提交时注释掉 问题较多：推出当前节点需要进行操作统一在返回点处之后操作，如调用函数alt(a,b);//此处添加统一操作
//1052 静态链表：考虑无用节点的情况   node[p]={p,key,next,false};
//1048 超时问题：如果涉及对序列查找，尽量用二分法 ：while(left<=right);left=mid+1;right=mid-1;Tips:柳神解法妙！
//1047 超时问题：cin cout能避免就避免，字符串输入scanf("%s",str);str为字符数组；操作时可将str转为string类型：string=str;str=string.c_str();
//1044 acc 如果涉及排序 可优先考虑 map<int,map<int,int> >
//1043 一定要认真读题，题目要求右子树包括等于的值；new节点是一定不能漏left=right=NULL;看清输出格式 大小写
//1041 acc 提交时注意选择正确的编译语言
//1039 acc 使用字符串hash速度更快 能用map转化排序问题 就尽量不要用
//1034 DFS:  MAX上界 MAX命名可能会冲突，使用大写 熟练运用DFS 邻接矩阵存储要考虑对称操作 G[u][v]=0;G[v][u]=0;
//1032 静态链表：效率问题，节点中增加flag 将一个链表中节点置true，逐个访问另一个节点时遇到true即得到相同点
//1028 acc
//1024 algorithm  reverse(begin,end)反转函数
//1023 仔细审题，no的情况 没有注意仍要输出结果
//1022 用vector要考虑可能输入重复数据，考虑用set；输出数字串格式问题，要求7位数字，不足补0
//1021 无向图输入要对称：G[a].push_back(b);G[b].push_back(a); 结点数超过200用邻接链表存储
//1020 acc
//1016 重做
//1014 题目好长，有空再写
//1013 注意for(i=0;i<N;i++)的上下界问题，如果从 1 到 N  那么 i=1;i<=N;
//1012 数组初始化问题？？？int ma[size]={-1};后面的元素默认初始化为 0 ；所以声明数组时一定注意！！！
//1011 acc
//1004 acc 注意特殊情况的格式，比如数据只有一个的时候
//1003 图的邻接矩阵只要对G赋值 就要对称G[u][v]=G[v][u];
