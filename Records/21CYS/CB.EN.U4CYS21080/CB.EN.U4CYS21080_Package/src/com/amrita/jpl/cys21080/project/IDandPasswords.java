package com.amrita.jpl.cys21080.project;

import java.util.HashMap;
import java.util.Map;

public class IDandPasswords {

    HashMap<String,String> logininfostd = new HashMap<String,String>();


    IDandPasswords(){

        for(int i=1;i<=90;i++){
            logininfostd.put("cb.en.u4cys210"+i,"cys"+i);
        }

        logininfostd.put("Ramaguru","ram123");
        logininfostd.put("Amritha","12345");


    }



    public HashMap getLoginInfo(){
        return logininfostd;
    }
}