int getImportance(vector<Employee*> employees, int id)
    {
        //bool flg=false;
        int i=-1;
        for(int j=0; j<employees.size(); j++)
        {
            if(employees[j]->id == id) 
            {
                //flg = true;
                i = j;
                break;
            }
        }
        if(i == -1) return 0;
        
        int sum = employees[i]->importance;
        
        if(employees[i]->subordinates.empty()) return sum;
        
        for(int &it: employees[i]->subordinates)
            sum += getImportance(employees, it);
            
        return sum;
    }