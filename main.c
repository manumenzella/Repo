int main() {
	if (1 == 1) printf("Hello world");
	return 0;
}

int newFeature() {
	doSomethingAwesome();
	doSomethingEvenBetter();
	return 0; // Bug fix!
}

int secondNewFeature() {
	firstLine();
	secondLine();
	return 3.14;
}

// Bug Fix!
// Another new feature!
