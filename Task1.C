// A
// #include <stdio.h>

// int main(){
//     char name[2000];
//     scanf("%s", &name);
//     printf("Hello, %s", name);
//     return 0;
// }

// B
// #include <stdio.h>
// int main() {
//     int a; long long b; char c; float d; double e;
//     scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
//     printf("%d\n", a);
//     printf("%lld\n", b);
//     printf("%c\n", c);
//     printf("%.2f\n", d);
//     printf("%.1f\n", e);// Codeforces didn't accept printf("%.1lf\n", e);
//     return 0;
// }

// C
// #include <stdio.h>
// int main(){
// 	int x, y;
// 	scanf("%d %d", &x, &y);
// 	long long r1 = x+y, r2 = (long long)x*y, r3 = x-y;
// 	printf("%d + %d = %lld\n", x, y, r1);
// 	printf("%d * %d = %lld\n", x, y, r2);
// 	printf("%d - %d = %lld", x, y, r3);
// 	return 0;
// }

// D
// #include <stdio.h>
// int main(){
// 	long long a,b,c,d,e;
// 	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
// 	e = (a*b)-(c*d);
// 	printf("Difference = %lld", e);
// 	return 0;
// }

// E
// #include <stdio.h>
// int main(){
// 	float r;
// 	float pi=3.141592653;
// 	double area;
// 	scanf("%f", &r);
// 	area = pi*r*r;
// 	printf("%.9f", area); // Codeforces didn't accept printf("%.9lf\n", area);
// 	return 0;
// }

// F
// #include <stdio.h>
// int main(){
// 	long long n,m;
// 	scanf("%lld %lld", &n, &m);
// 	int x, y, z;
// 	x = n % 10;
// 	y = m % 10;
// 	z = x + y;
// 	printf("%d", z);
// 	return 0;
// }

// G
// #include <stdio.h>
// int main(){
// 	long long n, sm;
// 	scanf("%lld", &n);
// 	sm = (n*(n+1))/2;
// 	printf("%lld", sm);
// 	return 0;
// }

// H
// #include <stdio.h>
// #include <math.h>
// int main(){
// 	int a, b;
// 	scanf("%d %d", &a, &b);
// 	printf("floor %d / %d = %d\n", a, b, a/b);
// 	printf("ceil %d / %d = %.0f\n", a, b, ceil((float)a/b));
// 	printf("round %d / %d = %.0f", a, b, round((float)a/b));
// 	return 0;
// }

// I
// #include <stdio.h>
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     return 0;
// }

// J
// #include <stdio.h>
// int main(){
// 	long long a, b;
//     scanf("%lld %lld", &a, &b);
//     printf("%s\n", (a%b == 0 || b%a == 0) ? "Multiples" : "No Multiples");
// 	return 0;
// }

// K
// #include <stdio.h>
// #define MAX(a, b) ((a) > (b) ? (a) : (b))
// #define MIN(a, b) ((a) < (b) ? (a) : (b))

// int main() {
// 	long long a, b, c;
//     scanf("%lld %lld %lld", &a, &b, &c);
// 	printf("%lld %lld", MIN(a, MIN(b, c)), MAX(a,MAX(b,c)));
//     return 0;
// }

// L
// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char f1[10000],f2[10000],s1[10000],s2[10000];
// 	scanf("%s %s", &f1, &s1);
// 	scanf("%s %s", &f2, &s2);
// 	printf("%s", (strcmp(s1, s2) == 0) ? "ARE Brothers" : "NOT");
// 	return 0;
// }

// // M
// #include <stdio.h>
// int main(){
// 	char a;
// 	scanf("%c", &a);
// 	printf("%s", (a >= 48 && a <65 ) ? "IS DIGIT" : (a >= 65 && a <97) ? "ALPHA\nIS CAPITAL" : "ALPHA\nIS SMALL");
// 	return 0;
// }

// N
// #include <stdio.h>
// int main(){
// 	char a;
// 	scanf("%c", &a);
// 	printf("%c\n", (96 >= a && a >= 65) ? a+32 : a-32);
// 	return 0;
// }

// O
// #include <stdio.h>
// int main() {
//     int a, b;
//     char op;
//     scanf("%d %c %d", &a, &op, &b);
//     switch (op) {
//         case '+':
//             printf("%d\n", a + b);
//             break;
//         case '-':
//             printf("%d\n", a - b);
//             break;
//         case '*':
//             printf("%d\n", a * b);
//             break;
//         case '/':
//             printf("%d\n", a / b);
//             break;
//     }
//     return 0;
// }

// P
// #include <stdio.h>
// int main(){
// 	int n;
// 	scanf("%d", &n);
// 	n = n / 1000;
// 	printf("%s", (n % 2 == 0) ? "EVEN" : "ODD");
// 	return 0;
// }

