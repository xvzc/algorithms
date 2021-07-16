#define N 4

typedef struct {
   int hit;
   int miss;
} Result;

typedef struct {
    int hit;
    int miss;
    int nums[4];
} Known_dictionary;

// API
extern Result query(int guess[]);

Known_dictionary dict[100];

bool visited[10];
int dict_cnt;
int *password;

bool is_promissing() {
    int i, j;
    for (i = 0; i < dict_cnt; i++) {
        int hit = 0, miss = 0;

        for (j = 0; j < 4; j++) {
            if (dict[i].nums[j] == password[j]) 
                hit++;
            else if (visited[dict[i].nums[j]]) 
                miss++;
        }

        if ((dict[i].hit != hit) || (dict[i].miss != miss))
            return false; 
    }

    return true;
}


bool dfs(int n){
    int i;

    if (n == 4) { // number of digits
        // visited if this password is promissing before calling the query
        if (!is_promissing()) 
            return false;
        
        Result ret = query(password);

        if (ret.hit == 4) 
            return true; // got the answer
        
        for (i = 0; i < 4; i++) 
            dict[dict_cnt].nums[i] = password[i];

        dict[dict_cnt].hit = ret.hit; 
        dict[dict_cnt].miss = ret.miss; 

        dict_cnt++;
        
        return false;
    }
 
    // back tracking
    for (i = 0; i <= 9; i++) {
        if (visited[i]) 
            continue;

        password[n] = i; 

        visited[i] = true;
        bool dfs_res = dfs(n + 1);
        visited[i] = false;

        if(dfs_res)
            return true;
    }

    return 0;
}

void doUserImplementation(int guess[]) {
    password = guess;
    dict_cnt = 0;

    dfs(0);
}

