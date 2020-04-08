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
void mark_write_flag(char* addr, int64_t size){
 printf("write flag addr: %p, size: %ld\n",addr,size);
}
void mark_write_flag_r(char* addr, int64_t size){
 printf("writer flag addr: %p, size: %ld\n",addr,size);
}
void mark_invalid(char* addr, int64_t size, char type){
}


void report_xasan(int64_t* addr, int64_t size, int64_t type){
 printf("report usage of addr %p\n",addr);
}


struct ff{
    char x[5];
};

void func(){
   struct ff r;
   r.x[0]=1;
   struct ff b=r;
   printf("%s\n",b.x);
}

int main(){
  func();
  return 0;
}
