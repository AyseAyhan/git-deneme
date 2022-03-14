//random dizi üretme, toplam ve ortalama alma, MÝN MAX BULMA, dizide deðer arama, ortalamadan küçük deðer sayýsýný bulma, A ve B dizisinden C oluþturma
#include<iostream>
using namespace std;
#define max 1000
#define maxsize max*2
int main()
{
	srand(time(NULL));

	int a[max], b[max], c[maxsize], i, size, sum = 0, sum1 = 0,counter=0,counter1=0,minA,maxA,minB,maxB,upper,lower;
	float mean,mean1;
	int key;
	
	do
	{
		cout << "Please, enter number of elements: ";
		cin >> size;
		if (size > 1000 || size < 0)
		{
			cout << "\nError!: Size must be bigger than 0 and smaller than 1000." << endl;

		}
		else
		{

			break;
		}

	} while (size > 1000||size<0);

	cout << "\nEnter upper limit: ";
	cin >> upper;
	cout << "\nEnter lower limit: ";
	cin >> lower;

	for (i = 0; i < size; i++)
	{
		a[i] = rand() % (upper-lower+1) -lower;
		b[i] = rand() % (upper - lower + 1) - lower;
		//farklý for döngüleri içinde düzenli biçimde yazdýrýlabilir.
		cout << "\n a[" << i << "]=" << a[i] << endl;
		sum = sum + a[i];
		
		b[i] = rand() % 10 + 1;
		cout << "\n b[" << i << "]=" << b[i] << endl;
		sum1 = sum1 + b[i];
		
	}
	mean = (float)sum / i;
	mean1 = (float)sum1 / i;
	for (i = 0; i < size; i++)
	{
		if (a[i] < mean)
		{
			counter++;
		}
	}

	for (i = 0; i < size; i++)
	{
		if (b[i] > mean1)
		{
			counter1++;
		}
	}
	cout << "\nThe sum of the elements of a is: " << sum << endl;
	cout << "\nThe mean of the elements of a is: " << mean << endl;
	cout << "\nNumber of the elements whiches are smaller than average A: " << counter << endl;
	cout << "\nThe mean of the elements of b is: " << mean1 << endl;
	cout << "\nThe sum of the elements of b is: " << sum1 << endl;
	cout << "\nNumber of the elements whiches are bigger than average B: " << counter1 << endl;

	minA = a[0];
	maxA = a[0];
	minB = b[0];
	maxB = b[0];
	for (i = 0; i < size; i++)
	{
		if (a[i] <minA)
		{
			minA = a[i];
		}
		if (b[i] < minB)
		{
			minB = b[i];
		}
		if (a[i] > maxA)
		{
			maxA = a[i];
		}
		if (b[i] > maxB)
		{
			maxB = b[i];
		}

	}
	cout << "\nMaximum element of the array A: " << maxA << " . Minimum element of the Array A: " << minA << ".\n";
	cout << "\nMaximum element of the array B: " << maxB << " . Minimum element of the Array B: " << minB << ".\n";

	while (1)  //dizilerde deðer arama
	{
		int flagA = -1, flagB = -1;//flag deðerleri key ile aranan deðer bulunduðunda deðiþir
		cout << "\nEnter key: ";
		cin >> key;
		cout << "\n\n";
		if (key == -1)
		{
			break;
		}
		
		for (i = 0; i < size; i++)
		{
			if (key == a[i])
			{
				flagA=i;
				cout << key << " value is in array A," << i << ". index: " << a[i] << endl;
			}
			if (key == a[i])
			{
				flagB = i;
			}
			
		}
		if(flagA==-1)
		{ 
			cout << "Key has not founded in A." << endl;
		}
		else
		{
			cout << "Key is " << flagA << ".index in A." << endl;
		}

		if (flagB == -1)
		{
			cout << "Key has not founded in B." << endl;
		}
		else
		{
			cout << "Key is " << flagB << ".index in B." << endl;
		}

		//1.eleman a'dan 2., b'den
		for (i = 0; i < size * 2; i++)
		{
			if (i % 2 == 0)
				c[i] = a[i / 2]; //çift indexler adan tekler bden
			else
				c[i] = b[(i - 1) / 2];

		}

}

	}
