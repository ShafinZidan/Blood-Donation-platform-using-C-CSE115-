#include <stdio.h>
#include <stdlib.h>
void main_menu();
void need_blood();
void donate_blood();
void donate2_blood();
void don_info();
void health_info();
void A_plus();
void A_minus();
void B_plus();
void B_minus();
void AB_plus();
void AB_minus();
void O_plus();
void O_minus();
void A_plus2();
void A_minus2();
void B_plus2();
void B_minus2();
void AB_plus2();
void AB_minus2();
void O_plus2();
void O_minus2();
void pick_loc();
void return_menu();


int main(void)
{
    printf("WELCOME TO BLOOD FINDER/DONATOR\n\n");
    printf("                                *                 \n");
    printf("                               * *                 \n");
    printf("                              *   *                \n");
    printf("                             *     *               \n");
    printf("                            *       *              \n");
    printf("                           *  SAVE   *             \n");
    printf("                          *   LIFE    *            \n");
    printf("                          *           *            \n");
    printf("                           *         *             \n");
    printf("                             *******               \n");
    printf("                           GIVE BLOOD              \n");

  main_menu();


}

void main_menu()
{
    int m;

    printf("Select one of the options below:\n\n");
    printf("1.Need blood\n\n");
    printf("2.Donate blood to blood bank\n\n");
    printf("3.learn about the importance of donating blood\n\n");
    printf("4.Rules to follow to become a healthy blood donor\n\n");
    printf("0.return to main menu\n\n");


    printf("\nenter your choice(1/2/3/4/5):\n\n");
    scanf("%d",&m);
    if (m==1)
    {
        need_blood();
    }
    if(m==2)
    {
        donate_blood();
    }
    else if(m==3)
    {
        don_info();

    }
    else if(m==4)
    {
        health_info();

    }
    else if(m==0)
    {
        printf("resetting to main menu\n\n");


    }

}

void need_blood()
{
    int b1;
    printf("\nselect required blood group from the options below(1/2/3/4/5/6/7/8):/n/n");
    printf("\n1.A+");
    printf("\n2.A-");
    printf("\n3.B+");
    printf("\n4.B-");
    printf("\n5.AB-");
    printf("\n6.AB+");
    printf("\n7.O+");
    printf("\n8.O-\n\n");

    scanf("%d",&b1);

         if (b1==1)
            {
            A_plus();
            }

       else if(b1==2)
           {
               A_minus();
           }

        else if(b1==3)
            {
                B_plus();
            }

        else if(b1==4)
            {
                B_minus();
            }

         else if(b1==5)
            {
                AB_plus();
            }

         else if(b1==6)
           {
            AB_minus();
           }

         else if(b1==7)
            {
                O_plus();
            }

         else if(b1==8)
            {
                O_minus();
            }

         else{
             main_menu();
             }
}
void pic_loc()
{
    printf("Pick your area from the options given below(1/2/3/4/5/6/7/8):");
    printf("\n 1. Uttara     \n");
    printf("\n 2. Bashundhara \n");
    printf("\n 3. Dhanmondi  \n");
    printf("\n 4. Gulshan    \n");
    printf("\n 5. Mirpur     \n");

}

