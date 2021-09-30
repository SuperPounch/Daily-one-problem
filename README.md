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
