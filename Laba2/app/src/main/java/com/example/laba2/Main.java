package com.example.laba2;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class Main extends AppCompatActivity
{
    TextView textView1, textView2;

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.layout);
        textView1=(TextView) findViewById(R.id.tv1);
        textView2=(TextView) findViewById(R.id.tv2);
    }

    public void onAdd(View view)
    {
        String s = textView1.getText().toString();
        textView1.setText(s + '*');
    }

    public void onCopy(View view)
    {
        String s = textView1.getText().toString();
        textView2.setText(s);
    }
}