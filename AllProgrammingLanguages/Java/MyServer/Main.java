import java.io.*;
import java.io.File.*;
import java.awt.datatransfer.*;
import java.awt.*;
import java.awt.image.BufferedImage;
//import java.javax.imageio.ImageIO;
import javax.imageio.ImageIO;

import java.nio.file.Files;
import java.nio.file.Paths;
import java.awt.Robot;

import java.lang.reflect.*;
import java.awt.Robot;
import java.awt.event.KeyEvent;

public class Main
{
    public static void main(String[] args) throws Throwable
    {
        Robot robot = new Robot();
        System.out.print("Starting Server Wait.");
        int flag = 1;
        while(true)
        {
          String[] arrOfStr;
          while(true)
          {
              try
              {
                  String content = new String(Files.readAllBytes(Paths.get("C:\\Users\\Pranay\\OneDrive\\Attachments\\index_to_run_local_apps.txt")));
                  arrOfStr = content.split(",");


                  System.out.print(".");
                  robot.delay(1000);
                  if(arrOfStr[0].equals("on"))
                  {
                      break;
                  }
              }
              catch(Exception e)
              {
                  System.out.println("File deleted on server, upload in 10 seconds");
                  robot.delay(10000);
                  flag = 1;
              }
          }
            if(arrOfStr[1].equals("quit"))
            {
              System.out.println("Thanks for using our application");
                break;
            }
            // if(flag == 1)
            {
                String[] temp = new String[arrOfStr.length -1];
                for(int i=0;i<arrOfStr.length -1;i++)
                {
                    temp[i] = arrOfStr[i+1];
                }

                ComboKeys.sendKeysCombo(temp);
                flag = 0;
            }
        }
    }
}
