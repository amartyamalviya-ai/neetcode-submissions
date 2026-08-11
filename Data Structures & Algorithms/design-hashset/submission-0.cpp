class MyHashSet {
public:
    vector<bool>st;
    MyHashSet() {
        st.resize(1000001,false);
    }
    
    void add(int key) {
        st[key]=true;
    }
    
    void remove(int key) {
        st[key]=false;
    }
    
    bool contains(int key) {
        return(st[key]);
    }
};