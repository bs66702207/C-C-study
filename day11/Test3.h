class Test3                                                                       
{
    public:
    Test3(int a, int b);
    ~Test3();
    static int getCount();
  //  protected:
//private:
    int m_a; //属于具体的对象
    int m_b;
    //static修饰的变量或者函数，属于这个类，不属于具体的对象
    static int count;
};
