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
