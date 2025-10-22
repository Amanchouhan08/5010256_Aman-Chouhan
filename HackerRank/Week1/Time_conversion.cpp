string timeConversion(string s) {
 int hour=stoi(s.substr(0, 2));
    string minute=s.substr(3,2);
    string sec=s.substr(6,2);
    string meri=s.substr(8,2);
    
    if(meri=="AM"){
        if(hour==12)
            hour=0;
    }else{
        if(hour!=12)
        hour+=12;
    }
    
    string houStr=(hour<10)?"0"+to_string(hour):to_string(hour);
    return houStr+":"+minute+":"+sec;
}