void A_plus()
{
    int aplus;
    int a1,a2,a3,a4,a5;
    pic_loc();
    printf("\n\nyour choice:\n\n");
    scanf("%d",&aplus);

    if(aplus == 1)
    {
        FILE *ap1;
        ap1=fopen("Uttara A positive Donor.txt","r");
        if (ap1)
        {
            while ((a1 = getc(ap1)) != EOF)
            putchar(a1);
            fclose(ap1);
        }
    }

    else if(aplus == 2)
    {
        FILE *ap2;
        ap2=fopen("Basundhara A positive Donor.txt","r");
        if (ap2)
        {
            while ((a2 = getc(ap2)) != EOF)
            putchar(a2);
            fclose(ap2);
        }
    }
    else if(aplus == 3)
    {
        FILE *ap3;
        ap3=fopen("Dhanmondi A positive Donor.txt","r");
        if (ap3)
        {
            while ((a3 = getc(ap3)) != EOF)
            putchar(a3);
            fclose(ap3);
        }
    }
    else if(aplus == 4)
    {
        FILE *ap4;
        ap4=fopen("Gulshan A positive Donor.txt","r");
        if (ap4)
        {
            while ((a4 = getc(ap4)) != EOF)
            putchar(a4);
            fclose(ap4);
        }
    }
    else if(aplus == 5)
    {
        FILE *ap5;
        ap5=fopen("Mirpur A positive Donor.txt","r");
        if (ap5)
        {
            while ((a5 = getc(ap5)) != EOF)
            putchar(a5);
            fclose(ap5);
        }
    }
    return_menu();
}
void A_minus()
{
 int aminus;
 int a1,a2,a3,a4,a5;
 pic_loc();
 printf("your choice:");
 scanf("%d",&aminus);

 if(aminus == 1)
    {
        FILE *an1;
        an1=fopen("Uttara A negetive Donor.txt","r");
        if (an1)
        {
            while ((a1 = getc(an1)) != EOF)
            putchar(a1);
            fclose(an1);
        }
    }

    else if(aminus == 2)
    {
        FILE *an2;
        an2=fopen("Basundhara A negetive Donor.txt","r");
        if (an2)
        {
            while ((a2 = getc(an2)) != EOF)
            putchar(a2);
            fclose(an2);
        }
    }
    else if(aminus == 3)
    {
        FILE *an3;
        an3=fopen("Dhanmondi A negetive Donor.txt","r");
        if (an3)
        {
            while ((a3 = getc(an3)) != EOF)
            putchar(a3);
            fclose(an3);
        }
    }
    else if(aminus == 4)
    {
        FILE *an4;
        an4=fopen("Gulshan A negetive Donor.txt","r");
        if (an4)
        {
            while ((a4 = getc(an4)) != EOF)
            putchar(a4);
            fclose(an4);
        }
    }
    else if(aminus == 5)
    {
        FILE *an5;
        an5=fopen("Mirpur A negetive Donor.txt","r");
        if (an5)
        {
            while ((a5 = getc(an5)) != EOF)
            putchar(a5);
            fclose(an5);
        }
    }
    return_menu();
}
void B_plus()
{
    int bplus;
    int b1,b2,b3,b4,b5;
    pic_loc();
    printf("your choice:");
    scanf("%d",&bplus);

    if(bplus == 1)
    {
        FILE *bp1;
        bp1=fopen("Uttara B positive Donor.txt","r");
        if (bp1)
        {
            while ((b1 = getc(bp1)) != EOF)
            putchar(b1);
            fclose(bp1);
        }
    }

    else if(bplus == 2)
    {
        FILE *ab2;
        ab2=fopen("Basundhara B positive Donor.txt","r");
        if (ab2)
        {
            while ((b2 = getc(ab2)) != EOF)
            putchar(b2);
            fclose(ab2);
        }
    }
    else if(bplus == 3)
    {
        FILE *ab3;
        ab3=fopen("Dhanmondi B positive Donor.txt","r");
        if (ab3)
        {
            while ((b3 = getc(ab3)) != EOF)
            putchar(b3);
            fclose(ab3);
        }
    }
    else if(bplus == 4)
    {
        FILE *ab4;
        ab4=fopen("Gulshan B positive Donor.txt","r");
        if (ab4)
        {
            while ((b4 = getc(ab4)) != EOF)
            putchar(b4);
            fclose(ab4);
        }
    }
    else if(bplus == 5)
    {
        FILE *ab5;
        ab5=fopen("Mirpur B positive Donor.txt","r");
        if (ab5)
        {
            while ((b5 = getc(ab5)) != EOF)
            putchar(b5);
            fclose(ab5);
        }
    }
    return_menu();
}
void B_minus()
{
    int bminus;
    int b1,b2,b3,b4,b5;
    pic_loc();
    printf("your choice:");
    scanf("%d",&bminus);

    if(bminus == 1)
    {
        FILE *bn1;
        bn1=fopen("Uttara B negetive Donor.txt","r");
        if (bn1)
        {
            while ((b1 = getc(bn1)) != EOF)
            putchar(b1);
            fclose(bn1);
        }
    }

    else if(bminus == 2)
    {
        FILE *bn2;
        bn2=fopen("Basundhara B negetive Donor.txt","r");
        if (bn2)
        {
            while ((b2 = getc(bn2)) != EOF)
            putchar(b2);
            fclose(bn2);
        }
    }
    else if(bminus == 3)
    {
        FILE *bn3;
        bn3=fopen("Dhanmondi B negetive Donor.txt","r");
        if (bn3)
        {
            while ((b3 = getc(bn3)) != EOF)
            putchar(b3);
            fclose(bn3);
        }
    }
    else if(bminus == 4)
    {
        FILE *bn4;
        bn4=fopen("Gulshan B negetive Donor.txt","r");
        if (bn4)
        {
            while ((b4 = getc(bn4)) != EOF)
            putchar(b4);
            fclose(bn4);
        }
    }
    else if(bminus == 5)
    {
        FILE *bn5;
        bn5=fopen("Mirpur B negetive Donor.txt","r");
        if (bn5)
        {
            while ((b5 = getc(bn5)) != EOF)
            putchar(b5);
            fclose(bn5);
        }
    }
    return_menu();
}
void AB_plus()
{
    int abplus;
    int ab1,ab2,ab3,ab4,ab5;
    pic_loc();
    printf("your choice:");
    scanf("%d",&abplus);

    if(abplus == 1)
    {
        FILE *abp1;
        abp1=fopen("Uttara AB positive Donor.txt","r");
        if (abp1)
        {
            while ((ab1 = getc(abp1)) != EOF)
            putchar(ab1);
            fclose(abp1);
        }
    }

    else if(abplus == 2)
    {
        FILE *abp2;
        abp2=fopen("Basundhara AB positive Donor.txt","r");
        if (abp2)
        {
            while ((ab2 = getc(abp2)) != EOF)
            putchar(ab2);
            fclose(abp2);
        }
    }
    else if(abplus == 3)
    {
        FILE *abp3;
        abp3=fopen("Dhanmondi AB positive Donor.txt","r");
        if (abp3)
        {
            while ((ab3 = getc(abp3)) != EOF)
            putchar(ab3);
            fclose(abp3);
        }
    }
    else if(abplus == 4)
    {
        FILE *abp4;
        abp4=fopen("Gulshan AB positive Donor.txt","r");
        if (abp4)
        {
            while ((ab4 = getc(abp4)) != EOF)
            putchar(ab4);
            fclose(abp4);
        }
    }
    else if(abplus == 5)
    {
        FILE *abp5;
        abp5=fopen("Mirpur AB positive Donor.txt","r");
        if (abp5)
        {
            while ((ab5 = getc(abp5)) != EOF)
            putchar(ab5);
            fclose(abp5);
        }
    }
    return_menu();
}
void AB_minus()
{
    int abminus;
    int ab1,ab2,ab3,ab4,ab5;
    pic_loc();
    printf("your choice:");
    scanf("%d",&abminus);

    if(abminus == 1)
    {
        FILE *abn1;
        abn1=fopen("Uttara AB negetive Donor.txt","r");
        if (abn1)
        {
            while ((ab1 = getc(abn1)) != EOF)
            putchar(ab1);
            fclose(abn1);
        }
    }

    else if(abminus == 2)
    {
       FILE *abn2;
        abn2=fopen("Basundhara AB negetive Donor.txt","r");
        if (abn2)
        {
            while ((ab2 = getc(abn2)) != EOF)
            putchar(ab2);
            fclose(abn2);
        }
    }
    else if(abminus == 3)
    {
        FILE *abn3;
        abn3=fopen("Dhanmondi AB negetive Donor.txt","r");
        if (abn3)
        {
            while ((ab3 = getc(abn3)) != EOF)
            putchar(ab3);
            fclose(abn3);
        }
    }
    else if(abminus == 4)
    {
        FILE *abn4;
        abn4=fopen("Gulshan AB negetive Donor.txt","r");
        if (abn4)
        {
            while ((ab4 = getc(abn4)) != EOF)
            putchar(ab4);
            fclose(abn4);
        }
    }
    else if(abminus== 5)
    {
        FILE *abn5;
        abn5=fopen("Mirpur AB negetive Donor.txt","r");
        if (abn5)
        {
            while ((ab5 = getc(abn5)) != EOF)
            putchar(ab5);
            fclose(abn5);
        }
    }
    return_menu();
}
void O_plus()
{
    int oplus;
    int o1,o2,o3,o4,o5;
    pic_loc();
    printf("your choice:");
    scanf("%d",&oplus);

    if(oplus == 1)
    {
        FILE *op1;
        op1=fopen("Uttara O positive Donor.txt","r");
        if (op1)
        {
            while ((o1 = getc(op1)) != EOF)
            putchar(o1);
            fclose(op1);
        }
    }

    else if(oplus == 2)
    {
        FILE *op2;
        op2=fopen("Basundhara O positive Donor.txt","r");
        if (op2)
        {
            while ((o2 = getc(op2)) != EOF)
            putchar(o2);
            fclose(op2);
        }
    }
    else if(oplus == 3)
    {
        FILE *op3;
        op3=fopen("Dhanmondi O positive Donor.txt","r");
        if (op3)
        {
            while ((o3 = getc(op3)) != EOF)
            putchar(o3);
            fclose(op3);
        }
    }
    else if(oplus == 4)
    {
        FILE *op4;
        op4=fopen("Gulshan O positive Donor.txt","r");
        if (op4)
        {
            while ((o4 = getc(op4)) != EOF)
            putchar(o4);
            fclose(op4);
        }
    }
    else if(oplus == 5)
    {
        FILE *op5;
        op5=fopen("Mirpur O positive Donor.txt","r");
        if (op5)
        {
            while ((o5 = getc(op5)) != EOF)
            putchar(o5);
            fclose(op5);
        }
    }
    return_menu();
}
void O_minus()
{
    int ominus;
    int o1,o2,o3,o4,o5;
    pic_loc();
    printf("your choice:");
    scanf("%d",&ominus);

    if(ominus == 1)
    {
        FILE *on1;
        on1=fopen("Uttara O negetive Donor.txt","r");
        if (on1)
        {
            while ((o1 = getc(on1)) != EOF)
            putchar(o1);
            fclose(on1);
        }

    }

    else if(ominus == 2)
    {
        FILE *on2;
        on2=fopen("Basundhara O negetive Donor.txt","r");
        if (on2)
        {
            while ((o2 = getc(on2)) != EOF)
            putchar(o2);
            fclose(on2);
        }
    }
    else if(ominus == 3)
    {
        FILE *on3;
        on3=fopen("Dhanmondi O negetive Donor.txt","r");
        if (on3)

        {
            while ((o3 = getc(on3)) != EOF)
            putchar(o3);
            fclose(on3);
        }
    }
    else if(ominus == 4)
    {
        FILE *on4;
        on4=fopen("Gulshan O negetive Donor.txt","r");
        if (on4)
        {
            while ((o4 = getc(on4)) != EOF)
            putchar(o4);
            fclose(on4);
        }
    }
    else if(ominus == 5)
    {
        FILE *on5;
        on5=fopen("Mirpur O negetive Donor.txt","r");
        if (on5)
        {
            while ((o5 = getc(on5)) != EOF)
            putchar(o5);
            fclose(on5);
        }
    }
    return_menu();
}

