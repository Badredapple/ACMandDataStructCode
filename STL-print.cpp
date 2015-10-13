//DataStructCode
//using const_vector print any set;
template <typename Container>
void printCollection( const Container & c, ostream & out )
{
	if(c.empty())
		out<<"(empty)";
	else
	{
		typename Container ::const_iterator itr =c.begin();
		out<<"["<<*itr++;
		while(itr !=c.end())
			out<<","<<*itr++;
		out<<"]"<<endl;
	}
}