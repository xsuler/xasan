#include <stdio.h>
#include <stdint.h>


void enter_func(char* name, char* file){

}
 
void leave_func(){

}

void mark_hp_flag(char* addr, int64_t size){
 printf("hp addr: %p, size: %ld\n",addr,size);
}

void mark_hp_flag_r(char* addr, int64_t size){
 printf("hpr addr: %p, size: %ld\n",addr,size);

}
void mark_valid(char* addr, int64_t size){
}
void mark_invalid(char* addr, int64_t size, char type){
}


void report_xasan(int64_t* addr, int64_t size, int64_t type){
 printf("report usage of addr %p\n",addr);
}



void func(){
   char a[4]={111,11,222,33};
   char b[4];
   char c[4];
   printf("a: %d, b: %d\n",a[0],b[0]);
}

int main(){
  func();
  return 0;
}
