#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class Spliterator$OfDouble;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class List;
    class Spliterator$OfInt;
    class Spliterator$OfLong;
    class Spliterator;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
     public:
      enum {
        mid_asList_91eee740d34e4dd1,
        mid_binarySearch_c4ad8ddc2dcf759a,
        mid_binarySearch_98510c04818c1ad3,
        mid_binarySearch_a3030c572afb3940,
        mid_binarySearch_832e72875e588366,
        mid_binarySearch_6441a212c84d742e,
        mid_binarySearch_abe451b22b543e7c,
        mid_binarySearch_f457d130da7a122c,
        mid_binarySearch_efdce0b654eae838,
        mid_binarySearch_ba581c3446cdedde,
        mid_binarySearch_2e4468b42ad2e92a,
        mid_binarySearch_2396840d93921fdd,
        mid_binarySearch_17d258da50eea9b2,
        mid_binarySearch_137690042f74d9a2,
        mid_binarySearch_563531b00cef4ad4,
        mid_binarySearch_05740ccb89aaba05,
        mid_binarySearch_c968ba85508f01e0,
        mid_binarySearch_bd74c9cf169df43c,
        mid_binarySearch_542f7aaab06af11f,
        mid_compare_84b6632266939e78,
        mid_compare_82457a1c4f0555d2,
        mid_compare_2cc84667d6dc200c,
        mid_compare_75b959e694160751,
        mid_compare_779c476bcabb05f3,
        mid_compare_0c254c236f25ce58,
        mid_compare_f87cbcbb8ab0d58e,
        mid_compare_aca9966913a62036,
        mid_compare_c104705e7c2f87b2,
        mid_compare_215af65854501324,
        mid_compare_ef4525b3ea6ec3d8,
        mid_compare_f02426823f73eb48,
        mid_compare_a408badae3b04309,
        mid_compare_08f9f20529d1d5ac,
        mid_compare_de23402141452276,
        mid_compare_b963884fe5f1069c,
        mid_compare_3bfbd38eb8da4619,
        mid_compare_5c5d7010fbe9c730,
        mid_compare_8e89888c7c0a5baa,
        mid_compare_3a4ca88e0a87af08,
        mid_compareUnsigned_84b6632266939e78,
        mid_compareUnsigned_779c476bcabb05f3,
        mid_compareUnsigned_0c254c236f25ce58,
        mid_compareUnsigned_aca9966913a62036,
        mid_compareUnsigned_ef4525b3ea6ec3d8,
        mid_compareUnsigned_de23402141452276,
        mid_compareUnsigned_b963884fe5f1069c,
        mid_compareUnsigned_5c5d7010fbe9c730,
        mid_copyOf_ae4a40e983f6ebb6,
        mid_copyOf_d7b726003e19f9ca,
        mid_copyOf_118f9c80345bfb12,
        mid_copyOf_8123fa12aba6a708,
        mid_copyOf_2bc69b21fdbebdf7,
        mid_copyOf_65be87c101e2ee40,
        mid_copyOf_857aa64d6a0ab11c,
        mid_copyOf_e4f2e0c31eafa84d,
        mid_copyOf_bec3f319a180df09,
        mid_copyOf_a9740fbf7d8c8b90,
        mid_copyOfRange_3d965b793c043aaa,
        mid_copyOfRange_6515cdf560562876,
        mid_copyOfRange_41a59b6c86e2e047,
        mid_copyOfRange_4b5b54a45e627a13,
        mid_copyOfRange_338a7ae562dffaf7,
        mid_copyOfRange_6bbf894c3edb4072,
        mid_copyOfRange_20bbba8a445cccda,
        mid_copyOfRange_23276f508b9e7e9c,
        mid_copyOfRange_af0fef9ce70a921e,
        mid_copyOfRange_1182d1e139cbdf30,
        mid_deepEquals_f3993dcfc1c3b1fa,
        mid_deepHashCode_121fcd48be00be7e,
        mid_deepToString_cfb7bfc1e966aa1c,
        mid_equals_026a317eb6da308c,
        mid_equals_cd7cb537d89cc9c3,
        mid_equals_b013f01484dd6b19,
        mid_equals_b2dc548396b699a5,
        mid_equals_f8ca155cbadf2a73,
        mid_equals_739455d93f7b2089,
        mid_equals_f3993dcfc1c3b1fa,
        mid_equals_266b3ca27c6bb5ac,
        mid_equals_88c8aa477582c988,
        mid_equals_eaed5533f702830d,
        mid_equals_6b0ee56638bbd69c,
        mid_equals_f005d57004f4a562,
        mid_equals_846d53e78e91f01f,
        mid_equals_b72fa4513f2ea00e,
        mid_equals_1a33d3a232b2cebf,
        mid_equals_af2688909c03ed67,
        mid_equals_73a7ccae51d97096,
        mid_equals_b5d08924f509fce8,
        mid_equals_e166215211f00b71,
        mid_equals_ea4c2f8e6a4abf6d,
        mid_fill_bc8476272e680cc5,
        mid_fill_d8adf6972bc02daf,
        mid_fill_bc1ff02eb3693128,
        mid_fill_21da24c38033d9e2,
        mid_fill_231c00a4687cef2d,
        mid_fill_079c7069c062d067,
        mid_fill_000c1db688cda882,
        mid_fill_92f1f874b4a9a29e,
        mid_fill_32b9eb60b6b9d068,
        mid_fill_817b7b7e5c027170,
        mid_fill_13d627b4ceed0170,
        mid_fill_98615a86bce41df2,
        mid_fill_356cbfa06d750831,
        mid_fill_975818087f58b4c7,
        mid_fill_646e795ecf2750c6,
        mid_fill_a62dba4a0613efd9,
        mid_fill_9e36d83bf1c4b0d5,
        mid_fill_c62fc3ce0ae16133,
        mid_hashCode_5702323b606d072b,
        mid_hashCode_881698425abcbe49,
        mid_hashCode_e00f7ba4becc2a21,
        mid_hashCode_2a346f51a25907b9,
        mid_hashCode_5741cb0fe93805c9,
        mid_hashCode_a5e549ea20188e94,
        mid_hashCode_121fcd48be00be7e,
        mid_hashCode_0c3a944e3c2cc22f,
        mid_hashCode_a6356d5b22d74928,
        mid_mismatch_84b6632266939e78,
        mid_mismatch_82457a1c4f0555d2,
        mid_mismatch_2cc84667d6dc200c,
        mid_mismatch_75b959e694160751,
        mid_mismatch_779c476bcabb05f3,
        mid_mismatch_0c254c236f25ce58,
        mid_mismatch_60bcbc81ff0efd8b,
        mid_mismatch_aca9966913a62036,
        mid_mismatch_c104705e7c2f87b2,
        mid_mismatch_215af65854501324,
        mid_mismatch_ef4525b3ea6ec3d8,
        mid_mismatch_f02426823f73eb48,
        mid_mismatch_a408badae3b04309,
        mid_mismatch_08f9f20529d1d5ac,
        mid_mismatch_de23402141452276,
        mid_mismatch_b963884fe5f1069c,
        mid_mismatch_b9c6adc3d73702b5,
        mid_mismatch_5c5d7010fbe9c730,
        mid_mismatch_8e89888c7c0a5baa,
        mid_mismatch_3a4ca88e0a87af08,
        mid_parallelSort_20012b3010a39c05,
        mid_parallelSort_3534e8e092c162a5,
        mid_parallelSort_fa9d415d19f69361,
        mid_parallelSort_21ede3e7b6965218,
        mid_parallelSort_d147d7ce001e2d45,
        mid_parallelSort_c57942992c8467a1,
        mid_parallelSort_8b9e3b25fc2e7c74,
        mid_parallelSort_3655c5425504ab58,
        mid_parallelSort_9ab86e5cbbe7c5e6,
        mid_parallelSort_d7af9aedcdd3845b,
        mid_parallelSort_44aecef33af91018,
        mid_parallelSort_12aca76acb10f1af,
        mid_parallelSort_dc2b53a3ac44e435,
        mid_parallelSort_503826ec0042272d,
        mid_parallelSort_7ca547243f3503b4,
        mid_parallelSort_5338de95c731398e,
        mid_parallelSort_3556e58eaf65c475,
        mid_parallelSort_b2df4aef966a2aa2,
        mid_sort_20012b3010a39c05,
        mid_sort_3534e8e092c162a5,
        mid_sort_fa9d415d19f69361,
        mid_sort_21ede3e7b6965218,
        mid_sort_d147d7ce001e2d45,
        mid_sort_c57942992c8467a1,
        mid_sort_c87c65058a9c47e3,
        mid_sort_3655c5425504ab58,
        mid_sort_9ab86e5cbbe7c5e6,
        mid_sort_d7af9aedcdd3845b,
        mid_sort_44aecef33af91018,
        mid_sort_12aca76acb10f1af,
        mid_sort_dc2b53a3ac44e435,
        mid_sort_503826ec0042272d,
        mid_sort_7ca547243f3503b4,
        mid_sort_1fdb20abe48928a1,
        mid_sort_3556e58eaf65c475,
        mid_sort_b2df4aef966a2aa2,
        mid_spliterator_952aa15bfacf0020,
        mid_spliterator_03a0a7d428b35f86,
        mid_spliterator_e5b642f4c4abcba5,
        mid_spliterator_e2472520832b7cfe,
        mid_spliterator_0eacd606c2470ccc,
        mid_spliterator_e728be19940ebea9,
        mid_spliterator_81028deba53cbac7,
        mid_spliterator_6a1dff014c98f1b1,
        mid_stream_9158f17504e0009c,
        mid_stream_fcdf5e804d048ff5,
        mid_stream_3da482bb0f3852bc,
        mid_stream_ca8bd8c58bc13a4f,
        mid_toString_3c918391581f53ea,
        mid_toString_1ecedce87d38e8f2,
        mid_toString_26f9cd70e2dc05e5,
        mid_toString_00834e5ebcc13233,
        mid_toString_73683ad393ccda19,
        mid_toString_058218907940d62f,
        mid_toString_cfb7bfc1e966aa1c,
        mid_toString_c88f17bca25df529,
        mid_toString_75b68f16093227a4,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Arrays(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Arrays(const Arrays& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List asList(const JArray< ::java::lang::Object > &);
      static jint binarySearch(const JArray< jbyte > &, jbyte);
      static jint binarySearch(const JArray< jchar > &, jchar);
      static jint binarySearch(const JArray< jdouble > &, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jfloat);
      static jint binarySearch(const JArray< jint > &, jint);
      static jint binarySearch(const JArray< jlong > &, jlong);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jshort > &, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint binarySearch(const JArray< jbyte > &, jint, jint, jbyte);
      static jint binarySearch(const JArray< jchar > &, jint, jint, jchar);
      static jint binarySearch(const JArray< jdouble > &, jint, jint, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jint, jint, jfloat);
      static jint binarySearch(const JArray< jint > &, jint, jint, jint);
      static jint binarySearch(const JArray< jlong > &, jint, jint, jlong);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jshort > &, jint, jint, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compare(const JArray< jchar > &, const JArray< jchar > &);
      static jint compare(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint compare(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint compare(const JArray< jint > &, const JArray< jint > &);
      static jint compare(const JArray< jlong > &, const JArray< jlong > &);
      static jint compare(const JArray< ::java::lang::Comparable > &, const JArray< ::java::lang::Comparable > &);
      static jint compare(const JArray< jshort > &, const JArray< jshort > &);
      static jint compare(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint compare(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compare(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint compare(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint compare(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint compare(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compare(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Comparable > &, jint, jint, const JArray< ::java::lang::Comparable > &, jint, jint);
      static jint compare(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint compare(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static jint compareUnsigned(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compareUnsigned(const JArray< jint > &, const JArray< jint > &);
      static jint compareUnsigned(const JArray< jlong > &, const JArray< jlong > &);
      static jint compareUnsigned(const JArray< jshort > &, const JArray< jshort > &);
      static jint compareUnsigned(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compareUnsigned(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compareUnsigned(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compareUnsigned(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static JArray< jbyte > copyOf(const JArray< jbyte > &, jint);
      static JArray< jchar > copyOf(const JArray< jchar > &, jint);
      static JArray< jdouble > copyOf(const JArray< jdouble > &, jint);
      static JArray< jfloat > copyOf(const JArray< jfloat > &, jint);
      static JArray< jint > copyOf(const JArray< jint > &, jint);
      static JArray< jlong > copyOf(const JArray< jlong > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint);
      static JArray< jshort > copyOf(const JArray< jshort > &, jint);
      static JArray< jboolean > copyOf(const JArray< jboolean > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint, const ::java::lang::Class &);
      static JArray< jbyte > copyOfRange(const JArray< jbyte > &, jint, jint);
      static JArray< jchar > copyOfRange(const JArray< jchar > &, jint, jint);
      static JArray< jdouble > copyOfRange(const JArray< jdouble > &, jint, jint);
      static JArray< jfloat > copyOfRange(const JArray< jfloat > &, jint, jint);
      static JArray< jint > copyOfRange(const JArray< jint > &, jint, jint);
      static JArray< jlong > copyOfRange(const JArray< jlong > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint);
      static JArray< jshort > copyOfRange(const JArray< jshort > &, jint, jint);
      static JArray< jboolean > copyOfRange(const JArray< jboolean > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Class &);
      static jboolean deepEquals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint deepHashCode(const JArray< ::java::lang::Object > &);
      static ::java::lang::String deepToString(const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
      static jboolean equals(const JArray< jchar > &, const JArray< jchar > &);
      static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
      static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
      static jboolean equals(const JArray< jint > &, const JArray< jint > &);
      static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
      static jboolean equals(const JArray< jboolean > &, const JArray< jboolean > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jboolean equals(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jboolean equals(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jboolean equals(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jboolean equals(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jboolean equals(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jboolean equals(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jboolean equals(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jboolean equals(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< jshort > &, jint, jint, jshort);
      static jint hashCode(const JArray< jbyte > &);
      static jint hashCode(const JArray< jchar > &);
      static jint hashCode(const JArray< jdouble > &);
      static jint hashCode(const JArray< jfloat > &);
      static jint hashCode(const JArray< jint > &);
      static jint hashCode(const JArray< jlong > &);
      static jint hashCode(const JArray< ::java::lang::Object > &);
      static jint hashCode(const JArray< jshort > &);
      static jint hashCode(const JArray< jboolean > &);
      static jint mismatch(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint mismatch(const JArray< jchar > &, const JArray< jchar > &);
      static jint mismatch(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint mismatch(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint mismatch(const JArray< jint > &, const JArray< jint > &);
      static jint mismatch(const JArray< jlong > &, const JArray< jlong > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint mismatch(const JArray< jshort > &, const JArray< jshort > &);
      static jint mismatch(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint mismatch(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint mismatch(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint mismatch(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint mismatch(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint mismatch(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint mismatch(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jint mismatch(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint mismatch(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &);
      static void parallelSort(const JArray< jchar > &);
      static void parallelSort(const JArray< jdouble > &);
      static void parallelSort(const JArray< jfloat > &);
      static void parallelSort(const JArray< jint > &);
      static void parallelSort(const JArray< jlong > &);
      static void parallelSort(const JArray< ::java::lang::Comparable > &);
      static void parallelSort(const JArray< jshort > &);
      static void parallelSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &, jint, jint);
      static void parallelSort(const JArray< jchar > &, jint, jint);
      static void parallelSort(const JArray< jdouble > &, jint, jint);
      static void parallelSort(const JArray< jfloat > &, jint, jint);
      static void parallelSort(const JArray< jint > &, jint, jint);
      static void parallelSort(const JArray< jlong > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Comparable > &, jint, jint);
      static void parallelSort(const JArray< jshort > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &);
      static void sort(const JArray< jchar > &);
      static void sort(const JArray< jdouble > &);
      static void sort(const JArray< jfloat > &);
      static void sort(const JArray< jint > &);
      static void sort(const JArray< jlong > &);
      static void sort(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jshort > &);
      static void sort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &, jint, jint);
      static void sort(const JArray< jchar > &, jint, jint);
      static void sort(const JArray< jdouble > &, jint, jint);
      static void sort(const JArray< jfloat > &, jint, jint);
      static void sort(const JArray< jint > &, jint, jint);
      static void sort(const JArray< jlong > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint);
      static void sort(const JArray< jshort > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &, jint, jint);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &, jint, jint);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &, jint, jint);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::util::stream::DoubleStream stream(const JArray< jdouble > &);
      static ::java::util::stream::Stream stream(const JArray< ::java::lang::Object > &);
      static ::java::util::stream::DoubleStream stream(const JArray< jdouble > &, jint, jint);
      static ::java::util::stream::Stream stream(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::lang::String toString(const JArray< jbyte > &);
      static ::java::lang::String toString(const JArray< jchar > &);
      static ::java::lang::String toString(const JArray< jdouble > &);
      static ::java::lang::String toString(const JArray< jfloat > &);
      static ::java::lang::String toString(const JArray< jint > &);
      static ::java::lang::String toString(const JArray< jlong > &);
      static ::java::lang::String toString(const JArray< ::java::lang::Object > &);
      static ::java::lang::String toString(const JArray< jshort > &);
      static ::java::lang::String toString(const JArray< jboolean > &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Arrays);
    extern PyTypeObject *PY_TYPE(Arrays);

    class t_Arrays {
    public:
      PyObject_HEAD
      Arrays object;
      static PyObject *wrap_Object(const Arrays&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
