#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000018 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000019 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000020 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000043 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000045 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000046 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000047 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000048 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000049 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000050 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000055 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000056 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000057 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000058 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005A System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005B System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005C System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005D System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005E TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000067 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000069 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000074 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000075 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000076 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000078 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000079 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007A System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[123] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[123] = 
{
	4420,
	4672,
	4672,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[44] = 
{
	{ 0x02000004, { 70, 4 } },
	{ 0x02000005, { 74, 9 } },
	{ 0x02000006, { 85, 7 } },
	{ 0x02000007, { 94, 10 } },
	{ 0x02000008, { 106, 11 } },
	{ 0x02000009, { 120, 9 } },
	{ 0x0200000A, { 132, 12 } },
	{ 0x0200000B, { 147, 1 } },
	{ 0x0200000C, { 148, 2 } },
	{ 0x0200000D, { 150, 2 } },
	{ 0x0200000F, { 152, 3 } },
	{ 0x02000010, { 157, 5 } },
	{ 0x02000011, { 162, 7 } },
	{ 0x02000012, { 169, 3 } },
	{ 0x02000013, { 172, 7 } },
	{ 0x02000014, { 179, 4 } },
	{ 0x02000015, { 183, 21 } },
	{ 0x02000017, { 204, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 2 } },
	{ 0x06000009, { 32, 1 } },
	{ 0x0600000A, { 33, 3 } },
	{ 0x0600000B, { 36, 2 } },
	{ 0x0600000C, { 38, 4 } },
	{ 0x0600000D, { 42, 4 } },
	{ 0x0600000E, { 46, 4 } },
	{ 0x0600000F, { 50, 3 } },
	{ 0x06000010, { 53, 1 } },
	{ 0x06000011, { 54, 1 } },
	{ 0x06000012, { 55, 3 } },
	{ 0x06000013, { 58, 3 } },
	{ 0x06000014, { 61, 2 } },
	{ 0x06000015, { 63, 2 } },
	{ 0x06000016, { 65, 5 } },
	{ 0x06000026, { 83, 2 } },
	{ 0x0600002B, { 92, 2 } },
	{ 0x06000030, { 104, 2 } },
	{ 0x06000036, { 117, 3 } },
	{ 0x0600003B, { 129, 3 } },
	{ 0x06000040, { 144, 3 } },
	{ 0x0600004B, { 155, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[206] = 
{
	{ (Il2CppRGCTXDataType)2, 2161 },
	{ (Il2CppRGCTXDataType)3, 10171 },
	{ (Il2CppRGCTXDataType)2, 3513 },
	{ (Il2CppRGCTXDataType)2, 2950 },
	{ (Il2CppRGCTXDataType)3, 16830 },
	{ (Il2CppRGCTXDataType)2, 2262 },
	{ (Il2CppRGCTXDataType)2, 2957 },
	{ (Il2CppRGCTXDataType)3, 16865 },
	{ (Il2CppRGCTXDataType)2, 2952 },
	{ (Il2CppRGCTXDataType)3, 16842 },
	{ (Il2CppRGCTXDataType)2, 2162 },
	{ (Il2CppRGCTXDataType)3, 10172 },
	{ (Il2CppRGCTXDataType)2, 3545 },
	{ (Il2CppRGCTXDataType)2, 2962 },
	{ (Il2CppRGCTXDataType)3, 16880 },
	{ (Il2CppRGCTXDataType)2, 2279 },
	{ (Il2CppRGCTXDataType)2, 2970 },
	{ (Il2CppRGCTXDataType)3, 17044 },
	{ (Il2CppRGCTXDataType)2, 2966 },
	{ (Il2CppRGCTXDataType)3, 16955 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1329 },
	{ (Il2CppRGCTXDataType)3, 7207 },
	{ (Il2CppRGCTXDataType)2, 749 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)3, 7212 },
	{ (Il2CppRGCTXDataType)2, 2611 },
	{ (Il2CppRGCTXDataType)3, 14376 },
	{ (Il2CppRGCTXDataType)3, 8066 },
	{ (Il2CppRGCTXDataType)2, 887 },
	{ (Il2CppRGCTXDataType)3, 942 },
	{ (Il2CppRGCTXDataType)3, 943 },
	{ (Il2CppRGCTXDataType)2, 2263 },
	{ (Il2CppRGCTXDataType)3, 10861 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)2, 1494 },
	{ (Il2CppRGCTXDataType)2, 1605 },
	{ (Il2CppRGCTXDataType)2, 1715 },
	{ (Il2CppRGCTXDataType)2, 1936 },
	{ (Il2CppRGCTXDataType)2, 1495 },
	{ (Il2CppRGCTXDataType)2, 1606 },
	{ (Il2CppRGCTXDataType)2, 1716 },
	{ (Il2CppRGCTXDataType)2, 1937 },
	{ (Il2CppRGCTXDataType)2, 1496 },
	{ (Il2CppRGCTXDataType)2, 1607 },
	{ (Il2CppRGCTXDataType)2, 1717 },
	{ (Il2CppRGCTXDataType)2, 1608 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)3, 7208 },
	{ (Il2CppRGCTXDataType)2, 1149 },
	{ (Il2CppRGCTXDataType)2, 1597 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)2, 1713 },
	{ (Il2CppRGCTXDataType)3, 7206 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)3, 7205 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)2, 1604 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)3, 19913 },
	{ (Il2CppRGCTXDataType)3, 6621 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)2, 1714 },
	{ (Il2CppRGCTXDataType)2, 1811 },
	{ (Il2CppRGCTXDataType)3, 10173 },
	{ (Il2CppRGCTXDataType)3, 10175 },
	{ (Il2CppRGCTXDataType)2, 553 },
	{ (Il2CppRGCTXDataType)3, 10174 },
	{ (Il2CppRGCTXDataType)3, 10183 },
	{ (Il2CppRGCTXDataType)2, 2165 },
	{ (Il2CppRGCTXDataType)2, 2953 },
	{ (Il2CppRGCTXDataType)3, 16843 },
	{ (Il2CppRGCTXDataType)3, 10184 },
	{ (Il2CppRGCTXDataType)2, 1650 },
	{ (Il2CppRGCTXDataType)2, 1745 },
	{ (Il2CppRGCTXDataType)3, 7219 },
	{ (Il2CppRGCTXDataType)3, 19879 },
	{ (Il2CppRGCTXDataType)2, 2967 },
	{ (Il2CppRGCTXDataType)3, 16956 },
	{ (Il2CppRGCTXDataType)3, 10176 },
	{ (Il2CppRGCTXDataType)2, 2164 },
	{ (Il2CppRGCTXDataType)2, 2951 },
	{ (Il2CppRGCTXDataType)3, 16831 },
	{ (Il2CppRGCTXDataType)3, 7218 },
	{ (Il2CppRGCTXDataType)3, 10177 },
	{ (Il2CppRGCTXDataType)3, 19878 },
	{ (Il2CppRGCTXDataType)2, 2963 },
	{ (Il2CppRGCTXDataType)3, 16881 },
	{ (Il2CppRGCTXDataType)3, 10190 },
	{ (Il2CppRGCTXDataType)2, 2166 },
	{ (Il2CppRGCTXDataType)2, 2958 },
	{ (Il2CppRGCTXDataType)3, 16866 },
	{ (Il2CppRGCTXDataType)3, 10903 },
	{ (Il2CppRGCTXDataType)3, 5507 },
	{ (Il2CppRGCTXDataType)3, 7220 },
	{ (Il2CppRGCTXDataType)3, 5506 },
	{ (Il2CppRGCTXDataType)3, 10191 },
	{ (Il2CppRGCTXDataType)3, 19880 },
	{ (Il2CppRGCTXDataType)2, 2971 },
	{ (Il2CppRGCTXDataType)3, 17045 },
	{ (Il2CppRGCTXDataType)3, 10204 },
	{ (Il2CppRGCTXDataType)2, 2168 },
	{ (Il2CppRGCTXDataType)2, 2969 },
	{ (Il2CppRGCTXDataType)3, 16958 },
	{ (Il2CppRGCTXDataType)3, 10205 },
	{ (Il2CppRGCTXDataType)2, 1653 },
	{ (Il2CppRGCTXDataType)2, 1748 },
	{ (Il2CppRGCTXDataType)3, 7224 },
	{ (Il2CppRGCTXDataType)3, 7223 },
	{ (Il2CppRGCTXDataType)2, 2955 },
	{ (Il2CppRGCTXDataType)3, 16845 },
	{ (Il2CppRGCTXDataType)3, 19885 },
	{ (Il2CppRGCTXDataType)2, 2968 },
	{ (Il2CppRGCTXDataType)3, 16957 },
	{ (Il2CppRGCTXDataType)3, 10197 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)2, 2965 },
	{ (Il2CppRGCTXDataType)3, 16883 },
	{ (Il2CppRGCTXDataType)3, 7222 },
	{ (Il2CppRGCTXDataType)3, 7221 },
	{ (Il2CppRGCTXDataType)3, 10198 },
	{ (Il2CppRGCTXDataType)2, 2954 },
	{ (Il2CppRGCTXDataType)3, 16844 },
	{ (Il2CppRGCTXDataType)3, 19884 },
	{ (Il2CppRGCTXDataType)2, 2964 },
	{ (Il2CppRGCTXDataType)3, 16882 },
	{ (Il2CppRGCTXDataType)3, 10211 },
	{ (Il2CppRGCTXDataType)2, 2169 },
	{ (Il2CppRGCTXDataType)2, 2973 },
	{ (Il2CppRGCTXDataType)3, 17047 },
	{ (Il2CppRGCTXDataType)3, 10904 },
	{ (Il2CppRGCTXDataType)3, 5509 },
	{ (Il2CppRGCTXDataType)3, 7226 },
	{ (Il2CppRGCTXDataType)3, 7225 },
	{ (Il2CppRGCTXDataType)3, 5508 },
	{ (Il2CppRGCTXDataType)3, 10212 },
	{ (Il2CppRGCTXDataType)2, 2956 },
	{ (Il2CppRGCTXDataType)3, 16846 },
	{ (Il2CppRGCTXDataType)3, 19886 },
	{ (Il2CppRGCTXDataType)2, 2972 },
	{ (Il2CppRGCTXDataType)3, 17046 },
	{ (Il2CppRGCTXDataType)3, 7216 },
	{ (Il2CppRGCTXDataType)3, 7217 },
	{ (Il2CppRGCTXDataType)3, 7230 },
	{ (Il2CppRGCTXDataType)2, 3553 },
	{ (Il2CppRGCTXDataType)2, 1150 },
	{ (Il2CppRGCTXDataType)2, 754 },
	{ (Il2CppRGCTXDataType)3, 111 },
	{ (Il2CppRGCTXDataType)3, 14363 },
	{ (Il2CppRGCTXDataType)2, 2612 },
	{ (Il2CppRGCTXDataType)3, 14377 },
	{ (Il2CppRGCTXDataType)2, 888 },
	{ (Il2CppRGCTXDataType)3, 944 },
	{ (Il2CppRGCTXDataType)3, 14369 },
	{ (Il2CppRGCTXDataType)3, 5482 },
	{ (Il2CppRGCTXDataType)2, 581 },
	{ (Il2CppRGCTXDataType)3, 14364 },
	{ (Il2CppRGCTXDataType)2, 2608 },
	{ (Il2CppRGCTXDataType)3, 1433 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)2, 1201 },
	{ (Il2CppRGCTXDataType)3, 5488 },
	{ (Il2CppRGCTXDataType)3, 14365 },
	{ (Il2CppRGCTXDataType)3, 5477 },
	{ (Il2CppRGCTXDataType)3, 5478 },
	{ (Il2CppRGCTXDataType)3, 5476 },
	{ (Il2CppRGCTXDataType)3, 5479 },
	{ (Il2CppRGCTXDataType)2, 1197 },
	{ (Il2CppRGCTXDataType)2, 3600 },
	{ (Il2CppRGCTXDataType)3, 7214 },
	{ (Il2CppRGCTXDataType)3, 5481 },
	{ (Il2CppRGCTXDataType)2, 1575 },
	{ (Il2CppRGCTXDataType)3, 5480 },
	{ (Il2CppRGCTXDataType)2, 1498 },
	{ (Il2CppRGCTXDataType)2, 3549 },
	{ (Il2CppRGCTXDataType)2, 1624 },
	{ (Il2CppRGCTXDataType)2, 1723 },
	{ (Il2CppRGCTXDataType)3, 6642 },
	{ (Il2CppRGCTXDataType)2, 1241 },
	{ (Il2CppRGCTXDataType)3, 7908 },
	{ (Il2CppRGCTXDataType)3, 7909 },
	{ (Il2CppRGCTXDataType)3, 7914 },
	{ (Il2CppRGCTXDataType)2, 1819 },
	{ (Il2CppRGCTXDataType)3, 7911 },
	{ (Il2CppRGCTXDataType)3, 20516 },
	{ (Il2CppRGCTXDataType)2, 1202 },
	{ (Il2CppRGCTXDataType)3, 5497 },
	{ (Il2CppRGCTXDataType)1, 1570 },
	{ (Il2CppRGCTXDataType)2, 3559 },
	{ (Il2CppRGCTXDataType)3, 7910 },
	{ (Il2CppRGCTXDataType)1, 3559 },
	{ (Il2CppRGCTXDataType)1, 1819 },
	{ (Il2CppRGCTXDataType)2, 3619 },
	{ (Il2CppRGCTXDataType)2, 3559 },
	{ (Il2CppRGCTXDataType)3, 7915 },
	{ (Il2CppRGCTXDataType)3, 7913 },
	{ (Il2CppRGCTXDataType)3, 7912 },
	{ (Il2CppRGCTXDataType)2, 428 },
	{ (Il2CppRGCTXDataType)3, 5510 },
	{ (Il2CppRGCTXDataType)2, 562 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	123,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	44,
	s_rgctxIndices,
	206,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
