import java.awt.*;
public class TextFrame extends Frame
{
TextFrame(String title){
super(title);
}
public static void main (String args[])
{
Frame f = new TextFrame("test frame");
f.setSize(400,400);
f.setLocation(200,300);
f.show();
}


}
