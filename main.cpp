#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream reader;
  fstream writer;
  int a = 0;
  int b = 0;
  int c = 0;
  double d = 0;

  reader.open("numbers.txt", ios::in);
  writer.open("summary.txt", ios::out);

  if( !reader.is_open() || !writer.is_open() )
  {
    cout<<"ERROR! FILE INPUT/OUTPUT ERROR!\n";
  }
  else
  {
    while( !reader.eof() )
    {
      int current;
      reader>>current;
      
      a++;
      b += current;
      
      if( current > c )
      {
        c = current;
      }
    }
    d = (double) b / a;
    reader.close();

    writer<<"A: "<<a<<endl;
    writer<<"B: "<<b<<endl;
    writer<<"C: "<<c<<endl;
    writer<<"D: "<<d<<endl;
    writer.close();
  }

  return 0;
}
