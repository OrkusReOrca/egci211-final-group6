#ifndef node_h
#define node_h
class NODE{
     int data; //attack type
    NODE *nextPtr;
public:
    NODE(int);
    ~NODE();
    void set_next(NODE*);
    NODE* get_next();
    int get_value();
};
typedef NODE* NodePtr;


NODE::NODE(int x){
    data=x;
    nextPtr=NULL;
    //pPtr =NULL; not using doubly
}
NODE* NODE::get_next(){
    return nextPtr;

}

int NODE::get_value(){
    int x = data;
    return x;
}

void NODE::set_next(NODE *t){
     nextPtr=t;

}
NODE::~NODE(){
     //cout<<"deleting "<<data<<endl;
}

#endif
