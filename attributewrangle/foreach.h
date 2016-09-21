int list[];
int item;
int count = 0;
foreach(int val; list)
{
    if (item == val) return count;
    count++;
}
