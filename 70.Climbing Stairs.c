// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

int climbStairs(int n){

    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    int x1 = 1;
    int x2 = 2;

    for(int i = 0 ; i < n - 2; i++){

        int temp = x1;
        x1 = x2;
        x2 = temp + x2;

    }

    return x2;

}
