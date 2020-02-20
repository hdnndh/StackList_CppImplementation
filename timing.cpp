#include <ctime>
#include "pointerstack.h"
#include "pointerlist.h"
#include "arraystack.h"
#include "arraylist.h"
using namespace std; 

/*
    LIST OPERATIONS
*/
void arr_list_test(ListA* alist){
    clock_t start, stop;
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        insert(i, first(alist), alist);
    }
    stop  = clock();
    cout << "\n\n[Front_Insert Array List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        del(first(alist), alist);
    }
    stop  = clock();
    cout << "\n[Front_Delete Array List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    makenull(alist);
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        insert(i, end(alist), alist);
    }
    stop  = clock();
    cout << "\n[End_Insert Array List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    start = clock();
    uint64_t p = first(alist);
    while(p != end(alist)){
        p = next(p, alist);
    }
    stop  = clock();
    cout << "\n[Traverse Array List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        del(end(alist)-1, alist);
    }
    stop  = clock();
    cout << "\n[End_Delete Array List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

}


void ptr_list_test(List  *plist){
    clock_t start, stop;
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        insert(i, first(plist));
    }
    stop  = clock();
    cout << "\n[Front_Insert Pointer_List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        del(first(plist));
    }
    stop  = clock();
    cout << "\n[Front_Delete Pointer_List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    makenull(plist);
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        insert(i, end(plist));
    }
    stop  = clock();
    cout << "\n[End_Insert Pointer_List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    start = clock();
    NodeL *curr = first(plist);
    while (curr != end(plist)){
        curr = next(curr);
    }
    stop  = clock();
    cout << "\n[Travese Array List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        del(prev(end(plist), plist));
    }
    stop  = clock();
    cout << "\n[End_Delete Pointer_List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    
}


void lib_list_test(){
    std::list<uint64_t> llist;
    clock_t start, stop;
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        llist.push_front(i);
    }
    stop  = clock();
    cout << "\n\n[Front_Insert std List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        llist.pop_front();
    }
    stop  = clock();
    cout << "\n[Front_Delete std List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    llist.clear();
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        llist.push_back(i);
    }
    stop  = clock();
    cout << "\n[End_Insert std List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    start = clock();
    std::list<uint64_t>::iterator it;
    for (it = llist.begin(); it != llist.end(); ++it){
        it;
    }
    stop  = clock();
    cout << "\n[Traverse std List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        llist.pop_back();
    }
    stop  = clock();
    cout << "\n[End_Delete std List]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

}



/*
    STACK OPERATIONS
*/
void arr_stack_test(StackA* astack){
    clock_t start, stop;
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        push(astack, i);
    }
    stop  = clock();
    cout << "\n\n[Push Array_Stack]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        pop(astack);
    }
    stop  = clock();
    cout << "\n[Pop Array_Stack]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    makenull(astack);
}


void ptr_stack_test(Stack *stack){
    clock_t start, stop;
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        push(stack, i);
    }
    stop  = clock();
    cout << "\n\n[Push Ptr_Stack]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        pop(stack);
    }
    stop  = clock();
    cout << "\n[Pop Ptr_Stack]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    makenull(stack);
}


void lib_stack_test(){
    std::stack<uint64_t> lstack;
    clock_t start, stop;
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        lstack.push(i);
    }
    stop  = clock();
    cout << "\n\n[Push std_Stack]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";
    
    start = clock();
    for (uint64_t i = 0; i < 10000; i ++){
        lstack.pop();
    }
    stop  = clock();
    cout << "\n[Pop std_Stack]\n";
    cout << (1000*((double)stop-start)/CLOCKS_PER_SEC) << " milliseconds\n\n";

}



int main (void)
{
    ListA *alist = initListA();
    List  *plist = initList();
    StackA *astack = initStackA();
    Stack  *pstack = initStack();
    

/* 
    ARRAY LIST TESTS
*/
    arr_list_test(alist);

/* 
    POINTER LIST TESTS
*/
    ptr_list_test(plist);

/* 
    LIB LIST TESTS
*/
    lib_list_test();

    /* 
    ARRAY STACK TESTS
*/
    arr_stack_test(astack);

    /* 
    POINTER TESTS
*/
    ptr_stack_test(pstack);

    /* 
    LIB STACK TESTS
*/
    lib_stack_test();

    free(alist);
    free(plist);
    free(astack);
    free(pstack);
    return 0;
}
