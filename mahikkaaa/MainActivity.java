package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    EditText e1, e2;
    TextView t1;
    Button b1, b2, b3, b4, b5, b6;

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);
        e1 = (EditText)findViewById(R.id.editText1);
        e2 = (EditText)findViewById(R.id.editText2);
        t1 = (TextView)findViewById(R.id.textView);
        b1 = (Button)findViewById(R.id.button);
        b2 = (Button)findViewById(R.id.button1);
        b3 = (Button)findViewById(R.id.button2);
        b4 = (Button)findViewById(R.id.button3);
        b5 = (Button)findViewById(R.id.button4);
        b6 = (Button)findViewById(R.id.button5);

        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                e1.setText("");
                e2.setText("");
                t1.setText("");
            }
        });

        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int num;
                num = Integer.parseInt(e1.getText().toString()) + Integer.parseInt(e2.getText().toString());
                t1.setText(Double.toString(num));
            }

        });
        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int num;
                num = Integer.parseInt(e1.getText().toString()) - Integer.parseInt(e2.getText().toString());
                t1.setText(Double.toString(num));
            }
        });
        b4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int num;
                num = Integer.parseInt(e1.getText().toString()) * Integer.parseInt(e2.getText().toString());
                t1.setText(Double.toString(num));
            }
        });
        b5.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int num;
                num = Integer.parseInt(e1.getText().toString()) % Integer.parseInt(e2.getText().toString());
                t1.setText(Double.toString(num));
            }
        });
        b6.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int num;
                num = Integer.parseInt(e1.getText().toString()) / Integer.parseInt(e2.getText().toString());
                t1.setText(Double.toString(num));
            }
        });

    }
}