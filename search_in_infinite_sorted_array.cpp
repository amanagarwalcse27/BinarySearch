//infinite sorted array given hoga
//1 2 3 4 5 6 7 8 9 10 infinite tk

int  search(int a[],int k)
{
    int start = 0;
    int end = 1;

    vector<int> index(2);

    while( a[end] < key)
    {
        start = end;
        end = 2*end;
    }

    while(start <= end)
    {
        int mid = start + (end - start)/2;
            
        if(a[mid] == k)
        {
            return mid;
        }   

        else if(a[mid] < k)
        {
            start = mid + 1;
        } 

        else 
        {
            end = mid -1;
        }
            
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5,
