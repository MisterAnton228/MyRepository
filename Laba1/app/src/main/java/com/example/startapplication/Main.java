package com.example.startapplication;

import android.os.Bundle;
import android.app.Activity;
import android.view.View;
import android.widget.Button;

import androidx.appcompat.app.AppCompatActivity;

public class Main extends Activity
        implements View.OnClickListener{
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main_act);

        Button button1 = (Button)findViewById(R.id.b1);
        button1.setOnClickListener(this);

        Button button2 = (Button)findViewById(R.id.b2);
        button2.setOnClickListener(this);

        Button button3 = (Button)findViewById(R.id.b3);
        button3.setOnClickListener(this);

        Button button4 = (Button)findViewById(R.id.b4);
        button4.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {
        Button button = (Button) view;
        button.setText(R.string.afterClick);
    }
}

