import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class jisuanqi {

  static int number1 = 0, number2 = 0, number3 = 0;
  static int jinzhi = 10;
  final int max = 2147483647;
  final int min = -2147483648;
  JFrame jf;
  JPanel jp;
  JPanel ps;
  JLabel num1, num2, num3;
  JTextField t1, t2, t3;
  JButton bt_plus, bt_sub, bt_mul, bt_div;
  JRadioButton B_scale, O_scale, H_scale, D_scale;
  ButtonGroup scaleGroup;

  public jisuanqi() {
    jf = new JFrame("简易计算器");
    jp = new JPanel();
    ps = new JPanel();
    num1 = new JLabel("数一", JLabel.CENTER);
    num2 = new JLabel("数二", JLabel.CENTER);
    num3 = new JLabel("结果", JLabel.CENTER);
    B_scale = new JRadioButton("二进制");
    O_scale = new JRadioButton("八进制");
    H_scale = new JRadioButton("十六进制");
    D_scale = new JRadioButton("十进制");
    scaleGroup = new ButtonGroup();
    scaleGroup.add(B_scale);
    scaleGroup.add(O_scale);
    scaleGroup.add(H_scale);
    scaleGroup.add(D_scale);
    B_scale.addActionListener(new mylistener_Bin());
    O_scale.addActionListener(new mylistener_Oct());
    H_scale.addActionListener(new mylistener_Hex());
    D_scale.addActionListener(new mylistener_Dec());
    D_scale.setSelected(true);
    ps.setLayout(new GridLayout(6, 1));
    ps.add(B_scale);
    ps.add(O_scale);
    ps.add(H_scale);
    ps.add(D_scale);
    num1.setBorder(BorderFactory.createEtchedBorder());
    num2.setBorder(BorderFactory.createEtchedBorder());
    t1 = new JTextField(6);
    t2 = new JTextField(6);
    t3 = new JTextField(6);
    t3.setEditable(false);
    bt_plus = new JButton("加");
    bt_sub = new JButton("减");
    bt_mul = new JButton("乘");
    bt_div = new JButton("除");
    jp.setLayout(new GridLayout(5, 2));
    jp.add(num1);
    jp.add(t1);
    jp.add(num2);
    jp.add(t2);
    jp.add(bt_plus);
    jp.add(bt_sub);
    jp.add(bt_mul);
    jp.add(bt_div);
    jp.add(num3);
    jp.add(t3);
    Container contentPane = jf.getContentPane();
    contentPane.add(jp);
    jf.add(ps, BorderLayout.WEST);
    bt_plus.addActionListener(new mylistener_plus());
    bt_sub.addActionListener(new mylistener_sub());
    bt_mul.addActionListener(new mylistener_mul());
    bt_div.addActionListener(new mylistener_div());
    jf.setSize(250, 250);
    jf.setLocation(500, 200);
    jf.setVisible(true);
    jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }

  public static void main(String[] args) {
    new jisuanqi();
  }

  public class mylistener_plus implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      if (number1 == 0)
        number1 = Integer.parseInt(t1.getText(), jinzhi);
      if (number2 == 0)
        number2 = Integer.parseInt(t2.getText(), jinzhi);
      long number_check = (long) number1 + (long) number2;
      if (number_check > max)
        t3.setText("数据溢出");
      else {
        number3 = number1 + number2;
        if (jinzhi == 10)
          t3.setText("" + number3);
        else
          t3.setText(
              Integer.toString(number3, jinzhi));
      }
    }
  }

  public class mylistener_sub implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      if (number1 == 0)
        number1 = Integer.parseInt(t1.getText(), jinzhi);
      if (number2 == 0)
        number2 = Integer.parseInt(t2.getText(), jinzhi);
      long number_check = (long) number1 - (long) number2;
      if (number_check < min)
        t3.setText("数据溢出");
      else {
        number3 = number1 - number2;
        if (jinzhi == 10)
          t3.setText("" + number3);
        else
          t3.setText(
              Integer.toString(number3, jinzhi));
      }
    }
  }

  public class mylistener_mul implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      if (number1 == 0)
        number1 = Integer.parseInt(t1.getText(), jinzhi);
      if (number2 == 0)
        number2 = Integer.parseInt(t2.getText(), jinzhi);
      long number_check = (long) number1 * (long) number2;
      if (number_check > max)
        t3.setText("数据溢出");
      else {
        number3 = number1 * number2;
        if (jinzhi == 10)
          t3.setText("" + number3);
        else
          t3.setText(
              Integer.toString(number3, jinzhi));
      }
    }
  }

  public class mylistener_div implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      if (number1 == 0)
        number1 = Integer.parseInt(t1.getText(), jinzhi);
      if (number2 == 0)
        number2 = Integer.parseInt(t2.getText(), jinzhi);
      if (number2 != 0) {
        number3 = number1 / number2;
        if (jinzhi == 10)
          t3.setText("" + number3);
        else
          t3.setText(
              Integer.toString(number3, jinzhi));
      } else
        t3.setText("INF");
    }
  }

  public class mylistener_Bin implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      jinzhi = 2;
      String s1 = t1.getText();
      String s2 = t2.getText();
      String[] s1_split = s1.split("");
      String[] s2_split = s2.split("");
      if (number1 == 0 && number2 == 0) {
        for (String s : s1_split) {
          if (s.compareTo("2") >= 0)
            t1.setText("非法输入");
        }
        for (String s : s2_split) {
          if (s.compareTo("2") >= 0)
            t2.setText("非法输入");
        }
      }
      if (number1 == 0 &&
          number2 == 0 &&
          (Long.parseLong(t1.getText()) > max ||
              Long.parseLong(t1.getText()) < min)) {
        t1.setText("非法输入");
        t2.setText("非法输入");
      } else {
        if (number1 == 0)
          number1 = Integer.parseInt(t1.getText(), jinzhi);
        if (number2 == 0)
          number2 = Integer.parseInt(t2.getText(), jinzhi);
        t1.setText(Integer.toString(number1, jinzhi));
        t2.setText(Integer.toString(number2, jinzhi));
        t3.setText(Integer.toString(number3, jinzhi));
      }
    }
  }

  public class mylistener_Oct implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      jinzhi = 8;
      String s1 = t1.getText();
      String s2 = t2.getText();
      String[] s1_split = s1.split("");
      String[] s2_split = s2.split("");
      if (number1 == 0 && number2 == 0) {
        for (String s : s1_split) {
          if (s.compareTo("8") >= 0)
            t1.setText("非法输入");
        }
        for (String s : s2_split) {
          if (s.compareTo("8") >= 0)
            t2.setText("非法输入");
        }
      }
      if (number1 == 0 &&
          number2 == 0 &&
          (Long.parseLong(t1.getText()) > max ||
              Long.parseLong(t1.getText()) < min)) {
        t1.setText("非法输入");
        t2.setText("非法输入");
      } else {
        if (number1 == 0)
          number1 = Integer.parseInt(t1.getText(), jinzhi);
        if (number2 == 0)
          number2 = Integer.parseInt(t2.getText(), jinzhi);
        t1.setText(Integer.toString(number1, jinzhi));
        t2.setText(Integer.toString(number2, jinzhi));
        t3.setText(Integer.toString(number3, jinzhi));
      }
    }
  }

  public class mylistener_Hex implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      jinzhi = 16;
      String s1 = t1.getText();
      String s2 = t2.getText();
      String[] s1_split = s1.split("");
      String[] s2_split = s2.split("");
      if (number1 == 0 && number2 == 0) {
        for (String s : s1_split) {
          if (s.toLowerCase().compareTo("g") >= 0)
            t1.setText("非法输入");
        }
        for (String s : s2_split) {
          if (s.toLowerCase().compareTo("g") >= 0)
            t2.setText("非法输入");
        }
      }
      if (number1 == 0 &&
          number2 == 0 &&
          (Long.parseLong(t1.getText(), jinzhi) > max ||
              Long.parseLong(t1.getText(), jinzhi) < min)) {
        t1.setText("非法输入");
        t2.setText("非法输入");
      } else {
        if (number1 == 0)
          number1 = Integer.parseInt(t1.getText(), jinzhi);
        if (number2 == 0)
          number2 = Integer.parseInt(t2.getText(), jinzhi);
        t1.setText(Integer.toString(number1, jinzhi));
        t2.setText(Integer.toString(number2, jinzhi));
        t3.setText(Integer.toString(number3, jinzhi));
      }
      // number1=Integer.parseInt(t1.getText(),jinzhi);
      // number2=Integer.parseInt(t2.getText(),jinzhi);
    }
  }

  public class mylistener_Dec implements ActionListener {

    public void actionPerformed(ActionEvent e) {
      jinzhi = 10;
      if (number1 == 0 &&
          number2 == 0 &&
          (Long.parseLong(t1.getText()) > max ||
              Long.parseLong(t1.getText()) < min)) {
        t1.setText("非法输入");
        t2.setText("非法输入");
      } else {
        if (number1 == 0)
          number1 = Integer.parseInt(t1.getText());
        if (number2 == 0)
          number2 = Integer.parseInt(t2.getText());
        t1.setText("" + number1);
        t2.setText("" + number2);
        t3.setText("" + number3);
      }
    }
  }
}
