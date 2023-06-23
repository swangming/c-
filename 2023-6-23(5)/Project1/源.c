int main()
{
	int a =20;
	int sum = a;
	int kong = a;
	int duo = 0;
	while (kong>1)
	{
		duo = kong % 2;
		sum += kong / 2;
		kong = kong / 2+duo;
	}
	printf("%d", sum);
return 0;
}
