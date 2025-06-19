//#pragma once  // ��ó�� �� : ��������� �ߺ� ���Խ�Ű�� ���� �����ϱ� ���� �ڵ�, cpp style

#ifndef __MY_ACADEMY_20250617__
#define  __MY_ACADEMY_20250617__

#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <stdlib.h>  // ���ڿ� ���� �Լ� ���� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���

#include <time.h>  // 
#define COUNT 10  // ��ũ�� ��� ����
#define ROW 5  // ��ũ�� ��� ����
#define COL 6 // ��ũ�� ��� ����

// �Լ��� ����(����)
void randon_value(int arr[], int cnt);
void randon_value(int arr[], int cnt, int max_val);
void print_array(int* arr, int cnt);
void swap(int* pa, int* pb);
void sequence_sort(int* arr, int count);
int find_value(int arr[], int count, int to_find);
int find_binary(int arr[], int count, int to_find);
int sum(int n);
int factorial(int n);
void my_qsort(int arr[], int left, int right);
void ascending_sort(int arr[], int count);
int sequence_find(int arr[], int count, int to_find);
int my_strlen(const char* psz);

#endif

