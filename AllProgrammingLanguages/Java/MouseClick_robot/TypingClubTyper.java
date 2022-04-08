import java.awt.AWTException;
import java.awt.Robot;
import java.awt.event.KeyEvent;

public class TypingClubTyper {
    public static void main(String[] args) {
        //Simulates keyboard presses to write this text.
        //https://www.typingclub.com/sportal/program-3/3183.play
        //typeText("Lions live for 10 to 14 years when they are in the wild. When they are captive, they can live longer than 20 years. In the wild, males do not usually live longer than 10 years. This is due to wounds from fighting with other males. They usually live in savannahs or grasslands, though they sometimes live in bushes and forests.");
        typeText("Lions live for 10 to 14 years when they are in the wild. When they are captive, they can live longer than 20 years. In the wild, males do not usually live longer than 10 years. This is due to wounds from fighting with other males. They usually live in savannahs or grasslands, though they sometimes live in bushes and forests.");
    }
    //Uses the java robot class to type the text by simulating keyboard inputs.
    //It writes it instantly but if u want you can add delays and other cool stuff to make it look more human.
    public static void typeText(String text) {
        try {
            Robot robot = new Robot();

            char[] chars = text.toCharArray();
            //If the chars aren't uppercased then it will not press the right key. in keyPress and keyRelease
            char[] charsCaps = text.toUpperCase().toCharArray();


            robot.delay (1000); //for opening required application
            for (int i = 0; i < charsCaps.length; i++) {
                //If the char is uppercased then it will hold shift so it can write the uppercase char.
                if (chars[i] == charsCaps[i])
                {
                  if(chars[i]>='0' && chars[i]<='9' || chars[i]=='.' || chars[i]==',')
                  {}
                  else
                    robot.keyPress(KeyEvent.VK_SHIFT);
                }

                //Starts holding down the key.
                robot.delay (50);  //to control wpm  :words per minute
                robot.keyPress(charsCaps[i]);

                //Releases the key.
                robot.keyRelease(charsCaps[i]);

                //Releases the shift key if it was writing an uppercased letter
                if (chars[i] == charsCaps[i]) {
                  if(chars[i]>='0' && chars[i]<='9' || chars[i]=='.' || chars[i]==',')
                  {}
                  else
                    robot.keyRelease(KeyEvent.VK_SHIFT);
                }
            }
        } catch (AWTException e) {
            e.printStackTrace();
        }
    }
}
