#include <stdio.h>
#include <stdbool.h>

#define SPACE 3

char movement(char matriz[][SPACE], int *i, int *j) {
    char ch;

    printf("Enter W(Up), S(Down), D(Right), A(Left): ");
    ch = getchar();

    switch (ch) {
        case 'a': 
            (*j)--;
            break;
        case 'w': 
            (*i)--;
            break;
        case 'd': 
            (*j)++;
            break;
        case 's': 
            (*i)++;
            break;
        default:
            printf("Invalid Input!\n");
            break;
    }
    
    while (getchar() != '\n');

    return matriz[*i][*j];
}

void restart(int *i, int *j) {
	*i = 0;
	*j = 0;
}

int main() {
    int x = 0, y = 0;
    int i = 0, j = 0;
    int passX, passY;
    bool condition = true;

    char maze[SPACE][SPACE] = {
        {'S', '.', '.'},
        {'.', 'X', '.'},
        {'.', '.', 'E'}
    };
    
    for(i = 0; i < SPACE; i++) {
    	printf("[ ");
    	for(j = 0; j < SPACE; j++) {
    		printf("%c ", maze[i][j]);
		}	
		printf("]\n");
	}
	
    
	while(condition){
		passX = x;
		passY = y;
		char position = movement(maze, &x, &y);
	
	    if (position == '.' || position == 'S') {
	        printf("Ok! You're on the correct path. %c\n", position);
	        condition = true;
	        
	    } else if(position == 'X') {
	    	printf("Block!, %c\n", position);
	    	x = passX;
	    	y = passY;
	    	condition = true;
	    	
		} else if(position == 'E') {
			printf("Congratulation!! You're leave!\n");
			return 1;
		} else {
	        printf("Oh no, wrong move!\n");
	        condition = false;
	    }
	    
	};
	
    return 0;
}

