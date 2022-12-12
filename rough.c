#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	for(int i=1; i<T; i++){
	    int n, count=0;
	    scanf("%d",&n);
	    
	    char ch[n];
        for (int k = 0; k < n; k++)
        {
            scanf("%c",&ch[k]);
        }

	    count = 0;
	    for(int j = 0; j != '\0'; j++){
	        if(ch[j] != 'a' || ch[j] != 'e' || ch[j] != 'i' || ch[j] != 'o' || ch[j] != 'u' && ch[j+1] != 'a' || ch[j+1] != 'e' || ch[j+1] != 'i' || ch[j+1] != 'o' || ch[j+1] != 'u' && ch[j+2] != 'a' || ch[j+2] != 'e' || ch[j+2] != 'i' || ch[j+2] != 'o' || ch[j+2] != 'u' && ch[j+3] != 'a' || ch[j+3] != 'e' || ch[j+3] != 'i' || ch[j+3] != 'o' || ch[j+3] != 'u'){
	            count++;
	        }
	    }
	    if(count >= 4){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
	
}

