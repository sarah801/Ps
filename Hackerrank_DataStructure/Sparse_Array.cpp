vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int>results(queries.size()) ; 
    for(int i =0 ; i < stringList.size() ; i++)
    {
        for (int j=0;j<queries.size(); j++)
        {
            if (stringList[i].compare(queries[j])==0)
            {
                results[j]+=1; 
                
            }
        }
    }
return results ; 
}