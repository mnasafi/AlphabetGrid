#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int letters;

  vector <vector <char> > alphabet;


  do
  {
    cout<<"How many letters should there be per line? ";
    cin>>letters;
    
    if( letters < 1 || letters > 26 )
    {
      cout<<"\nPlease enter a number between 1-26.\n";
    }
  }while( letters < 1 || letters > 26 );


  int columns;
  
  if( 26 % letters == 0 )
      {
          columns = 26 / letters;

      } // end for

  else 
  {
      columns = 26/lettets + 1;


  } 

  // resize grid to have _letter_ # of _rows_, and _columns_ # of columns
  alphabet.resize( letters );

  for( int row=0; row < alphabet.size(); row++)
  {
      grid[row].resize(columns);

  } // end for


  // traverse the matrix and assign it incrementing letters from A to Z

  return 0;
}
