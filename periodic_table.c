#include<stdio.h>
#include"118elements.c"
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,a;
    struct Element elements[118];
    initializeElements(elements);
    start :
    //  MENU AFTER RUNNING THE CODE
    printf("WELCOME TO THE MODERN PERIODIC TABLE\n\n");
    printf("> Enter 1 to know about the element\n");
    printf("> Enter 2 to take a quiz on periodic table\n");
    printf("> Enter 3 to close the PERIODIC TABLE\n");
    scanf("%d",&n);
    getchar();
    
    //  PRINTING PERIODIC TABLE
    if(n==1){
    //  PRINTING PERIODIC TABLE USING PRINTF 
    printf("1A\t2A\t3B\t4B\t5B\t6B\t7B\t8B\t8B\t8B\t1B\t2B\t3A\t4A\t5A\t6A\t7A\t8A\n\n");
    printf("H \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \t  \tHe\n\n");
    //  PRINTING PERIODIC TABLE USING LOOPS
    for(int i=2;i<=9;i++)
    {
        if(i==4){
            
            for(int j=1;j<=10;j++){
             printf("  \t");}
             printf("%s\t",elements[i].symbol);
        }
        else{
            printf("%s\t",elements[i].symbol);
        }
        if(i==9)
        printf("\n\n");
    }
    for(int i=10;i<=17;i++)
    {
        if(i==12){
            
            for(int j=1;j<=10;j++){
             printf("  \t");}
             printf("%s\t",elements[i].symbol);
        }
        else{
            printf("%s\t",elements[i].symbol);
        }
        if(i==17)
        printf("\n\n");
    }
    for(int i =18;i<=53;i++)
    {
        printf("%s\t",elements[i].symbol);
        if(i==35)
        printf("\n\n");
        if(i==53)
        printf("\n\n");
    }
    printf("Cs\tBa\tLa\t");
    for(int i=71;i<=85;i++)
    {
        printf("%s\t",elements[i].symbol);
        if(i==85)
        printf("\n\n");
    }
    printf("Fr\tRa\tAc\t");
    for(int i=103;i<=117;i++)
    {
        printf("%s\t",elements[i].symbol);
        if(i==117)
        printf("\n\n");
    }

    //  LOOPS FOR LANTHANIDE AND ACTINIDE SERIES
    printf("\n \t\t\tLANTHANIDE AND ACTINIDE SERIES\n \t\t\t");
    for(int i=57;i<=70;i++)
    {
        printf("%s\t",elements[i].symbol);
        if(i==70)
        printf("\n\n");
    }
    printf("\n \t\t\t");
    for(int i=89;i<=102;i++)
    {
        printf("%s\t",elements[i].symbol);
        if(i==102)
        printf("\n\n");
    }
        printf("Enter the atomic number : ");
        scanf("%d", &a);
        if(a>=1&&a<=118){
              displayElement(elements,a);
        }
        else
        printf("\nInvalid Input!!!");
        printf("\n\n");
        goto start;
    }


    //  QUIZ
    else if(n==2){
        char Name[100],branch[10],roll[15],start[5];
        int A1,A2,A3,A4,A5,c=0;
        printf("\t\tQUIZ\n\n\n");
        printf("ENTER YOUR NAME : ");
        scanf("%[^\n]s", Name);
        printf("ENTER YOUR BRANCH : ");
        scanf("%s",branch);
        printf("ENTER TOUR ROLL NUMBER : ");
        scanf("%s",roll);
        int x;
        printf("\tSET-1\tSET-2\tSET-3\n");
        printf("ENTER THE SET NUMBER : ");
        scanf("%d",&x);
        
    //  SET - 1
    if(x==1){
        //QUESTION 1
        system("cls");
        printf("\nQUESTION 1 \n");
        printf("> Which element's discovery and classification were initially \
        disputed due to its similarities with another known element?\n\
            \n1) Gallium\
            \n2) Scandium\
            \n3) Germanium\
            \n4) Rubidium");
            printf("\nENTER YOUR OPTION : ");
            scanf("%d",&A1);
            system("cls");
            if(A1==1){
            c++;}
        //QUESTION 2
        printf("\nQUESTION 2 \n");
        printf("> Which of the following elements has the highest electronegativity?\n\
               \n1) Fluorine\
               \n2) Oxygen\
               \n3) Chlorine\
               \n4) Nitrogen");
               printf("\nENTER YOUR OPTION : ");
            scanf("%d",&A2);
            system("cls");
            if(A2==1){
            c++;}
        //QUESTUION 3
        printf("\nQUESTION 3\n");
        printf("> The element located in period 4 and group 13 of the periodic table is:\n\
                \n1) Aluminum\
                \n2) Boron\
                \n3) Gallium\
                \n4) Indium");
        printf("\nENTER YOUR OPTION : ");       
        scanf("%d",&A3);
        system("cls");
            if(A3==3){
            c++;}
        //QUESTION 4
        printf("\nQUESTION 4\n");
        printf("> Which element possesses the highest atomic radius among the following?\n\
                \n1) Lithium\
                \n2) Sodium\
                \n3) Potassium\
                \n4) Rubidium");   
        printf("\nENTER YOUR OPTION : ");
        scanf("%d",&A4);
        system("cls");
            if(A4==4){
            c++;}
        //QUESTION 5
        printf("\nQUESTION 5\n");
        printf("> The element whose ions have the electron configuration [Ar]4s^2 3d^10 4p^6 belongs to which group in the periodic table?\n\
                \n1) Group 14\
                \n2) Group 16\
                \n3) Group 18\
                \n4) Group 10");
        printf("\nENTER YOUR OPTION : ");
        scanf("%d",&A5);
        system("cls");
            if(A5==3){
            c++;}    
            printf("\nRESULT : \n\n");
            printf("NAME = %s\nBRANCH = %s\nROLL NUMBER = %s\nMARKS = %d/5\n",Name,branch,roll,c); 
            printf("REMARK : ")  ;
            if(c>=1&&c<=2)
            printf("need to improve"); 
            else if(c>=3&&c<=4)
            printf("good");
            else
            printf("excellent");
    }

    //  SET - 2
    else if(x==2)
    {
        //QUESTION 1
        system("cls");
        printf("\nQUESTION 1 \n");
        printf("> Which element is placed in Group 17 and Period 3 of the modern periodic table?\n\
            \n1) Chlorine\
            \n2) Sodium\
            \n3) Argon\
            \n4) Potassium");
            printf("\nENTER YOUR OPTION : ");
            scanf("%d",&A1);
            system("cls");
            if(A1==1){
            c++;}
        //QUESTION 2
        printf("\nQUESTION 2 \n");
        printf("> The element with the symbol Fe belongs to which group in the periodic table?\n\
               \n1) Group 8\
               \n2) Group 12\
               \n3) Group 7\
               \n4) Group 11");
               printf("\nENTER YOUR OPTION : ");
            scanf("%d",&A2);
            system("cls");
            if(A2==3){
            c++;}
        //QUESTUION 3
        printf("\nQUESTION 3\n");
        printf("> In the modern periodic table, elements in the same ___________ have similar chemical properties.\n\
                \n1) Group\
                \n2) Period\
                \n3) Block\
                \n4) Series");
        printf("\nENTER YOUR OPTION : ");       
        scanf("%d",&A3);
        system("cls");
            if(A3==1){
            c++;}
        //QUESTION 4
        printf("\nQUESTION 4\n");
        printf("> What is the atomic number of the element found in Group 2 and Period 4?\n\
                \n1) 10\
                \n2) 18\
                \n3) 20\
                \n4) 36");   
        printf("\nENTER YOUR OPTION : ");
        scanf("%d",&A4);
        system("cls");
            if(A4==3){
            c++;}
        //QUESTION 5
        printf("\nQUESTION 5\n");
        printf("> Which of the following elements is a noble gas?\n\
                \n1) Neon\
                \n2) Sodium\
                \n3) Fluorine\
                \n4) Calcium");
        printf("\nENTER YOUR OPTION : ");
        scanf("%d",&A5);
        system("cls");
            if(A5==1){
            c++;}    
            printf("\nRESULT : \n\n");
            printf("NAME = %s\nBRANCH = %s\nROLL NUMBER = %s\nMARKS = %d/5\n",Name,branch,roll,c); 
            printf("REMARK : ")  ;
            if(c>=1&&c<=2)
            printf("need to improve"); 
            else if(c>=3&&c<=4)
            printf("good");
            else
            printf("excellent");
    }

    //  SET - 3 
    else if (x==3)
    {
        //QUESTION 1
        system("cls");
        printf("\nQUESTION 1 \n");
        printf("> Which element has the highest electronegativity in the modern periodic table?\n\
            \n1) Fluorine\
            \n2) Oxygen\
            \n3) Chlorine\
            \n4) Nitrogen");
            printf("\nENTER YOUR OPTION : ");
            scanf("%d",&A1);
            system("cls");
            if(A1==1){
            c++;}
        //QUESTION 2
        printf("\nQUESTION 2 \n");
        printf("> In the periodic table, what is the element with the highest atomic radius among the following?\n\
               \n1) Lithium\
               \n2) Sodium\
               \n3) Potassium\
               \n4) Rubidium");
               printf("\nENTER YOUR OPTION : ");
            scanf("%d",&A2);
            system("cls");
            if(A2==4){
            c++;}
        //QUESTUION 3
        printf("\nQUESTION 3\n");
        printf("> What is the electron configuration of an element in Group 16 and Period 4 of the periodic table?\n\
                \n1) [He] 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4p^6\
                \n2) [He] 2s^2 2p^6 3s^2 3p^6 4s^1 3d^10 4p^6\
                \n3) [He] 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4p^5\
                \n4) [He] 2s^2 2p^6 3s^2 3p^6 4s^2 3d^10 4p^4");
        printf("\nENTER YOUR OPTION : ");       
        scanf("%d",&A3);
        system("cls");
            if(A3==2){
            c++;}
        //QUESTION 4
        printf("\nQUESTION 4\n");
        printf("> Which of the following elements is a transition metal?\n\
                \n1) Calcium\
                \n2) Zinc\
                \n3) Iron\
                \n4) Chlorine");   
        printf("\nENTER YOUR OPTION : ");
        scanf("%d",&A4);
        system("cls");
            if(A4==3){
            c++;}
        //QUESTION 5
        printf("\nQUESTION 5\n");
        printf("> The lanthanide and actinide series are often referred to as:\n\
                \n1) Transition Metals\
                \n2) Inner Transition Metals\
                \n3) Alkali Metals\
                \n4) Halogens");
        printf("\nENTER YOUR OPTION : ");
        scanf("%d",&A5);
        system("cls");
            if(A5==2){
            c++;}    
            printf("\nRESULT : \n\n");
            printf("NAME = %s\nBRANCH = %s\nROLL NUMBER = %s\nMARKS = %d/5\n",Name,branch,roll,c); 
            printf("REMARK : ")  ;
            if(c>=1&&c<=2)
            printf("need to improve"); 
            else if(c>=3&&c<=4)
            printf("good");
            else
            printf("excellent");
    }
    //  Invalid stmt
    else
    {
        printf("RESULT = Invalid Set Number");
    }
    goto start;
    }
    //  EXIT
    else if(n==3){
        printf("Periodic Table Closed!!!");
    }
    else
    printf("INVALID CHOICE");
    return 0;
}