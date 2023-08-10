//Student Management System

// Project Start Date :- 08/04/2003

import java.util.*;

class Info {
    Scanner sc = new Scanner(System.in);
    int roll, enr, sem1, sem2, sem3, n;
    String name;
    public int arr_roll[];
    public String arr_name[];
    public long arr_enr[];
    public int arr_sem1[];
    public int arr_sem2[];
    public int arr_sem3[];

    public void input() {
        System.out.println();
        System.out.println(" ********** Create a student record ********** ");
        System.out.println();
        System.out.println("How Many Student Data Store : ");
        n = sc.nextInt();
        arr_roll = new int[n];
        arr_name = new String[n];
        arr_enr = new long[n];
        arr_sem1 = new int[n];
        arr_sem2 = new int[n];
        arr_sem3 = new int[n];

        for (int i = 0; i < n; i++) {

            System.out.println("Student no  : " + (i + 1));

            System.out.print("Enter your Roll No : ");
            arr_roll[i] = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter your Full Name: ");
            arr_name[i] = sc.nextLine();

            System.out.print("Enter your Enrollment No : ");
            arr_enr[i] = sc.nextInt();

            System.out.print("Enter 1 sem marks: ");
            arr_sem1[i] = sc.nextInt();

            System.out.print("Enter 2 sem marks: ");
            arr_sem2[i] = sc.nextInt();

            System.out.print("Enter 3 sem marks: ");
            arr_sem3[i] = sc.nextInt();
            System.out.println();
        }
    }

    public void display() {
        System.out.println();

        System.out.println(" ********** Display all student record ********** ");
        System.out.println();

        for (int i = 0; i < n; i++) {

            System.out.println("Student Roll No is: " + arr_roll[i]);
            System.out.println("Student Name is: " + arr_name[i]);
            System.out.println("Student Enrollment No is: " + arr_enr[i]);
            System.out.println("Student sem 1 marks is: " + arr_sem1[i]);
            System.out.println("Student sem 2 marks is: " + arr_sem2[i]);
            System.out.println("Student sem 3 marks is: " + arr_sem3[i]);
            System.out.println();
        }
        System.out.println();

    }

    public void Search() {
        System.out.println();
        System.out.println(" ********** Search student record ********** ");
        System.out.println();

        System.out.println("Enter a Student Roll No for Search : ");
        int s = sc.nextInt();

        for (int i = 0; i < arr_roll.length; i++) {

            if (s == arr_roll[i]) {

                System.out.println("Student Roll No is: " + arr_roll[i]);
                System.out.println("Student Name is: " + arr_name[i]);
                System.out.println("Student Enrollment No is: " + arr_enr[i]);
                System.out.println("Student sem 1 marks is: " + arr_sem1[i]);
                System.out.println("Student sem 2 marks is: " + arr_sem2[i]);
                System.out.println("Student sem 3 marks is: " + arr_sem3[i]);
                System.out.println();

            } else {

                System.out.println("Student not found.");
                break;

            }

        }

    }

    void profile() {
        System.out.println(" ");
        System.out.println("                      *************** Welcome Student Management System ***************");
        System.out.println("                      *                                                               *");
        System.out.println("                      *         Program Developed By -> Kaushal Divekar               *");
        System.out.println("                      *         Branch -> Computer Engineering                        *");
        System.out.println("                      *         Enrollment No -> 2005630153                           *");
        System.out.println("                      *                                                               *");
        System.out.println("                      *****************************************************************");
        System.out.println(" ");
    }

}

public class mihir {

    public static void main(String[] args) {

        Info i1 = new Info();
        Scanner sc1 = new Scanner(System.in);
        i1.profile();

        while (true) {

            System.out.println("1. Create a student record");
            System.out.println("2. Display all student record");
            System.out.println("3. Search student record");
            System.out.println("0. Exit");
            System.out.println("Choice Option : [1/2/3/0]");

            int key = sc1.nextInt();

            switch (key) {
                case 1:

                    i1.input();
                    break;

                case 2:

                    i1.display();

                    break;

                case 3:
                    i1.Search();

                    break;

                case 0:
                    System.out.println("                    Thank You !!!!!");

                    System.exit(0);
                    break;

                default:
                    System.out.println("Enter the valid number!");
                    break;
            }

        }
    }

}

