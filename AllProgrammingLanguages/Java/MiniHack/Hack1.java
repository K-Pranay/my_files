import java.io.File;
import java.io.IOException;

public class Hack1 {


    public static void main(String[] argv) throws IOException
    {

        File folder = new File("C:\\Users\\Pranay\\Downloads\\temp_thaata\\Received"); //C:\Users\Pranay\Downloads\temp_thaata
        File[] listOfFiles = folder.listFiles();

        for (int i = 0; i < listOfFiles.length; i++) {

            if (listOfFiles[i].isFile())
            {

                String str_old = listOfFiles[i].getName();

                if(str_old.matches(".*iSongs.*"))
                {
                  String str_new = str_old.replace("iSongs.info  ","");
                  listOfFiles[i].renameTo(new File("C:\\Users\\Pranay\\Downloads\\temp_thaata\\Received\\"+str_new+".mp3"));
                  System.out.println(i+"done");
                }
            }
        }

        System.out.println("conversion is done");
    }
}