// Q
// #include <stdio.h>
// int main() {
//     float a, b;
//     scanf("%f %f", &a, &b);
// 	if (a == 0 && b == 0) {
// 		printf("Origem");
// 	}
//     else if (b == 0){
// 		printf("Eixo X");
// 	}
// 	else if (a == 0){
// 		printf("Eixo Y");
// 	}
// 	else if (a > 0 && b > 0){
// 		printf("Q1");
// 	}
// 	else if (a < 0 && b > 0){
// 		printf("Q2");
// 	}
// 	else if (a < 0 && b < 0){
// 		printf("Q3");
// 	}
// 	else{
// 		printf("Q4");
// 	}
//     return 0;
// }

// R
// #include <stdio.h>
// int main(){
// 	long long a;
// 	scanf("%lld", &a);
// 	if (a < 30){
// 		printf("0 years\n0 months\n%lld days", a);
// 	}
// 	else if (a >= 30 && a < 365){
// 		printf("0 years\n%lld months\n%lld days", a/30, a%30);
// 	}
// 	else if (a >= 365){
// 		printf("%lld years\n%lld months\n%lld days", a/365 ,(a-365*(a/365))/30 ,a-((365*(a/365))+((a-365*(a/365))/30)*30));
// 	}
// 	return 0;
// }

// S
// #include <stdio.h>
// int main(){
// 	float a;
// 	scanf("%f", &a);
// 	if (a >= 0 && a <= 25){
// 		printf("Interval [0,25]\n");
// 	} else if (a > 25 && a <= 50){
// 		printf("Interval (25,50]\n");
// 	} else if (a > 50 && a <= 75){
// 		printf("Interval (50,75]\n");
// 	} else if (a > 75 && a <= 100){
// 		printf("Interval (75,100]\n");
// 	} else {
// 		printf("Out of Intervals");
// 	}
// 	return 0;
// }

// T
// #include <stdio.h>
// #define MAX(a, b) ((a) > (b) ? (a) : (b))
// #define MIN(a, b) ((a) < (b) ? (a) : (b))
// int main() {
//     long long A, B, C, minimum, maximum;
//     scanf("%lld %lld %lld", &A, &B, &C);
//     minimum = MIN(MIN(A, B), C);
//     maximum = MAX(MAX(A, B), C);
//     if (minimum == A) {
//         if (maximum == B) {
//             printf("%lld\n%lld\n%lld\n", A, C, B);
//         } else {
//             printf("%lld\n%lld\n%lld\n", A, B, C);
//         }
//     } else if (minimum == B) {
//         if (maximum == A) {
//             printf("%lld\n%lld\n%lld\n", B, C, A);
//         } else {
//             printf("%lld\n%lld\n%lld\n", B, A, C);
//         }
//     } else {
//         if (maximum == A) {
//             printf("%lld\n%lld\n%lld\n", C, B, A);
//         } else {
//             printf("%lld\n%lld\n%lld\n", C, A, B);
//         }
//     }
//     printf("\n");
//     printf("%lld\n%lld\n%lld\n", A, B, C);
//     return 0;
// }

// V
// #include <stdio.h>
// int main() {
//     int A, B;
//     char S;
//     scanf("%d %c %d", &A, &S, &B);
//     if (S == '<') {
//         printf(A < B ? "Right\n" : "Wrong\n");
//     } else if (S == '>') {
//         printf(A > B ? "Right\n" : "Wrong\n");
//     } else if (S == '=') {
//         printf(A == B ? "Right\n" : "Wrong\n");
//     } else {
//         printf("Invalid operator!\n");
//     }
//     return 0;
// }

// U
#include <stdio.h>
int main() {
    double N;
    scanf("%lf", &N);
    if (N == (long long)N) {
        printf("int %.0f\n", N);
    } else {
        long long intN = (long long)N;
        double flN = N - intN;
        printf("float %lld %.3f\n", intN, flN);
    }
    return 0;
}

// W
// #include <stdio.h>
// int main() {
//     int A, B, C,result;
//     char S, Q;
//     scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
//     if (S == '+') {
//         result = A + B;
//     } else if (S == '-') {
//         result = A - B;
//     } else if (S == '*') {
//         result = A * B;
//     }
//     if (result == C) {
//         printf("Yes\n");
//     } else {
//         printf("%d\n", result);
//     }
//     return 0;
// }

// X
// #include <stdio.h>
// int main() {
//     long long l1, r1, l2, r2, s, e;
//     scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);
//     s = (l1 > l2) ? l1 : l2;
//     e = (r1 < r2) ? r1 : r2;
//     if (s <= e) {
//         printf("%lld %lld", s, e); 
//     } else {
//         printf("-1"); 
//     }
//     return 0;
// }

// Y
// #include <stdio.h>
// int main() {
//     long long A, B, C, D;
//     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
//     printf("%02lld", (A % 100) * (B % 100) * (C % 100) * (D % 100) % 100);
//     return 0;
// }

// Z
// #include <stdio.h>
// #include <math.h>
// int main() {
//     long long A, B, C, D;
//     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
//     double left = B * log(A);
//     double right = D * log(C);
//     printf("%s\n", (left > right) ? "YES" : "NO");
//     return 0;
// }