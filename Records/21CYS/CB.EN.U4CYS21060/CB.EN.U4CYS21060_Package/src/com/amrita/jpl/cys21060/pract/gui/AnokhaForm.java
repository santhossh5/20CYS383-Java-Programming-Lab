package com.amrita.jpl.cys21060.pract.gui;

import javax.swing.*;
import java.awt.*;

public class AnokhaForm extends JFrame {
    public AnokhaForm(){
        setTitle("Anokha Registration Form");
        setSize(400, 320);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(5, 2));
        JLabel label1 = new JLabel("Name", JLabel.CENTER);
        JLabel label2 = new JLabel("Phone number", JLabel.CENTER);
        JLabel label3 = new JLabel("Email", JLabel.CENTER);
        JLabel label4 = new JLabel("Gender", JLabel.CENTER);
        JLabel label5 = new JLabel("Age", JLabel.CENTER);
        JButton button4 = new JButton("Submit");


        JTextArea tarea1 = new JTextArea("Ram Surya");
        JTextArea tarea2 = new JTextArea("8778604693");
        JTextArea tarea3 = new JTextArea("ram@gmail.com");
        JTextArea tarea4 = new JTextArea("Male");
        JTextArea tarea5 = new JTextArea("19");

        add(label1);
        add(tarea1);
        add(label2);
        add(tarea2);
        add(label3);
        add(tarea3);
        add(label4);
        add(tarea4);
        add(label5);
        add(tarea5);
        add(button4);
        setVisible(true);
    }

    public static void main(String[] args) {
        new AnokhaForm();
    }
}
