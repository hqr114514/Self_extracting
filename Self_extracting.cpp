﻿#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

char w_indows[] = { 0x77,0x69,0x6E,0x64,0x6F,0x77,0x73 };
char l_inux[] = { 0x6C,0x69,0x6E,0x75,0x78 };
char head[] = { 0x23,0x69,0x6E,0x63,0x6C,0x75,0x64,0x65,0x20,0x3C,0x62,0x69,0x74,0x73,0x2F,0x73,0x74,0x64,0x63,0x2B,0x2B,0x2E,0x68,0x3E,0x0A,0x75,0x73,0x69,0x6E,0x67,0x20,0x6E,0x61,0x6D,0x65,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x74,0x64,0x3B,0x0A,0x6F,0x66,0x73,0x74,0x72,0x65,0x61,0x6D,0x20,0x66,0x6F,0x75,0x74,0x3B,0x0A };
char s1[] = { 0x65,0x78,0x74,0x65,0x72,0x6E,0x20,0x63,0x68,0x61,0x72,0x20,0x5F,0x62,0x69,0x6E,0x61,0x72,0x79,0x5F };
char s_tart[] = { 0x5F,0x73,0x74,0x61,0x72,0x74,0x3B };
char e_nd[] = { 0x5F,0x65,0x6E,0x64,0x3B };
char mian[] = { 0x69,0x6E,0x74,0x20,0x6D,0x61,0x69,0x6E,0x28,0x29,0x20,0x7B,0x0A };
char s2[] = { 0x09,0x66,0x6F,0x75,0x74,0x2E,0x6F,0x70,0x65,0x6E,0x28,0x22 };
char s3[] = { 0x22,0x2C,0x69,0x6F,0x73,0x3A,0x3A,0x62,0x69,0x6E,0x61,0x72,0x79,0x29,0x3B,0x0A,0x09,0x66,0x6F,0x75,0x74,0x2E,0x77,0x72,0x69,0x74,0x65,0x28,0x26,0x5F,0x62,0x69,0x6E,0x61,0x72,0x79,0x5F };
char s4[] = { 0x5F,0x73,0x74,0x61,0x72,0x74,0x2C,0x28,0x26,0x5F,0x62,0x69,0x6E,0x61,0x72,0x79,0x5F };
char s5[] = { 0x5F,0x65,0x6E,0x64,0x29,0x2D,0x28,0x26,0x5F,0x62,0x69,0x6E,0x61,0x72,0x79,0x5F };
char s6[] = { 0x5F,0x73,0x74,0x61,0x72,0x74,0x29,0x29,0x3B,0x0A,0x09,0x66,0x6F,0x75,0x74,0x2E,0x63,0x6C,0x6F,0x73,0x65,0x28,0x29,0x3B,0x0A };
char s7[] = { 0x09,0x72,0x65,0x74,0x75,0x72,0x6E,0x20,0x30,0x3B,0x0A,0x7D };
char o_bj[] = { 0x6F,0x62,0x6A,0x63,0x6F,0x70,0x79,0x20,0x2D,0x2D,0x69,0x6E,0x70,0x75,0x74,0x20,0x62,0x69,0x6E,0x61,0x72,0x79,0x20,0x2D,0x2D,0x6F,0x75,0x74,0x70,0x75,0x74,0x20,0x24,0x28,0x4F,0x55,0x54,0x29,0x20,0x2D,0x2D,0x62,0x69,0x6E,0x61,0x72,0x79,0x2D,0x61,0x72,0x63,0x68,0x69,0x74,0x65,0x63,0x74,0x75,0x72,0x65,0x20,0x24,0x28,0x47,0x53,0x29,0x20 };
char cop[] = { 0x2D,0x73,0x74,0x64,0x3D,0x63,0x2B,0x2B,0x31,0x34,0x20,0x2D,0x6F,0x20,0x6D,0x61,0x69,0x6E,0x0A,0x6D,0x61,0x69,0x6E,0x2E,0x6F,0x3A,0x6D,0x61,0x69,0x6E,0x2E,0x63,0x70,0x70,0x0A,0x09,0x67,0x2B,0x2B,0x20,0x2D,0x63,0x20,0x6D,0x61,0x69,0x6E,0x2E,0x63,0x70,0x70,0x20,0x2D,0x73,0x74,0x64,0x3D,0x63,0x2B,0x2B,0x31,0x34,0x20,0x2D,0x6F,0x20,0x6D,0x61,0x69,0x6E,0x2E,0x6F,0x0A };
short sys = 0;
char OUT_EQ[] = { 0x4F,0x55,0x54,0x20,0x3D,0x20 };
char GS_EQ[] = { 0x47,0x53,0x20,0x3D,0x20 };
char pe[] = { 0x70,0x65,0x2D,0x78,0x38,0x36,0x2D,0x36,0x34 };
char elf[] = { 0x65,0x6C,0x66,0x36,0x34,0x2D,0x78,0x38,0x36,0x2D,0x36,0x34 };
char i386[] = { 0x69,0x33,0x38,0x36,0x3A,0x78,0x38,0x36,0x2D,0x36,0x34 };

int main(int num, char** args) {
	//cout << main_cpp;
	//return 0;
	ofstream fout("main.cpp", ios::binary);
	fout.write(head, sizeof head);
	if (num > 1) {
		char* filename = args[1];
		freopen(filename, "r", stdin);
	}
	vector<string>v;
	vector<string>sou;
	string f;
	cin >> f;
	if (f == w_indows) sys = 0;
	else if (f == l_inux) sys = 1;
	while (cin >> f) {
		string f2 = "";
		for (int j = 1; j <= 2; j++) {
			fout.write(s1, sizeof s1);
			int n = f.size();
			for (int i = 0, underline = 0x5F; i < n; i++) {
				char x = f[i];
				fout.write((f[i] == 0x2E) ? ((char*)&underline) : (&x), 1);
				if (j & 1) f2 += (f[i] == 0x2E) ? (underline) : (x);
			}
			if (j & 1) fout.write(s_tart, sizeof s_tart);
			else fout.write(e_nd, sizeof e_nd);
			fout << (char)0x0A;
		}
		v.push_back(f2);
		sou.push_back(f);
	}
	fout.write(mian, sizeof mian);
	int p = 0;
	for (string i : v) {
		fout.write(s2, sizeof s2);
		fout << sou[p];
		fout.write(s3, sizeof s3);
		fout << i;
		fout.write(s4, sizeof s4);
		fout << i;
		fout.write(s5, sizeof s5);
		fout << i;
		fout.write(s6, sizeof s6);
		p++;
	}
	fout.write(s7, sizeof s7);
	fout.close();
	fout.open("Makefile", ios::binary);
	fout.write(OUT_EQ, sizeof OUT_EQ);
	if (sys == 0) fout.write(pe, sizeof pe);
	else fout.write(elf, sizeof elf);
	fout << (char)0x0A;
	fout.write(GS_EQ, sizeof GS_EQ);
	fout.write(i386, sizeof i386);
	fout << (char)0x0A;
	fout << "main:main.o ";
	for (string i : v) {
		fout << i << ".o ";
	}
	fout << "\n\tg++ main.o ";
	for (string i : v) {
		fout << i << ".o ";
	}
	fout.write(cop, sizeof cop);
	for (int i = 0; i < v.size(); i++) {
		fout << v[i] << ".o:" << sou[i] << "\n\t";
		fout.write(o_bj, sizeof o_bj);
		fout << sou[i] << " " << v[i] << ".o" << "\n";
	}
	fout.close();
	system("make");
	return 0;
}