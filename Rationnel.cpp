class Rationnel
{

	public:
		Rationnel(int n = 0, int d = 1): deno(d), nume(n) {}
	private:
		int deno;
		int nume;

};

int main()
{
	Rationnel r1(1, 2);
	Rationnel r2(1, 3);
	return 0;
}
