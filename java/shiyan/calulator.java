import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class calulator extends JFrame {

    JPanel PanelNorth, PanelSouth, PanelWest, PanelCenter, PanelEast, panel1, panel2, panel3, panel4;
    JButton btnSum, btnMinus, btnMult, btnDivide;
    JRadioButton binary, octonary, hexadecimal, decimal;
    ButtonGroup systems;
    ButtonGroup style;
    JTextField t1, t2, t3;
    JLabel b1, b2, b3;
    String num1, num2;
    static int num3, num4;

    public calulator() throws Exception {
        super("简易计算器");
        systems = new ButtonGroup();
        style = new ButtonGroup();
        PanelNorth = new JPanel();
        PanelSouth = new JPanel();
        PanelWest = new JPanel();
        PanelCenter = new JPanel();
        PanelEast = new JPanel();
        panel1 = new JPanel();
        panel2 = new JPanel();
        panel3 = new JPanel();
        panel4 = new JPanel();
        binary = new JRadioButton("二进制");
        octonary = new JRadioButton("八进制");
        hexadecimal = new JRadioButton("十六进制");
        decimal = new JRadioButton("十进制", true);
        btnSum = new JButton("加");
        btnMinus = new JButton("减");
        btnMult = new JButton("乘");
        btnDivide = new JButton("除");
        systems.add(binary);
        systems.add(octonary);
        systems.add(hexadecimal);
        systems.add(decimal);
        style.add(btnSum);
        style.add(btnMinus);
        style.add(btnMult);
        style.add(btnDivide);
        PanelWest.setLayout(new GridLayout(4, 1));
        PanelEast.setLayout(new GridLayout(4, 1));
        panel4.add(btnSum);
        panel4.add(btnMinus);
        panel4.add(btnMult);
        panel4.add(btnDivide);
        PanelWest.add(binary);
        PanelWest.add(octonary);
        PanelWest.add(hexadecimal);
        PanelWest.add(decimal);
        PanelEast.add(panel1);
        PanelEast.add(panel2);
        PanelEast.add(panel4);
        PanelEast.add(panel3);
        t1 = new JTextField(10);
        t2 = new JTextField(10);
        t3 = new JTextField(10);
        t3.setEditable(false);
        b1 = new JLabel("加数1", JLabel.CENTER);
        b2 = new JLabel("加数2", JLabel.CENTER);
        b3 = new JLabel("数3", JLabel.CENTER);
        panel1.add(b1);
        panel1.add(t1);
        panel2.add(b2);
        panel2.add(t2);
        panel3.add(b3);
        panel3.add(t3);
        this.add(PanelCenter, BorderLayout.CENTER);
        this.add(PanelSouth, BorderLayout.SOUTH);
        this.add(PanelWest, BorderLayout.WEST);
        this.add(PanelNorth, BorderLayout.NORTH);
        this.add(PanelEast, BorderLayout.EAST);
        this.setSize(600, 400);
        this.setLocation(300, 200);
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        btnSum.addActionListener(new MYListener1());
        btnMinus.addActionListener(new MYListener2());
        btnMult.addActionListener(new MYListener3());
        btnDivide.addActionListener(new MYListener4());
        binary.addActionListener(new MYListener5());
        octonary.addActionListener(new MYListener5());
        hexadecimal.addActionListener(new MYListener5());
        decimal.addActionListener(new MYListener5());
        // String num1 = new String(t1.getText());
        // String num2 = new String(t2.getText());
    }

    public static void main(String[] args) throws Exception {
        new calulator();
    }

    public class MYListener1 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (binary.isSelected()) {
                t3.setText("" + Integer.toBinaryString(num3 + num4));
            }
            if (octonary.isSelected()) {
                t3.setText("" + Integer.toOctalString(num3 + num4));
            }
            if (hexadecimal.isSelected()) {
                t3.setText("" + Integer.toHexString(num3 + num4));
            }
            if (decimal.isSelected()) {
                t3.setText("" + (num3 + num4));
            }
        }
    }

    public class MYListener2 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (binary.isSelected()) {
                t3.setText("" + Integer.toBinaryString(num3 - num4));
            }
            if (octonary.isSelected()) {
                t3.setText("" + Integer.toOctalString(num3 - num4));
            }
            if (hexadecimal.isSelected()) {
                t3.setText("" + Integer.toHexString(num3 - num4));
            }
            if (decimal.isSelected()) {
                t3.setText("" + (num3 - num4));
            }
        }
    }

    public class MYListener3 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (binary.isSelected()) {
                t3.setText("" + Integer.toBinaryString(num3 / num4));
            }
            if (octonary.isSelected()) {
                t3.setText("" + Integer.toOctalString(num3 / num4));
            }
            if (hexadecimal.isSelected()) {
                t3.setText("" + Integer.toHexString(num3 / num4));
            }
            if (decimal.isSelected()) {
                t3.setText("" + (num3 / num4));
            }
        }
    }

    public class MYListener4 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (binary.isSelected()) {
                t3.setText("" + Integer.toBinaryString(num3 * num4));
            }
            if (octonary.isSelected()) {
                t3.setText("" + Integer.toOctalString(num3 * num4));
            }
            if (hexadecimal.isSelected()) {
                t3.setText("" + Integer.toHexString(num3 * num4));
            }
            if (decimal.isSelected()) {
                t3.setText("" + (num3 * num4));
            }
        }
    }

    public class MYListener5 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            num3 = Integer.parseInt(num1, 2);
            num4 = Integer.parseInt(num2, 2);

        }
    }

    public class MYListener6 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            num3 = Integer.parseInt(num1, 8);
            num4 = Integer.parseInt(num2, 8);
        }
    }

    public class MYListener7 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            num3 = Integer.parseInt(num1, 16);
            num4 = Integer.parseInt(num2, 16);
        }
    }

    public class MYListener8 implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            num3 = Integer.parseInt(num1, 10);
            num4 = Integer.parseInt(num2, 10);
        }
    }
}
