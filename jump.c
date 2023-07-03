#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
  
int main() {
    int x, y, l;
    scanf("%d%d%d", &x, &y, &l);
    int m = x, f;
    bool flag=true; //方向
    printf("%d\n", m);
    while(f!=x) {
      if( f==x || (y-x)<l) {
        break;
      }
      if(flag==true) {
        if(m+l<=y) {
            m+=l;
            f=m;
            printf("%d\n", f);
        }
        else {
          flag=false;
        }
      }
      else {
        if(m-l>=x) {
            m-=l;
            f=m;
            printf("%d\n", f);
          }
      }
    }
}
