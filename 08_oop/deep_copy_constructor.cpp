/*
class Test{
    int a;
    int *p;

    Test(int x){
        a = x;
        p = new int[a];
    }

    Test(Test &t) {
        a = t.a;
        // this creates a deep copy - not a shallow copy
        p = new int[a]; -- this needs to be created to copy a new array and 
                           not point at the same array Test has created earlier
    }
}
*/