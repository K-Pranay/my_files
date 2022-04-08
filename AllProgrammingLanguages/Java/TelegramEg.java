
import java.net.*;
import java.io.*;

class TelegramEg{  
    public static void main(String args[]){  
     System.out.println("Hello Java");  

     String urlString = "https://api.telegram.org/bot%s/sendMessage?chat_id=%s&text=%s";

String apiToken = "944129980:AAFl9Voups3Zz7vNZovuBHjzqchVSBY4APc";//my_bot_api_token
String chatId = "@testing";//@my_channel_name
String text = "Hello world!";

urlString = String.format(urlString, apiToken, chatId, text);

URL url = new URL(urlString);

URLConnection conn = url.openConnection();

StringBuilder sb = new StringBuilder();
try{
InputStream is = new BufferedInputStream(conn.getInputStream());
BufferedReader br = new BufferedReader(new InputStreamReader(is));
String inputLine = "";
while ((inputLine = br.readLine()) != null) {
    sb.append(inputLine);
}
}catch(IOException e)
{e.printStackTrace();}
String response = sb.toString();
// Do what you want with response





    }  
}  