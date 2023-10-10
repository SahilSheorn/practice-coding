import java.util.Scanner;

class emp {
    Scanner s = new Scanner(System.in);
    double empno, salary, TA, DA, HRA, PF, net;
    String name;

    public void Data() {
        System.out.println("Enter Employee Name : ");
        name = s.nextLine();
        System.out.println("Enter Employee Number : ");
        empno = s.nextDouble();
        System.out.println("Enter Basic Salary of the Employee : ");
        salary = s.nextDouble();
    }

    void Cal() {
        TA = (2.0 / 100) * salary;
        DA = (3.0 / 100) * salary;
        HRA = (5.0 / 100) * salary;
        PF = (10.0 / 100) * salary;
        net = (long) (salary + TA + DA + HRA - PF);
    }

    void Print() {
        System.out.println("Employee Name : " + name);
        System.out.println("Employee Number : " + empno);
        System.out.println("Basic Salary : " + salary);
        System.out.println("Travel Allowance : " + TA);
        System.out.println("D Allowance : " + DA);
        System.out.println("House Rent Allowance : " + HRA);
        System.out.println("Provident Fund : " + PF);
        System.out.println("Net Salary : " + net);
    }
}

public class loop2 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        emp e = new emp();
        e.Data();
        e.Cal();
        e.Print();
    }
}
