package behavioralpatterns.state;

import javafx.application.Application;

/*
Safe security system that the security status changes with time. When you press a button in a dialog,
the message displayed will change depending on whether the time is day or night.
The internal time of the dialog advances one hour for every second of real time.
 */

public class Main {
    public static void main(String[] args) {
        Application.launch(AppSafe.class, args);
    }
}
