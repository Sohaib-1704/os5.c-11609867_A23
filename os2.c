int main() 
{
    int map = allocate_map();
    if (map == 1) {
        printf("\nData Structure initialized.\n");
        int id = 0, i = 0;
        while (i < 15) {
            int val = allocate_pid();
            printf("\nProcess %d: pid = %d", i+1, val);
            i++;
        }
        release_pid(103);
        printf("\nProcess 103 released.");
        release_pid(105); 
        printf("\nProcess 105 released.");
        int val = allocate_pid(); 
        printf("\nProcess %d : pid = %d\n", i+1, val);
    }
    else printf("\nFailed to initialize data structure.\n");
}