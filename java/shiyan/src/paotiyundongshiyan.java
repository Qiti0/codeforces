import java.util.Scanner;

public class paotiyundongshiyan {
    public static void main(String[] agrs) {
        final float G = 10f;
        final double check = 0.000001f;
        Scanner scanner = new Scanner(System.in);
        System.out.print("请输入初速度(m/s): ");
        Double V0Double = scanner.nextDouble();
        System.out.print("请输入初始的速度与水平地面的夹角,角度制(°): ");
        Double Angle0Double = Math.toRadians(scanner.nextDouble());
        // System.out.print(Math.cos(Angle0Double)+"\n");
        // System.out.print("请输入时间(s): ");
        // Double TimeDouble= scanner.nextDouble();
        System.out.print("请输入行数: ");
        int Hangshu = scanner.nextInt();
        scanner.close();
        double x = 0;
        double y = 0;
        double TimeDouble = 2 * (V0Double * Math.sin(Angle0Double) / G);
        double Time = TimeDouble / Hangshu;
        double time = Time;
        for (int i = 1; i <= Hangshu; i++) {
            x = V0Double * Math.cos(Angle0Double) * Time;
            y = 0.5 * (V0Double * Math.sin(Angle0Double) + (V0Double * Math.sin(Angle0Double) - G * Time)) * Time;
            if (Math.abs(x) <= check)
                x = 0;
            if (Math.abs(y) <= check)
                y = 0;
            // if(y<0) y=0;
            System.out.print("第" + i + "行:\t");
            String TTime, X, Y;
            TTime = String.format("%.2f", Time);
            X = String.format("%.2f", x);
            Y = String.format("%.2f", y);
            System.out.print("在时间" + TTime + "s 的物体的坐标如下:" + "\t");
            System.out.print("x 坐标为: " + X + "\t");
            System.out.print("y 坐标为: " + Y + "\t");
            System.out.print("\n");
            Time += time;
        }
    }
}
