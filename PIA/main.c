//
//  main.c
//  PIA
//
//  Created by Aneth Rodriguez on 10/05/21.
//
//Hello, my name is Aneth Rodriguez and I made this program called Nutrition Plan Generator.
//this program is made by functions

#include <stdio.h>// here I included the libraries that I used
#include <string.h>

//Here I introduced the variables and what they are.
char name [20];
int weight = 200;
float height;
int age = 90;
int BMI = 70;


void QuestionsUser(){ //here i made a different function for each stage, this one is to take the data from the user.
    printf ("...................................................................................\n");
    printf ("...................................................................................\n");
    printf (".. Please answer the following questions honestly as is shown on the example ..\n");
    printf ("..                                                                               ..\n");
    printf (".. Example:                                                                      ..\n");
    printf ("..  1. What is your weight in kg?                                                ..\n");
    printf ("..  2. What is your height in mts?                                               ..\n");
    printf (".. Your answer must be like this:                                                ..\n");
    printf ("..  50 1.70 etc.                                                                 ..\n");
    printf ("..                                                                               ..\n");
    printf (".. Questions:                                                                    ..\n");
    printf ("..                                                                               ..\n");
    printf ("..  1. What is your weight in kg?                                                ..\n");
    printf ("..  2. What is your height in mts?                                               ..\n");
    printf ("..  3. How old are you?                                                          ..\n");
    printf ("...................................................................................\n");
    printf ("...................................................................................\n");
    scanf( "%i %f %i", &weight, &height, &age); //this takes the data and stores it
   
    if(weight >=201){ //with this I make sure that the program tells the user to enter a valid number if they use an unrealistic valeu.
        printf("Please enter a valid number\n");
      
    }else if(height >=2.50){
        printf("please enter a valid number\n");

    } else if(age >=91){
        printf("please restart the program and enter a valid number\n");
    }
}
void TakeBmi(){// this is an other function that takes the data form "questionuser" and uses it for the calculation of the BMI.
  QuestionsUser();
    BMI = weight/(height*height);{
        printf("\n");
        printf ("your BMI is: %d\n",BMI);
}if(BMI <= 18){//this part takes the BMI and compares it to the number I gave so that the program tells you what is your condition.
    printf("You are Underweight\n");
    printf("You can gwt helthier!\n");
  } else if(BMI >= 19 && BMI <= 24){
    printf("You are Healthy!\n");
    printf("Congrats!, lets keep it that way\n");
  } else if(BMI >= 25 && BMI <= 29){
    printf("You are Overweight\n");
    printf("Let´s get helthier!\n");
  } else if(BMI >= 30 && BMI <= 39){
    printf("You are Obese\n");
    printf("So we need to take action!\n");
  } else if(BMI >= 40){
    printf("You are Morbidly Obese\n");
    printf("So we need to take action!\n");
  }
}

void ElectionProgram1(){//this function is the one that gives the link to you according to what you pick.
  int eatingProgram;
    printf("\n");
  printf("Would you like the normal eating program or the vegetarian one?\n");//here the program asks you if you want a normal or a vegatarian plan
  printf("1. Normal\n");
  printf("2. Vegetarian\n");
    scanf( "%i", &eatingProgram);//this takes the answer and stores it
  if(eatingProgram == 1){
      printf("https://the30clean.com/wp-content/uploads/2014/12/30-Day-Meal-Plan_031315.pdf\n");
      printf("thank you for participating!\n");
  }else if(eatingProgram == 2){
      printf("https://documents.hants.gov.uk/hms/HealthyEatingontheRun-28dayEatingPlan.pdf\n");
      printf("thank you for participating!\n");
  }else if(eatingProgram >= 3){//here i told the program that if you unter a number higher or equal to 3, it needs to ask you for a valid number.
           printf("Please restart the program and enter a valid number\n");
   
  }
}
void ElectionProgram2(){//this is the same but for the muscle gain
  int eatingProgram;
    printf("\n");
  printf("Would you like the normal eating program or the vegetarian one?\n");
  printf("1. Normal\n");
  printf("2. Vegetarian\n");
    scanf( "%i", &eatingProgram);
  if(eatingProgram == 1){
      printf("http://www.fit100hq.com/wp-content/uploads/2017/10/FIT-100-Nutrition-Muscle-Gain-1.pdf\n");
      printf("thank you for participating!\n");
  }else if(eatingProgram == 2){
      printf("https://www.vegetarianbodybuilding.com/v3/success-guide.pdf\n");
      printf("thank you for participating!\n");
  }else if(eatingProgram >= 3){
           printf("Please restart the program and  enter a valid number\n");
  }
    
}
void ElectionProgram3(){//and this is for maintaining
  int eatingProgram;
    printf("\n");
  printf("Would you like the normal eating program or the vegetarian one?\n");
  printf("1. Normal\n");
  printf("2. Vegetarian\n");
    scanf( "%i", &eatingProgram);
    if(eatingProgram == 1){
    printf("https://www.hss.gov.nt.ca/sites/hss/files/resources/healthy-eating-healthy-weight-guide.pdf\n");
    printf("thank you for participating!\n");
    }else if(eatingProgram == 2){
    printf("http://www.kphealthyme.com/documents/Vegetarian-Meal-Planning.aspx\n");
    printf("thank you for participating!\n");
 }else if(eatingProgram >= 3){
          printf("Please restart the program and enter a valid number\n");
        }
  }

void LostWeight(){// this 3 functions takes you to the other steps according to what you picked.
  TakeBmi();
  ElectionProgram1();
}
void GainMuscle(){
  TakeBmi();
  ElectionProgram2();
}

void Maintain(){
  TakeBmi();
  ElectionProgram3();
}

int main (){// here is where the program begins
int goal;//first i introduced the variable goal as an int

    printf("Hello! welcome to our nutrition plan generator!\n");//here the program greets you and asks for your name
    printf("what is your name?\n");
    scanf("%s",name);//this takes your name and stores it
    printf("\n");
  printf("..................................................................\n");
  printf("..................................................................\n");
  printf(" Attention %s you must be at least                               \n",name);//here the %s takes your stored name and puts it in the sentence
  printf(" 16 years old to use it                                         ..\n");
  printf("..                                                              ..\n");
  printf(".. What is your goal?                                           ..\n");//here the program asks for what your goal is.
  printf(".. 1. Lose weight                                               ..\n");
  printf(".. 2. Gain muscle                                               ..\n");
  printf(".. 3. Maintain                                                  ..\n");
  printf("..................................................................\n");
  printf("..................................................................\n");
    scanf("%i",&goal);//this scans your answer and stores it.
   
    
  if(goal == 1){ //this takes your previous answer and takes you to the function of the plan that you chose.
    LostWeight();
  }else if(goal == 2){
    GainMuscle();
  }else if(goal == 3) {
    Maintain();
  }else if(goal >= 4){
      printf("Please restart the program and enter a valid number\n");
    }

}

//*the program works fine, the only problem is that you enter an invalid number in one of the other functions the program tells you that is an invalid number but it keeps going.
