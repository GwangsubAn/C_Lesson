//#pragma once  // 전처리 문 : 헤더파일을 중복 포함시키는 것을 방지하기 위한 코드, cpp style

#ifndef __MY_ACADEMY_20250617__
#define  __MY_ACADEMY_20250617__

#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <stdlib.h>  // 문자열 관련 함수 정의 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더

#include <time.h>  // 
#define COUNT 10  // 매크로 상수 정의
#define ROW 5  // 매크로 상수 정의
#define COL 6 // 매크로 상수 정의

// 함수의 선언(원형)
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

