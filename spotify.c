#include <stdio.h>

typedef struct user {
    
    char username;
    char password;
    
}

typedef struct music {
    
    char* name;
    float duration;
    char* genre;
    char* artist;
    char*[] tags;
}

typedef struct playlist {
    
    music** musics;
    char name;
    char description;
    
}

typedef struct profile {
    
    user* userr;
    playlist** playlists;
}

int login(user, password);

int main() {
    
    printf("welcome to spotify\n");
    printf("what's your user?");
    scanf("%s");
    printf("what's your password?");
    scanf("%s");
    if((login(user, password)) {
        
        printf(" press 1 to see playlist");
        printf ("press 2 to search a song");
        printf ("press 3 to quit");
        
        if(press == 1) {
            
            show_playlists();
        }
        
        if (press == 2) {
            
            search_songs();
        }
        
        if (press == 3) {
            
            control = 1;
        }
        
    }
    else {
        
        printf("please sign in");
        printf("press 4");
        if (press == 4) {
            
            register();
        }
    }
    }
    
    
    
    
    
    return 0;
}
