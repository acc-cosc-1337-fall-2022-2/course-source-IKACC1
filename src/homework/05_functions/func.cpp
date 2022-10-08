//add include statements
#include <iostream>
#include <string>
//add function code here
std::string reverse_string(std::string dna)
{
    int x=0;
    int while_loop_limit = (dna.length())-1;
    std::string reversed_string_1(dna.length(),'x');
    while (while_loop_limit >= 0)
    {
        reversed_string_1[x]=dna[while_loop_limit];
        while_loop_limit--;
        x++;
    } 
    return reversed_string_1;
}

double get_gc_content(const std::string& dna)
{
   double total_length = dna.length();
   double gc_number = 0;// this will count the number symbols that are g or c
   double gc_content = 0.0; // this will return percentage gc content.
   for (int x=0; x <= total_length; x++)
   {
        if (dna[x]=='G' || dna[x]=='C')
            gc_number++;
        
   }
   if (gc_number == 0)//this sequence avoids zero division error if GC content is 0
        gc_content=0;
    else
        gc_content= gc_number/total_length;
   return  gc_content;
}


std::string get_dna_complement(std::string dna)
{
  dna = reverse_string(dna);
  int loop_limiter= dna.length()-1;
  while (loop_limiter>= 0)
  {
    if (dna[loop_limiter]=='A')
    {
       dna[loop_limiter]= 'T';
       loop_limiter --; 
    }
    else if (dna[loop_limiter]=='T')
    {
        dna[loop_limiter]='A';
        loop_limiter--;
    }
    else if (dna[loop_limiter]=='C')
    {
        dna[loop_limiter]='G';
        loop_limiter--;
    }
    else if (dna[loop_limiter]=='G')
    {
        dna[loop_limiter]='C';
        loop_limiter--;
    }
    else 
        
        {loop_limiter--;}
  }   
  return dna;
}

