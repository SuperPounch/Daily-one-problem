#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int first, k, n, temp;//first第一个结点的地址，（<=n）即要求反转的子链结点的个数，结点总个数正整数 N (≤10^5)
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];//next[]记录下一结点的地址，下标均为当前结点的地址
    for (int i = 0; i < n; i++) {
        cin >> temp;//结点地址为5位非负整数
        cin >> data[temp] >> next[temp];
    }
    int sum = 0;//不一定所有的输入的结点都是有用的，加个计数器，计数结点数
    //串链--list[]用于排序，记录的是地址
    while (first != -1) {
        list[sum++] = first;//list[0]=first，sum++
        first = next[first];
    }
    for (int i = 0; i < (sum - sum % k); i += k)//sum-sum%k-->去掉小于k的不参与反转的结点
        reverse(begin(list) + i, begin(list) + i + k);
    //反转后以结点以下标顺序排列
    for (int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
    return 0;
}