import java.util.Scanner;

class Bank {
  String name, address;
  int accNum;
  float balance;
  static int help = 1001;

  void getData() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the name.");
    name = sc.nextLine();
    System.out.println("Enter the address.");
    address = sc.nextLine();
    System.out.println("Enter the initial balance.");
    balance = sc.nextFloat();
  }

  void generateAccNum() {
    accNum = help;
    help++;
  }

  void display() {
    System.out
        .println("Name: " + name + "\nAddress: " + address + "\nAccount number: " + accNum + "\nBalance: " + balance);
  }

  void deposit(int amount) {
    balance += amount;
    System.out.println("Amount successfully deposited.");
  }

  void withdraw(int amount) {
    balance -= amount;
    System.out.println("Amount successfully withdrawn.");
  }

  void changeAddress() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter new address.");
    address = sc.next();
    System.out.println("Address successfully changed.");
  }

  String getName() { return name; }
}

public class BankData {
  public static void displayDepositors(Bank deps[])
  {
    for(int i=1; i<=deps.length; i++) System.out.println(i + " " + deps[i-1].getName());
  }

  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int n, ch, opt, amount;
    System.out.println("Enter number of depositors.");
    n=sc.nextInt();
    Bank depositors[] = new Bank[n];
    for (int i = 0;i<n;i++) depositors[i] = new Bank();
    for (int i = 0;i<n;i++) depositors[i].generateAccNum();
    for (int i=0; i<n; i++) depositors[i].getData();
    while (true)
    {
      System.out.println("Enter your choice:\n1. Display data of a user.\n2. Deposit money.\n3. Withdraw money.\n4. Change address.");
      System.out.println("Here is the list of depositors:");
      displayDepositors(depositors);
      ch = sc.nextInt();
      switch (ch)
      {
        case 1: System.out.println("Enter the depositor number.");
                    opt = sc.nextInt();
                    depositors[opt-1].display();
                    break;
        case 2: System.out.println("Enter the depositor number.");
                    opt = sc.nextInt();
                    System.out.println("Enter the amount.");
                    amount = sc.nextInt();
                    depositors[opt-1].deposit(amount);
                    depositors[opt-1].display();
                    break;
        case 3: System.out.println("Enter the depositor number.");
                    opt = sc.nextInt();
                    System.out.println("Enter the amount.");
                    amount = sc.nextInt();
                    depositors[opt-1].withdraw(amount);
                    depositors[opt-1].display();
                    break;
        case 4: System.out.println("Enter the depositor number.");
                    opt = sc.nextInt();
                    depositors[opt-1].changeAddress();
                    depositors[opt-1].display();
                    break;
        default: System.out.println("Invalid choice");
      }
      System.out.println("Do you want to continue? Press 1 for yes.");
      ch = sc.nextInt();
      if (ch != 1) break;
    }
  }
}
