/*✅ 1. Two Local Variables – Same Name – Same Data Type → Error*/
int main() {
    int x = 5;
    int x = 10; // ❌ Error: redeclaration of ‘x’
    return 0;
}
/*✅ 2. Two Local Variables – Same Name – Different Data Type → Error*/
int main() {
    int x = 5;
    float x = 10.5; // ❌ Error: redeclaration of ‘x’
    return 0;
} 
/*✅ 3. Two Local Variables – Different Names – Same Data Type → No Error*/
int main() {
    int x = 5;
    int y = 10; // ✔️ No Error
    return 0;
}   
/*✅ 4. Two Local Variables – Different Names – Different Data Type → No Error*/
int b = 10;
float b = 20.5; // ❌ Error: redefinition of ‘b’ with different type

int main() {
    return 0;
}
/*🧠 ملاحظات سريعة:
الـ local variables لازم يكون ليهم أسماء مختلفة داخل نفس الـ scope (يعني نفس البلوك {}).

الـ global variables كمان مينفعش يتكرروا بنفس الاسم، سواء بنفس النوع أو نوع مختلف.

الكومبايلر هيطّلع Error لأن التعريف المكرر بيخبط في الـ memory model بتاع C.*/