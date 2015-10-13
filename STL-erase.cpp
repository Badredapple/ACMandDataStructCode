//DataStructCode
//list and vector when using erase 
template <typename Container>
void removeEveryOtherItem( Container & list)
{
	typename Container ::iterator itr =lst.begin();
	while( itr !=lst.end())
	{
		itr=lst.erase(itr);
		if(itr!= lst.end())
			++itr;
	}
}
//using vector and list do delete list elements 