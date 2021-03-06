/*

Program 4: Write a Program to Print following Pattern.

                        E         
                      D E F       
                    C D E F G     
                  B C D E F G H   
                A B C D E F G H I 


*/

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        char ch = 'A';
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i) {
                printf ("%c ", ch);
            } else {
                printf ("  ");
            }   
            ch++;
        }
        printf ("\n");
    }

}


void main (void) {

    int rows;
    printf ("\nEnter number of Rows : ");
    scanf ("%d", &rows);

    printPattern (rows);

}
