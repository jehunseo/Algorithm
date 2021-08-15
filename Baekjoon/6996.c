#include <stdio.h>
#include <string.h>

int isanagram(char A[], char B[]){
	int test_A[26] = {0,};
	int test_B[26] = {0,};
	int cnt = 0;

	while(A[cnt] != 0){
		test_A[A[cnt] - 'a']++;
		cnt++;
	} cnt = 0;
	
	while(B[cnt] != 0){
		test_B[B[cnt] - 'a']++;
		cnt++;
	} cnt = 0;

	for(int i = 0 ; i < 26 ; i++){
		if(test_A[i] != test_B[i]) return -1;
	}
	return 0;
}


int main(void) {
	// your code goes here
	char A[100], B[100];
	int T;
	scanf("%d", &T);
	
	for(int i = 0 ; i < T ; i++){
		scanf("%s", A); scanf("%s", B);
		if(strlen(A) != strlen(B)) {
			printf("%s & %s are NOT anagrams.\n", A, B); 
			continue;
		}
		
		if(isanagram(A, B) == 0) printf("%s & %s are anagrams.\n", A, B);
		else printf("%s & %s are NOT anagrams.\n", A, B);
	}
	return 0;
}
