class MyCircularDeque {
public:
    vector<int>arr;
    int f,r;
    int capacity,size;
    MyCircularDeque(int k) {
        f=0;r=-1;
        capacity=k;
        size=0;
        arr.resize(k);
    }
    
    bool insertFront(int value) {
        if(size==capacity){
            return false;
        }
        if(size==0){
            f=0;r=0;
            arr[f]=value;
            size++;
            return true;
        }
        else{
        f=(f-1+capacity)%capacity;
        arr[f]=value;
        size++;
        return true;
        }
    }
    
    bool insertLast(int value) {
        if(size==capacity){
            return false;
        }
        if(size==0){
            f=0;r=0;
            arr[r]=value;
            size++;
            return true;
        }
        else{
        r=(r+1)%capacity;
        arr[r]=value;
        size++;
        return true;
        }
    }
    
    bool deleteFront() {
        if(size==0){
            return false;
        }
        f=(f+1)%capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(size==0){
            return false;
        }
        r=(r-1+capacity)%capacity;
        size--;
        return true;
    }
    
    int getFront() {
        if(size==0){
            return -1;
        }
        return arr[f];
    }
    
    int getRear() {
        if(size==0){
            return -1;
        }
        return arr[r];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */