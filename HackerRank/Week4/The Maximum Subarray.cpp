 int max_ending=arr[0], max_sum=arr[0], max_element=arr[0], non_cont=0;
    for(int i=0;i<arr.size();i++) max_element=max(max_element,arr[i]);
    if(max_element<0) return {max_element,max_element};
    for(int x:arr){
        max_ending=max(x,max_ending+x);
        max_sum=max(max_sum,max_ending);
        if(x>0) non_cont+=x;
    }
    return {max_sum,non_cont};
