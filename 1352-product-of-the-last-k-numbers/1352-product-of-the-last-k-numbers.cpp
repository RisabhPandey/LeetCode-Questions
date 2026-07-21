class ProductOfNumbers {
public:
    vector<int> prefix;
    ProductOfNumbers() {
        prefix.push_back(1);
    }
    
    void add(int num) {
     if(num == 0){
        prefix.clear();
        prefix.push_back(1);
     } 
     else{
        prefix.push_back(prefix.back()*num);
     }
    }
    
    int getProduct(int k) {
        int size = prefix.size();
       if(size <= k){
        return 0;
       }
       else{
        return prefix[size-1]/prefix[size-k-1];
       }
        }

};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */