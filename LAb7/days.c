##include <stdio.h>

int daysElapsed(int day, int month);

int main() {
    int day, month;
    scanf(" %d %d", &day, &month);
    printf(" %d", daysElapsed(day,month));

    return 0;
}

int daysElapsed(int day, int month) {
    int time=0;
    for(int i=1;i<month;i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10)
        time = time + 31;
        
        else if(i==4 || i==6|| i==9 || i==11) time = time+30;
        else if(i==2) time = time + 28;
    }
    time = time + day;
    return time;
}include <stdio.h>