void donate_blood()
{
    int d,a,i;
    printf("\n\nThis section is still in the demo phase\n\n");
    printf("\nbefore proceeding,please answer the following question:\n");
    printf("\nhow long before have you last donated blood?\npick an option from below.\n");
    printf("\n1.less than 12 weeks/84 days\n2.more than 12 weeks/84 days\n3.never\nenter(1/2/3):");
    scanf("%d",&d);
    if(d==1)
    {
        printf("\n\nIt's not safe for you to donate blood,please wait more than 12 weeks before donating blood again.\n");
        printf("\npress 0 to go to main menu\n");
        for(i=0;i<5;i++)
        {
          scanf("%d",&a);
          if(a==0)
          {
            main_menu();
            break;
          }
         else
          {
            printf("\nplease press 0 to go back\n");
          }
        }
    }
    else if(d==2)
    {
        printf("\nIt's safe for you to donate blood you may now proceed.\n");
        donate2_blood();
    }
    else if(d==3)
    {
        printf("\nIt's safe for you to donate blood you may now proceed.\n");
        donate2_blood();
    }
    else
    {
        printf("\ninvalid input\n");
        main_menu();
    }
    return_menu();
}
void donate2_blood()
{
     int d1;
     pic_loc();

     printf("\nyour choice:");
     scanf("%d",&d1);
     char dataToAppend1[10];
     char dataToAppend2[40];
     char dataToAppend3[30];
     char dataToAppend4[500];

     char dataToAppend11[10];
     char dataToAppend22[40];
     char dataToAppend33[30];
     char dataToAppend44[500];

     char dataToAppend111[10];
     char dataToAppend222[40];
     char dataToAppend333[30];
     char dataToAppend444[500];

     char dataToAppend1111[10];
     char dataToAppend2222[40];
     char dataToAppend3333[30];
     char dataToAppend4444[500];

     char dataToAppend11111[10];
     char dataToAppend22222[40];
     char dataToAppend33333[30];
     char dataToAppend44444[500];


     if(d1==1)
     {
        FILE *fPtr;
        fPtr = fopen("new entry.txt", "a");

        printf("\nenter your blood group:");
        fflush(stdin);          // To clear extra white space characters in stdin
        fgets(dataToAppend1,10,stdin);
        fputs(dataToAppend1, fPtr);

        printf("\nenter your name: ");
        fflush(stdin);
        fgets(dataToAppend2,40,stdin);
        fputs(dataToAppend2, fPtr);

        printf("\nenter your number:");
        fflush(stdin);
        fgets(dataToAppend3,30,stdin);
        fputs(dataToAppend3, fPtr);


        printf("\nenter your address:");
        fflush(stdin);
        fgets(dataToAppend4,500,stdin);
        fputs(dataToAppend4, fPtr);

        fclose(fPtr);

        printf("\nYou can go to the following places to donate blood:");
        printf("\nUttara Central Hospital & Diagnostic Centre");
        printf("\nUttara Modern Medical College and Hospital");

     }
     else if(d1==2)
     {
        FILE *fPtr;
        fPtr = fopen("new entry.txt", "a");

        printf("\nenter your blood group:");
        fflush(stdin);
        fgets(dataToAppend11,10,stdin);
        fputs(dataToAppend11, fPtr);

        printf("\nenter your name: ");
        fflush(stdin);
        fgets(dataToAppend22,40,stdin);
        fputs(dataToAppend22, fPtr);

        printf("\nenter your number:");
        fflush(stdin);
        fgets(dataToAppend33,30,stdin);
        fputs(dataToAppend33, fPtr);

        printf("\nenter your address:");
        fflush(stdin);
        fgets(dataToAppend44,500,stdin);
        fputs(dataToAppend44, fPtr);

        fclose(fPtr);

        printf("You can go to the following places to donate blood:");
        printf("\n\nBashundhara Eye Hospital,Contact,Contact-01775559977");
        printf("\n\nBashundhara Ad-din Hospital,Contact-0198886650,Address-Bashundhara Riverview,");
        printf("\nDhaka,Bangladesh");
        printf("\n\nApollo Hospital,Contact-0255037242,Address:Plot-81,");
        printf("\nBlock:E,Bashundhara Residential R/A,Dhaka-1229,Bangladesh\n");
     }

     else if(d1==3)
     {
        FILE *fPtr;
        fPtr = fopen("new entry.txt", "a");

        printf("\nenter your blood group:");
        fflush(stdin);
        fgets(dataToAppend111,10,stdin);
        fputs(dataToAppend111, fPtr);

        printf("\nenter your name: ");
        fflush(stdin);
        fgets(dataToAppend222,40,stdin);
        fputs(dataToAppend222, fPtr);

        printf("\nenter your number:");
        fflush(stdin);
        fgets(dataToAppend333,30,stdin);
        fputs(dataToAppend333, fPtr);

        printf("\nenter your address:");
        fflush(stdin);
        fgets(dataToAppend444,500,stdin);
        fputs(dataToAppend444, fPtr);


        fclose(fPtr);

        printf("\nYou can go to the following places to donate blood:");
        printf("\na.Lab Aid Hospital");
        printf("\nb.Central Hospital Limited");

     }
     else if(d1==4)
     {
        FILE *fPtr;
        fPtr = fopen("new entry.txt", "a");

        printf("\nenter your blood group:");
        fflush(stdin);
        fgets(dataToAppend1111,10,stdin);
        fputs(dataToAppend1111, fPtr);

        printf("\nenter your name: ");
        fflush(stdin);
        fgets(dataToAppend2222,40,stdin);
        fputs(dataToAppend2222, fPtr);

        printf("\nenter your number:");
        fflush(stdin);
        fgets(dataToAppend3333,30,stdin);
        fputs(dataToAppend3333, fPtr);

        printf("\nenter your address:");
        fflush(stdin);
        fgets(dataToAppend4444,500,stdin);
        fputs(dataToAppend4444, fPtr);

        fclose(fPtr);
        printf("\na.You can go to the following places to donate blood:");
        printf("\nb.United Hospital");
        printf("\nc.Shahabuddin Medical College Hospital");
     }
     else if (d1==5)
     {
        FILE *fPtr;
        fPtr = fopen("new entry.txt", "a");

        printf("\nenter your blood group:");
        fflush(stdin);
        fgets(dataToAppend11111,10,stdin);
        fputs(dataToAppend11111, fPtr);

        printf("\nenter your name: ");
        fflush(stdin);
        fgets(dataToAppend22222,40,stdin);
        fputs(dataToAppend22222, fPtr);

        printf("\nenter your number:");
        fflush(stdin);
        fgets(dataToAppend33333,30,stdin);
        fputs(dataToAppend33333, fPtr);

        printf("\nenter your address:");
        fflush(stdin);
        fgets(dataToAppend44444,500,stdin);
        fputs(dataToAppend44444, fPtr);

        fclose(fPtr);
         printf("You can go to the following places to donate blood:");
        printf("\nMirpur Child Hospital");
        printf("\nGalaxy Hospital");

     }
     return_menu();

}


void don_info()
{
    FILE *doninfo;
    int c;
    doninfo=fopen("donation_importance.txt","r");
    if (doninfo)
    {
        while ((c = getc(doninfo)) != EOF)
        putchar(c);
        fclose(doninfo);
    }
    return_menu();
}
void health_info()
{
    FILE *healthinfo;
    int c;
    healthinfo=fopen("donation_rules.txt","r");
    if (healthinfo)
    {
        while ((c = getc(healthinfo)) != EOF)
        putchar(c);
        fclose(healthinfo);
    }
    return_menu();
}
void return_menu()
{
   int k;
   printf("\n\npress 1 to return to main menu\n\n");
   scanf("%d",&k);

   if(k==1)
   {
       main_menu();
   }
   else
   {
       printf("\n\nINVALID INPUT,PLEASE TRY AGAIN\n\n");
       return_menu();
   }
}





