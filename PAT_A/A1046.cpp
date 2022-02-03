//
// Created by 李啸 on 2022/1/30.
//
#include "cstdio"
#include "algorithm"
using namespace std;

const int MAXN = 100005;
int dis[MAXN], A[MAXN];//dis数组表示1号节点按顺时针方向到达"i结点顺时针方向的下一个结点"；A[i]存放i号与i+1号顶点的距离
int main(){
    int sum=0,query,n,left,right;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&A[i]);
        sum+=A[i];//累加sum
        dis[i]=sum;//预处理dis数组，dis数组就是在累加了
        //dis【1】=A【1】=1
        //dis【2】=A【1】+A【2】=1+2=3（1->3）
    }
    scanf("%d",&query);//获取查询个数
    for (int i = 0; i < query; ++i) {
        //query 个 查询
        scanf("%d%d",&left,&right);//left->right
        if(left>right) swap(left,right);//left>right , then change
        int temp= dis[right-1]-dis[left-1];//after observe ,find this is better simply
        printf("%d\n", min(temp, sum-temp));
    }
    return 0;
}