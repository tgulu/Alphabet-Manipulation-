#include <stdio.h>
#include <string.h>



int trim (char *line){
    char startline[500];


    int i,j;

    if (line[0]!=' ' && line[strlen(line)-1]!=' ') return -1;


    for(i=0; i<= strlen(line)-1; i++) {

        if ( line[i] != ' ' && line[i] != '\t' && line[i] != '\n'){
            for(j=0; j<= strlen(line)-1; j++) {
                startline[j] = line[i+j];
            }
            strcpy (line,startline);
            break;
        }
    }
    for (i = strlen(line)-1; i>= 0; i--) {
        if ( line[i] != ' ' && line[i] != '\t' && line[i] != '\n'){
            line[i+1] = '\0';
            break;
        }
    }
    return 0;
}


int convertLowerCase ( char *line ) {
    int lowercounter = 0;
    int i;

    for( i=0; i <strlen(line)-1; i++){

        if( line[i] > 64 && line[i] < 91) {
            line [i] += 32 ;
            lowercounter ++ ;
        }

    }return (lowercounter) ;

}



int main(int argc, char const*argv[]){
    char line [] = "Twenty Thousand Leagues Under the Sea by JULES VERNE CHAPTER I A SHIFTING REEF The year 1866 was signalised by a remarkable incident, a mysterious and puzzling phenomenon, which doubtless no one has yet forgotten.  Not to mention rumours which agitated the maritime population and excited the public mind, even in the interior of continents, seafaring men were particularly excited.  Merchants, common sailors, captains of vessels, skippers, both of Europe and America, naval officers of all countries, and the Governments of several States on the two continents, were deeply interested in the matter. \0";

    printf(">%s\n",line);
    printf("%d\n",chop(line));
    chop(line);
    printf("%s\n",(line));

    printf(">%s\n",line);


    printf("%d\n",convertLowerCase(line));
    convertLowerCase(line);
    printf("%s\n",(line));
    return 0;
}
