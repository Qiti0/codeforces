import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class SimpleCalculator extends JFrame implements ActionListener {

    // Declare the components of the calculator
    private JTextField inputField; // The input field for entering numbers
    private JButton[] numberButtons; // The buttons for numbers 0-9
    private JButton[] operatorButtons; // The buttons for operators +, -, *, /, =, and C
    private JButton convertButton; // The button for converting between decimal and binary
    private JLabel resultLabel; // The label for displaying the result
    private boolean isBinary; // A flag to indicate whether the input is in binary or decimal

    // Define the constructor of the calculator
    public SimpleCalculator() {
        // Set the title, size, layout, and default close operation of the frame
        setTitle("Simple Calculator");
        setSize(400, 300);
        setLayout(new BorderLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Initialize the components
        inputField = new JTextField();
        numberButtons = new JButton[10];
        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
        }
        operatorButtons = new JButton[6];
        operatorButtons[0] = new JButton("+");
        operatorButtons[1] = new JButton("-");
        operatorButtons[2] = new JButton("*");
        operatorButtons[3] = new JButton("/");
        operatorButtons[4] = new JButton("=");
        operatorButtons[5] = new JButton("C");
        convertButton = new JButton("Convert");
        resultLabel = new JLabel("Result: ");
        isBinary = false;

        // Add the components to the frame
        add(inputField, BorderLayout.NORTH);
        JPanel buttonPanel = new JPanel(new GridLayout(4, 4));
        for (int i = 7; i <= 9; i++) {
            buttonPanel.add(numberButtons[i]);
        }
        buttonPanel.add(operatorButtons[0]);
        for (int i = 4; i <= 6; i++) {
            buttonPanel.add(numberButtons[i]);
        }
        buttonPanel.add(operatorButtons[1]);
        for (int i = 1; i <= 3; i++) {
            buttonPanel.add(numberButtons[i]);
        }
        buttonPanel.add(operatorButtons[2]);
        buttonPanel.add(numberButtons[0]);
        buttonPanel.add(convertButton);
        buttonPanel.add(operatorButtons[3]);
        buttonPanel.add(operatorButtons[4]);
        buttonPanel.add(operatorButtons[5]);
        add(buttonPanel, BorderLayout.CENTER);
        add(resultLabel, BorderLayout.SOUTH);

        // Add action listeners to the buttons
        for (int i = 0; i < 10; i++) {
            numberButtons[i].addActionListener(this);
        }
        for (int i = 0; i < 6; i++) {
            operatorButtons[i].addActionListener(this);
        }
        convertButton.addActionListener(this);

        // Make the frame visible
        setVisible(true);
    }

    // Define the action performed method
    public void actionPerformed(ActionEvent e) {
        // Get the source of the event
        Object source = e.getSource();

        // If the source is a number button, append the number to the input field
        for (int i = 0; i < 10; i++) {
            if (source == numberButtons[i]) {
                inputField.setText(inputField.getText() + i);
            }
        }

        // If the source is an operator button, perform the corresponding operation
        if (source == operatorButtons[0]) { // Addition
            inputField.setText(inputField.getText() + "+");
        } else if (source == operatorButtons[1]) { // Subtraction
            inputField.setText(inputField.getText() + "-");
        } else if (source == operatorButtons[2]) { // Multiplication
            inputField.setText(inputField.getText() + "*");
        } else if (source == operatorButtons[3]) { // Division
            inputField.setText(inputField.getText() + "/");
        } else if (source == operatorButtons[4]) { // Equal
            try {
                // Evaluate the expression in the input field
                String expression = inputField.getText();
                int result = evaluate(expression);
                // Display the result
                resultLabel.setText("Result: " + result);
                // Clear the input field
                inputField.setText("");
            } catch (Exception ex) {
                // Display an error message if the expression is invalid
                resultLabel.setText("Error: Invalid expression");
                // Clear the input field
                inputField.setText("");
            }
        } else if (source == operatorButtons[5]) { // Clear
            // Clear the input field and the result label
            inputField.setText("");
            resultLabel.setText("Result: ");
        }

        // If the source is the convert button, convert the input between decimal and
        // binary
        if (source == convertButton) {
            try {
                // Get the input from the input field
                String input = inputField.getText();
                // Check if the input is empty
                if (input.isEmpty()) {
                    throw new Exception("Empty input");
                }
                // Check if the input is valid
                if (isBinary) {
                    // If the input is in binary, check if it contains only 0 and 1
                    for (int i = 0; i < input.length(); i++) {
                        char c = input.charAt(i);
                        if (c != '0' && c != '1') {
                            throw new Exception("Invalid binary input");
                        }
                    }
                } else {
                    // If the input is in decimal, check if it is a positive integer
                    int decimal = Integer.parseInt(input);
                    if (decimal < 0) {
                        throw new Exception("Invalid decimal input");
                    }
                }
                // Convert the input and display the result
                if (isBinary) {
                    // If the input is in binary, convert it to decimal
                    // int decimal = binaryToDecimal(input);
                    // resultLabel.setText("Result: " + decimal);
                } else {
                    // If the input is in decimal, convert it to binary
                    // String binary = decimalToBinary(Integer.parseInt(input));
                    // resultLabel.setText("Result: " + binary);
                }
                // Toggle the flag
                isBinary = !isBinary;
                // Clear the input field
                inputField.setText("");
            } catch (Exception ex) {
                // Display an error message if the input is invalid
                resultLabel.setText("Error: " + ex.getMessage());
                // Clear the input field
                inputField.setText("");
            }
        }
    }

    // A method to evaluate a simple arithmetic expression
    public static int evaluate(String expression) throws Exception {
        // Initialize the result and the current operator
        int result = 0;
        char operator = '+';

        // Loop through the expression
        for (int i = 0; i < expression.length(); i++) {
            char c = expression.charAt(i);

            // If the character is a digit, append it to a number string
            if (Character.isDigit(c)) {
                String number = "";
                while (i < expression.length() && Character.isDigit(expression.charAt(i))) {
                    number += expression.charAt(i);
                    i++;
                }
                i--;

                // Perform the operation according to the current operator
                switch (operator) {
                    case '+':
                        result += Integer.parseInt(number);
                        break;
                    case '-':
                        result -= Integer.parseInt(number);
                        break;
                    case '*':
                        result *= Integer.parseInt(number);
                        break;
                    case '/':
                        result /= Integer.parseInt(number);
                        break;
                    default:
                        throw new Exception("Invalid operator");
                }
            }

            // If the character is an operator, update the current operator
            else if (c == '+' || c == '-' || c == '*' || c == '/') {
                operator = c;
            }

            // If the character is anything else, throw an exception
            else {
                throw new Exception("Invalid character");
            }
        }

        // Return the result
        return result;
    }

    // The main method to create an instance of the calculator
    public static void main(String[] args) {
        new SimpleCalculator();
    }
}
