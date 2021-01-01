// Dogukan kaan Bozkurt

#include <iostream>
#include <iomanip>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

// define short name for set type used in this program
typedef multiset< int,less<int> > IntSet;			//less olmasli key & values mantigi. (multiset,set yada multi map ise less koy.)	//Set tanimlamasi.
int gT(void);
int randomNumber(void);
bool getIndex(int);
void findIndices(IntSet &, vector <int>&, const string &);			//indicater sayilari bulma func.
void printVector(vector<int> &, const string &) ;

int label;
main()
{
	// Definitions
	vector <int> results(100,0),groundTruth(100,0);		//100 elemanli 0 ile dolu vektorler.
	IntSet resultIndex,gTIndex;							//multiset< int,less<int> > resultIndex,gTIndex gibi de olurudu. 2 tane set tanimladik.
	vector <int> TP,FP,FN;	
	double precision,recall,F1;
	
	// Generate the ground truth and results
	generate(groundTruth.begin(),groundTruth.end(), gT);		//burada gT ile 40,50,10 sýnýrlarýný belirleniyor.Ayrýca 1,2,3 atamalari yapilir.
	generate(results.begin(),results.end(), randomNumber);		//burada 0-100 arasi random sayilar atilir.
	
	// Print the ground truth and results
	printVector(groundTruth,"groundTruth");
	printVector(results,"results");
	
	// For each class
	for (int i=1;i<=3;i++){
		
		label=i;
		
		// Find corresponding indices
		findIndices(gTIndex,groundTruth,"gTIndex");		//her 1 / 2 / 3 sayisinin oldugu indisleri bulunur.
		findIndices(resultIndex,results,"resultIndex");	//her 1 / 2 / 3 sayisinin oldugu indisleri bulunur.
		
		// Determine  TP,FP, and FN
		set_intersection(gTIndex.begin(),gTIndex.end(),resultIndex.begin(),resultIndex.end(),back_inserter(TP));	//ayni degerli, indexleri alip TP ye atar.//intersection ayni olanlar
		set_difference(resultIndex.begin(),resultIndex.end(),gTIndex.begin(),gTIndex.end(),back_inserter(FP));		//resultta olup gt olmayan index deðerleri
		set_difference(gTIndex.begin(),gTIndex.end(),resultIndex.begin(),resultIndex.end(),back_inserter(FN));		//gtde olup reesultta olmayanlar index deðerleri
	
		printVector(TP,"TP");
		printVector(FP,"FP");
		printVector(FN,"FN");	
	
		
		// Calculate precision, recall, and F1
		precision=TP.size()/(double)(TP.size()+FP.size());
		recall=TP.size()/(double)(TP.size()+FN.size());
		F1=(2*precision*recall)/(precision+recall);
	
		cout << "Class " << label << " Precision: " << precision << endl;
		cout << "Class " << label << " Recall: " << recall << endl;
		cout << "Class " << label << " F1: " << F1 << endl<< endl;
		
		gTIndex.clear();
		resultIndex.clear();
		TP.clear();
		FP.clear();
		FN.clear();
		
	}
	
		
}

int gT(void)
{
	static int i=0;
	int hold;
	if (i<40)
		hold=1;
	else if (i<90)
		hold=2;
	else 
		hold=3;
  	i++; 
	return hold; 
}

int randomNumber(void)
{
	return 1+rand()%3;
}

bool getIndex(int x)
{
	return x==label;
}

void findIndices(IntSet &s, vector <int>&v, const string &name)	
{

	vector<int>::iterator it = v.begin();
	while ((it= find_if(it, v.end(), getIndex)) != v.end())	//Burada boyut belirliyor.
	{
    	s.insert(distance(v.begin(), it));
    	it++;
	}
	
	cout << "Class " << label << " "<< name << " Indices : " << endl;
	for (IntSet::iterator it=s.begin();it!=s.end();it++) //Burada vectorlerin icerigindeki *it leri bastiriyor.
		cout << setw(3) << *it << " ";
	cout << endl << endl;		
}

void printVector(vector<int> &a, const string &name) 
{
	cout << name << " contains: " << endl;
	for(int i=0;i<a.size();i++)
		cout << a[i] << " ";	
	cout << endl << endl;
}
