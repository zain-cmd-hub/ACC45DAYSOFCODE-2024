#include <stdio.h>

int main() {
  int T;
  scanf("%d",&T);
  
  while(T--){
      int N, K, M;
      scanf("%d %d %d",&N, &K, &M);
      int capacity = K*M;
      int num_bags = (N + capacity - 1)/ capacity;
      
      printf("%d\n",&num_bags);
       }
       return 0;
}