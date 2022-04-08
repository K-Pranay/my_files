import java.awt.*;
import java.awt.event.*;
class FrameJavaEgs
{
    public static void main (String args[])
    {
             Frame frame = new Frame("Frame Java Example");
             //set the size of the frame
             frame.setSize(300,250);
             frame.setLocation(200,300);
             frame.addWindowListener(new WindowAdapter()
                          {
                             public void windowClosing(WindowEvent e)
                              {
                                System.exit(0);
                               }
                           });
                            frame.setVisible(true);
     }
}

/*
new WindowAdapter()
                          {
                             public void windowClosing(WindowEvent e)
                              {
                                System.exit(0);
                               }
                           }
*/