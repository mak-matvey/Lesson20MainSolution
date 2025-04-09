int ceiling(float number)
{
    int integer_part = number;
    return (number > integer_part) ? integer_part + 1 : integer_part;
}