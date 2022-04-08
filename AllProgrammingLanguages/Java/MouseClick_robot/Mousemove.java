import java.awt.Robot;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;

public class Mousemove {
  public static void main(String[] argv) throws Exception {
    Robot robot = new Robot();
    robot.mouseMove(1920,1080); //500,500


    //below extra

        robot.mousePress(InputEvent.BUTTON1_MASK);
        robot.mouseRelease(InputEvent.BUTTON1_MASK);
  }
}
