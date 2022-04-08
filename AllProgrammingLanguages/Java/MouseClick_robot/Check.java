//package uk.ac.lkl.common.util;
import java.lang.reflect.*;
import java.awt.Robot;
import java.awt.event.KeyEvent;

public class Check
{

    public static void sendKeysCombo(String keys[])
    {
    try {
        Robot robot = new Robot();
        Class<?> cl = KeyEvent.class;
        int [] intKeys = new int [keys.length];
        for (int i = 0; i < keys.length; i++) {
            Field field = cl.getDeclaredField(keys[i]);
            intKeys[i] = field.getInt(field);
            robot.keyPress(intKeys[i]);
        }
        for (int i = keys.length - 1; i >= 0; i--)
            robot.keyRelease(intKeys[i]);
    }
    catch (Throwable e) {
        System.err.println(e);
    }
    }
    // main for testing purposes
    public static void main(String args[]) throws Throwable
    {
    String [] keys = {
            //"VK_CONTROL", "VK_SHIFT", "VK_ESCAPE"
          //  "VK_WINDOWS","VK_A"
    };
    //"VK_F11"
    sendKeysCombo(keys);

    Robot robot = new Robot();

    robot.keyPress(KeyEvent.VK_WINDOWS);
    robot.keyPress(KeyEvent.VK_D);
    robot.keyRelease(KeyEvent.VK_WINDOWS);
    robot.keyRelease(KeyEvent.VK_D);

    robot.delay(1000);

    robot.keyPress(KeyEvent.VK_ALT);
    robot.keyPress(KeyEvent.VK_F4);
    robot.keyRelease(KeyEvent.VK_F4);
    robot.keyRelease(KeyEvent.VK_ALT);

    robot.delay(1000);

    robot.keyPress(KeyEvent.VK_ENTER);
    robot.keyRelease(KeyEvent.VK_ENTER);


    // Runtime.getRuntime().exec("rundll32 user32.dll,LockWorkStation");
    }
}
