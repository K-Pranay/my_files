//mytry
import java.awt.Robot;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;

public class Mytry
{
  public static void main(String[] argv) throws Exception {
    Robot robot = new Robot();


        // robot.delay (3000);//this time to manual opening prtscreen
        //now updated
        robot.keyPress(KeyEvent.VK_PRINTSCREEN);
        robot.keyRelease(KeyEvent.VK_PRINTSCREEN);
        robot.delay (1000);//has to be given to wait for prtscreen to open
        robot.mouseMove(500,500);
        robot.mousePress(InputEvent.BUTTON1_MASK);
        // robot.mouseRelease(InputEvent.BUTTON1_MASK);
        // robot.mousePress(InputEvent.BUTTON1_MASK);
        robot.delay (500); //for seeing it
        robot.mouseMove(1920,1080);
        robot.delay (500);//for visual appeal
        robot.mouseRelease(InputEvent.BUTTON1_MASK);

        // Understood and working now
  }
}
