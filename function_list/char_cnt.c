//�p��r���ƥؤ��]�t�����r��'\0' 

int char_cnt(char *ptr)
{

	int i = 0, cnt = 0;

	while(*(ptr + i) != '\0')
	{
		cnt++;
		i++;
	}

	return cnt;
}

