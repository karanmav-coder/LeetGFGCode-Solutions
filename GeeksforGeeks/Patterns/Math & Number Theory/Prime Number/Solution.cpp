class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int counter = 1;
        int half = n/2;
        for(int i = 1; i<=half; i++){
            if((n%i) == 0){
                counter++;
            }
            if(counter > 2){
                return 0;
            }
        }
        //cout<<counter<<endl;
         if(counter == 2){
                return 1;
            }
            else{
                return 0;
            }
       
    }
};
