Import java.awt.*;
Import java.awt.event.*;
Public class TestFramel extends WindowAdapter{
   Frame f;
   public TestFrame1()
   {
   
Frame f = new TestFrame("test frame");
f.setSize(400,400);
f.setLocation(200,300);
f.show();
f.addWindowListener (this);
}
Public void windowClosing(windowEvent e){

f.dispose();

}


public static void main (String args[])
{
New TestFrame1();
}






}
