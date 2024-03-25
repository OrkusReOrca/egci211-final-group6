#ifndef node_h
#define node_h
class NODE{
     int data,duration; //attack type
    NODE *nextPtr;
public:
    NODE(int);
    ~NODE();
    void set_next(NODE*);
    NODE* get_next();
    int get_value();
    void DeDuration(){ duration--; }
    int get_duration(){ return duration; }
};
typedef NODE* NodePtr;


NODE::NODE(int x){
    data=x;
    switch(x){
        case 1: duration=3; cout<<"@ Thanos called Air Strike! | Casting in 3 rounds"<<endl; break; //aoe damage all by 5 HP
        case 2: duration=2; cout<<"@ Thanos called Medical Aid | Casting in 2 rounds"<<endl; break; //heal himself for 30*scaling HP
        case 3: duration=4; cout<<"@ Thanos called Strengthen! | Casting in 4 rounds"<<endl; break; //Buff his scaling for 1 round by *2
        default: break; //discard
    }
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
