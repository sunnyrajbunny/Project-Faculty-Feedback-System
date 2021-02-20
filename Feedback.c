#include <stdio.h>
int main(){
	int choicedepartment,i,j,choiceteacher,p,q,sum=0,choice;
	char name[50];
	char usn[50];
	int answer[20];
	char feedback[][1000]={"1. Begins and ends the class on time.","2. Is well-prepared for class.","3. Is organized and teaches clearly.",
	"4. Checks during class to see if students understand the material.","5. Encourages students to ask questions and participate.","6. Answers questions clearly.",
	"7. Knows the subject matter of this course.","8. Shows interest in the material that we are studying.","9. Encourages me to think and explore new ideas.",
	"10. Tells the class at each meeting what we are going to do and what we are expected to learn.","11. Treats all students respectfully.",
	"12. Returns my papers, tests, and other work within two weeks of collecting them.","13. Responds to my work so I know how I’m doing and what I need to work on.",
	"14. Responds to me when I need help outside of class.","15. Follows the grading guidelines in our course syllabus and explains my grade if I ask.",
	"16. Helps me meet the goals and learning objectives/outcomes of the course."};
	printf("Welcome to New Horizon College of Engineering\n");
	printf("Faculty Feedback System\n");
	char teachermca[][20] = { "Geek1", "Geek2", "Geek3", "Geek4", "Geek5" };
	char teachermba[][20] = {"Geek6","Geek7","Geek8","Geek9","Geek10"};
	//for (i = 0; i < 5; i++) 
        //printf("%d. %s\n", i+1, array[i]); 
    //printf("Enter the Choice");
	//scanf("%d",&choice);
	//printf("%s",array[choice-1]);
	char answeroptions[][20] = {"1. Never","2. Rarely","3. Sometimes","4. Often","5. Always"};
	printf("\nEnter Your Name: ");
	scanf("%s",&name);
	printf("%s",name);
	printf("\nEnter your USN: ");
	scanf("%s",&usn);
	printf("%s",usn);
	printf("\nChoose the department: ");
	printf("\nChoose\n 1. MCA \n 2. MBA\n");
	scanf("%d",&choicedepartment);
	if(choicedepartment==1){
		for (i = 0; i < 5; i++) 
        printf("%d. %s\n", i+1, teachermca[i]);	
	}
	else{
		for (i = 0; i < 5; i++) 
        printf("%d. %s\n", i+1, teachermba[i]);
	}
	printf("\nSelect the teacher for whom you want to give the feedback: ");
	printf("Enter the Choice: ");
	scanf("%d",&choiceteacher);
	if(choicedepartment==1){
	printf("%s",teachermca[choiceteacher-1]);
	}
	else{
	printf("%s",teachermba[choiceteacher-1]);	
	}
	for(j=0;j<15;j++){
		printf("\n%s",feedback[j]);
		printf("\nChoose Your answer");
		for(p=0;p<5;p++){
			printf("\n%s",answeroptions[p]);		
		}
		printf("\nEnter the Choice: ");
		scanf("%d",&choice);
		answer[j]= choice;			
	}
	for(q=0;q<16;q++){
		sum = sum + answer[i];
	}
	if (choicedepartment==1){
		printf("\n Total score of teacher %s = %d out of 5",teachermca[choiceteacher-1],sum/16);
	}
	else{
		printf("\n Total score of teacher %s = %d out of 5",teachermba[choiceteacher-1],sum/16);
	}
	return 0;	
}
