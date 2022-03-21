//
// Created by 李啸 on 2022/3/15.
//
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int anlz_byte_detected(int src_byte) {
    int lsb_detected = 0;
    int wrk_byte = src_byte;
    for (int i = 7; i > -1; --i) {
        if ((wrk_byte & 0x80) == 0)
            lsb_detected = 1;
        wrk_byte = wrk_byte << 1;
    }
    //printf("lsb_detected=%d",lsb_detected);
    return lsb_detected;
}

int anlz_byte_index(int src_byte) {
    int lsb = 0;
    int wrk_byte = src_byte;
    for (int i = 7; i > -1; --i) {
        if ((wrk_byte & 0x80) == 0)
            lsb = i;
        wrk_byte = wrk_byte << 1;
    }
    //printf("lsb=%d",lsb);
    return lsb;
}

int lsb(int x) {
    int lsb_detected[4];
    int lsb[4];
    //stage0
    for (int i = 0; i < 4; ++i) {
        lsb_detected[i] = anlz_byte_detected((x >> i * 8) & 0xff);
        printf("lsb_detected[%d]=%d",i,lsb_detected[i]);
        lsb[i] = anlz_byte_index((x >> i * 8) & 0xff);
        printf("lsb[%d]=%d\n",i,lsb[i]);
    }
    //stage1
    int ans = 0;
    for (int i = 3; i > -1; --i) {
        if (lsb_detected[i] == 1)
            ans = lsb[i] + (i << 3);
    }
    return ans;
}

//test
int main() {
    for (int i = 0; i < 16; ++i) {
        int x = pow(2, (i * 2) + 1) + i * 333;
        x = x | (x >> 1) | (x >> 2);
        int ans = lsb(x);
        printf("x = %d, ans = %d\n", x, ans);
        //  printf(reinterpret_cast<const char *>(x));
        //printf("x:" + '0x{:08x}'.f(x)+",lsb:"+)
    }
}

