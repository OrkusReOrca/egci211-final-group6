#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
  int total;
public:
    void enqueue(int,int);
    int dequeue();
    int qsize();
    Queue();
    ~Queue();
};

int Queue::qsize(){
  return size;
}

void Queue::enqueue(int x,int y){
  NodePtr new_node= new NODE(x,y);
  if(new_node){ 
    /* Add head and tail for me please */
    /*1. connect & Change tail
    2. (may be) change head  when the queue is empty*/
    if(size>0) tailPtr->set_next(new_node);
    else headPtr=new_node;
    tailPtr=new_node;
    size++;
  }
}

int Queue::dequeue(){
  if(headPtr!=NULL){
    NodePtr t=headPtr;
    int value= t->get_price();
    /* Add head and tail for me please */
    headPtr=headPtr->get_next();
    if(headPtr==NULL) tailPtr=NULL;

    size--;
    
    delete t;
    total=total+value;
    return value;
  }
  cout<<"Empty queue"<<endl;
  return -1;
}


Queue::Queue(){
    headPtr=NULL;
    tailPtr=NULL;
    size=0;    
}
Queue::~Queue(){
    cout<<"Q - CHECHOUT"<<endl;
    int x;
    while(size>0){
      x=dequeue();
    }
}


#endif
