
#ifndef PROCESS_H
#include<iostream>
struct WORDS
{
	char w[30];
	short w_len;
}word[100];
const unsigned process(char *mainstr, struct WORDS *p)
{
	char *beg=nullptr;
	bool flag = false;
	unsigned size(0);
	static unsigned WordOrder(0);
	while (*mainstr != '\0')
	{
		if (isalpha(*mainstr) && flag)
		{
			++size;
		}
		if (isalpha(*mainstr) && !flag)
		{
			beg = mainstr;
			flag = true;
			++size;
		}

		if (!isalpha(*mainstr) && flag)
		{
			for (unsigned i = 0; i != size; ++i)
			{
				word[WordOrder].w[i] = *(beg++);
			}
			word[WordOrder].w_len = size;
			
			++WordOrder;
			flag = false;
			size=0;
		}
		++mainstr;
	}
	//for(const auto beg=begin(mainstr)

	return WordOrder;
}

#endif // !PROCESS_H
