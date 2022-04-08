//package uk.ac.lkl.common.util;
import java.lang.reflect.*;
import java.awt.Robot;
import java.awt.event.KeyEvent;

public class ComboKeys
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
    public static void main(String args[]) {
    String [] keys = {
            //"VK_CONTROL", "VK_SHIFT", "VK_ESCAPE"
            "VK_WINDOWS","VK_UP"
    };
    //"VK_F11"
    sendKeysCombo(keys);
    }
}
