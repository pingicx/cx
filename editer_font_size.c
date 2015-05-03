//Sets font size of source editer.
//Size range : 10 - 50

#define FONT_SIZE 20

int main()
{
#if defined(IOS) || defined(OSX)
	ccrSetEditerFontSize(FONT_SIZE);
#endif

	return 0;
}