void stringlist_swap(char *list[], int i, int j)
{
        char * tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;
}
