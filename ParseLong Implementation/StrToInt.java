import java.util.*;
import java.math.*;

public class StrToInt {
    
    
    static long parseLog(String str) {
        long ll = 0;
        int flag = 1;
        for (int i = 0; i < str.length(); i++) {
            int check = (int) str.charAt(i);
            String s = Character.toString(str.charAt(i));
            if (check == 43) {
                if (i == 0)
                    continue;
                else
                    throw new NumberFormatException();
            } else if (check == 45) {
                if (i == 0) {
                    flag = -1;
                    continue;
                } else {
                    throw new NumberFormatException();
                }
                    //return 0;
            }
            if (check >= 48 && check <= 58) {
                check -= 48;
                ll += check * Math.pow(10, str.length() - i - 1);  
            } else {
                throw new NumberFormatException();
            }
            
        }
        return ll * flag;
    }
    
    public static void main(String[] args) {
        long nn = parseLog("0");
        System.out.println(nn);
//        char a = '0';
//        a -= '0';
//        int b = (int) a;
//        System.out.println(b);
    }
}