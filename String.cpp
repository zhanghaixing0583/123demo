String operator+(const Sting&a,const String&b)
{
    int len = a.len+b.len;
    char* temp = new char[len+1];
    strcpy(temp,a.rep);
    strcat(temp,b.rep);
    String str(temp);
    delete temp;
    return str;
}

const String&String::operator+=(const String&a)
{
    this->rep += a.len;
    char* temp = this->rep;
    this->rep = new char[len+1];
    strcpy(this->rep,temp);
    strcat(this->rep,a.rep);
    delete temp;
    return *this;
}
//修改了一行代码
//从分支3 进行修改
