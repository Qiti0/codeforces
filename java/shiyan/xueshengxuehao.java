import java.util.Scanner;
import java.util.Random;
import java.util.Comparator;
import java.util.Arrays;

public class xueshengxuehao {
    static class Student {
        StringBuffer name = new StringBuffer("");
        StringBuffer sno;
        int bianhao;
        int s = 0, g = 0, b = 0;

        Student(int ssno) {
            this.bianhao = ssno;
            if (ssno >= 100)
                this.sno = new StringBuffer(ssno + "");
            else if (ssno >= 10 && ssno < 100)
                this.sno = new StringBuffer("0" + ssno);
            else if (ssno < 10)
                this.sno = new StringBuffer("00" + ssno);
            yinshe(ssno);
        }

        void yinshe(int ssno) {
            char n[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'j' };
            if (ssno == 0)
                this.name.append("AAA");
            else if (ssno < 10) {
                this.name.append(n[0]);
                this.name.append(n[0]);
            } else if (ssno < 100) {
                this.name.append(n[0]);
            }
            int cnt = 0;
            int num[] = { 0, 0, 0 };
            while (ssno > 0) {
                int digit = ssno % 10;
                num[cnt] = digit;
                if (cnt == 0)
                    this.g = digit;
                if (cnt == 1)
                    this.s = digit;
                if (cnt == 2)
                    this.b = digit;
                cnt += 1;
                ssno /= 10;
            }
            int m = cnt;
            while (m > 0) {
                m--;
                this.name.append(n[num[m]]);
            }
        }

    }

    static class Acmp implements Comparator<Student> {
        public int compare(Student a, Student b) {
            return a.bianhao - b.bianhao;
        }
    }

    static class Bcmp implements Comparator<Student> {
        public int compare(Student a, Student b) {
            if (a.s == b.s) {
                if (a.g == b.g) {
                    return a.b - b.b;
                }
                return a.g - b.g;
            }
            return a.s - b.s;
        }
    }

    static class Ccmp implements Comparator<Student> {
        public int compare(Student a, Student b) {
            if (a.g == b.g) {
                if (a.b == b.b) {
                    return a.s - b.s;
                }
                return a.b - b.b;
            }
            return a.g - b.g;
        }
    }

    public static void main(String[] args) {
        System.out.print("请输入学生个数");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        // int n=5;
        Random r = new Random();
        Student stu[] = new Student[n];
        int arr[] = new int[1100];
        for (int i = 0; i < n; i++) {
            int number = r.nextInt(1000);
            if (arr[number] == 0)
                stu[i] = new Student(number);
            else
                i--;// 防止重复
            arr[number] += 1;
        }
        System.out.print("请选择排序方式,A-1,B-2,C-3" + "\n");
        // String op = scanner.nextLine();
        int op = scanner.nextInt();
        if (op == 1)
            Arrays.sort(stu, 0, n, new Acmp());
        else if (op == 2)
            Arrays.sort(stu, 0, n, new Bcmp());
        else if (op == 3)
            Arrays.sort(stu, 0, n, new Ccmp());
        System.out.print("行数\t" + "学号\t" + "姓名\t" + "\n");
        for (int i = 0; i < n; i++) {
            System.out.print(i + 1 + "\t" + stu[i].sno + "\t" + stu[i].name);
            System.out.print("\n");
        }
        scanner.close();
    }

}
