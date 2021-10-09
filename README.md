# Daily-one-problem
___每日一题___<br>
_Training my ability about thinking and coding_

---

___Record_B1005(25)___：
- ***Vector***（向量）
  - 是一个封装了动态大小数组的顺序容器，可以理解为vector是一个能够存放任意类型的动态数组；
  - 创建一个vector动态数组： `vector<Type> name(动态数量)`
  - vector有`vector.begin()`:  给出第一个元素的指针；`vector.end()`:给出最后一个元素的下一个位置的指针；  
- ***Sort*** (排序函数)
  -  sort(first,last)---默认按升序
  -  如果降序，可以通过reverse反转，也可以如下：`sort(first,last,greater<Type>())`即可
    
---

___Record_B1006(15)___:
- ***Switch(condition)***
  - condition>0为True
  - case下可以带任何循环
---
___Recode_B1007(20)___:
- 通过内部函数`issushu`来判断素数，代码如下
```c++
bool issushu(int x) {
    int k, i;
    k = (int) sqrt((double) x);
    for (i = 2; i <= k; ++i) {
        if (x % i == 0)break;
    }
    if (i > k)
        return true;
    else 
        return false;
};
```
---
___Recode_B1009(20)___:
- ***Stack***(堆栈)支持的基本操作
  - 入栈：如`s.push(x)`; 
  - 出栈:如 `s.pop()`.注意：出栈操作只是删除栈顶的元素，并不返回该元素。 
  - 访问栈顶：如`s.top()`; 
  - 判断栈空：如`s.empty()`.当栈空时返回true。 
  - 访问栈中的元素个数，如`s.size()`;
- ***String***
- `strcpy(s1, s2)` 复制字符串 s2 到字符串 s1。
- `strcat(s1, s2)` 连接字符串 s2 到字符串 s1 的末尾。连接字符串也可以用 + 号，例如:
  ``` 
  string str1 = "runoob";
  string str2 = "google";
  string str = str1 + str2;
  ```
- `strlen(s1)`返回字符串 s1 的长度。
- `strcmp(s1, s2)` 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
- `strchr(s1, ch)` 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
- `strstr(s1, s2)` 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置
---
___Recode_B1010-1011(25_15)___:
- 两题都是挺简单的
- 对于区间[-2^31,2^31],需要long long int
- 注意cin的数据的范围，做好if判断
---
___Recode_B1012(20)___:
- `switch`来分类
- b[]来记录是否存在，其中b[0]一开始放的不对，导致出问题，要和数组a同步更新
---
___Recode_B1013(20)___:
- 再次用到前面的`issushu`函数来判断素数
- 两层for循环，第一层先找出需要的素数，第二层输出即可
---
`今天CLion中的编译器出了问题，因为删除了Xcode.app。
后续解决问题花了很多时间，Xcode下回后只需要删除当前项目，重新git上clone就可以了。
跟着网友建议，在host上增加了ipv4 rew.githubuserconnect.com,为了下homebrew，但是并没有成功，问题还是存在，host文件也没改回去，记录这个事情，防止忘记`
---
___Recode_B1014(20)___:
- `string`直接获取一行字符串，可以通过下标对字符串遍历/比较等操作
- `isdigit()`判断是否是数字
- `isalpha()`判断是否是字母
- ```c++
  const char *day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
  //两句是一样效果，第一句是通过指针+数组的方式来达到字符串数组的目的
  ```
  
- ```c++
  printf("%02d:%02d", m, j);
  //output:  14:03
  //%02-->数字要达到2位，达不到的位用0填充
  ```
  
___Recode_B1015(25)___:
- ***Vector*** ～ B1005
- ```c++
  vector<int> v[3];
  //vector作为容器
  // 此句相当于创建了三个vector容器，每个容器都是可动态扩展的
  v[0].push_back(1);
  v[0].push_back(2);
  //push_back()函数是向容器尾部插入元素
  //这句==向第一个容器尾部插入int类型元素1,2
  cout<<v[0][0];
  cout<<v[0][1];
  //为什么是v[0][0]?因为在下标为0的容器下只插入了两个元素
  // 所以只有一个下标为0,1的元素，从而变成类似二维矩阵的输出格式
  ```

___


___Recode_B1016(15)___:
- different from github/PAT
- ```c++
  string a, b;
  int da, db, pa = 0, pb = 0;
  cin >> a >> da >> b >> db;
  //她的处理方法：a[i]-'0',用的是字符串
  for (int i = 0; i < a.length(); i++)
  if (da == (a[i] - '0')) pa = pa * 10 + da;
  for (int i = 0; i < b.length(); i++)
  if (db == (b[i] - '0')) pb = pb * 10 + db;
  cout << pa + pb;
  //mine a%10直接算的
  long long int a,b;
  int da,db,suma=0,sumb=0;
  cin >> a>>da>>b>>db;
  while(a){if(a%10==da)suma=da+10*suma;a/=10;}
  while(b){if(b%10==db )sumb=db+10*sumb;b/=10;}
```