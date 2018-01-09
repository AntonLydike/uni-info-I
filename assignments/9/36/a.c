char * crypt(char *in, char c, char *out)
{
	while (*in != '\0')
		*out++ = *in++ + c;

	*out = '\0';

	return out;
}
