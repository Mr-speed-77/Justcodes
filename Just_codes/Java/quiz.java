import java.util.Scanner;

public class quiz
{
	public static void main(String[] args) {
		String GREEN = u001B[32m;
		String RED = u001B[31m;
		String RESET = u001B[37m;
		String BLUE = u001B[34m;
		Scanner sc = new Scanner(System.in);
		System.out.print(n ---------------------  Welcome to Quiz Game !  ---------------------nn);
		System.out.print(  Enter Your Name );
		String name=sc.nextLine();
		System.out.print(  Hey +name+ ! Let's play the Game ![yesno] );
		String choose=sc.nextLine();
		int choice,sum=0;
		if(choose.equalsIgnoreCase(Yes)  choose.equalsIgnoreCase(yes)){
		    System.out.printf(n 1. What program language is commonly used for game developmentn 1)Pythonn 2)Javan 3) C++n 4) Ruby n);
		    System.out.print(n Enter a choice );
		    int quiz_1=sc.nextInt();
		    if(quiz_1==3){
		        System.out.print(nt+GREEN+Correct Answer ✓+RESET+n);
		        sum=sum+1;
		    }
		    else{
		        System.out.printf(nt+RED+Wrong Answer Χ +RESET+n);
		    }
		    System.out.printf(n 2. Which software is often used for creating 3D models in game developmentn 1) Photoshopn 2) Blendern 3) Microsoft Wordn 4) Adobe Illustrator n);
            System.out.print(n Enter a choice );
		    int quiz_2=sc.nextInt();
		    if(quiz_2==2){
		        System.out.print(nt+GREEN+Correct Answer ✓+RESET+n);
		        sum=sum+1;
		    }
		    else{
		        System.out.printf(nt+RED+Wrong Answer Χ +RESET+n);    
		    }
		    System.out.print(n 3. In game desing,What dose NPC stand forn 1)Non-Playable Charactern 2)New Player Charactern 3)Non-Participating Creaturen 4)Network Player Connection n);
		    System.out.print(n Enter a choice );
		    int quiz_3=sc.nextInt();
		    if(quiz_3==3){
		        System.out.print(nt+GREEN+Correct Answer ✓+RESET+n);
		        sum=sum+1;
		    }
		    else{
		        System.out.printf(nt+RED+Wrong Answer Χ+RESET+ n);    
		    }
		}
		else if(choose.equalsIgnoreCase(No)  choose.equalsIgnoreCase(no)){
		    System.out.print(  Exit The Game ...);
		}
		else{
		    System.out.print(  Please type  Yes or No );
		}
		System.out.print(nntt ----------- Game Over ------------- n);
		System.out.print(ntt+BLUE+Hey +name+ You Got a Score +sum+3+RESET);
		sc.close();
	}
}
