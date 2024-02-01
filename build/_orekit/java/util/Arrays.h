#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Spliterator$OfDouble;
    class Comparator;
    class Spliterator;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class List;
    class Spliterator$OfLong;
    class Spliterator$OfInt;
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
        mid_asList_5831821065411121,
        mid_binarySearch_1fba924c1216caf8,
        mid_binarySearch_b80cf5143519da2a,
        mid_binarySearch_499981c6368c693f,
        mid_binarySearch_3c8415c42cc2c797,
        mid_binarySearch_342822b7e46a4cdd,
        mid_binarySearch_9b28ea9170836f42,
        mid_binarySearch_71bdb3749e30f2a9,
        mid_binarySearch_30ae421db184a7b2,
        mid_binarySearch_44bd3164d0688c23,
        mid_binarySearch_0aa577ed01bc0516,
        mid_binarySearch_33b57dfff5d3056b,
        mid_binarySearch_6272e3c15e78c9ba,
        mid_binarySearch_fb102a25573df658,
        mid_binarySearch_21ac6bf425bbb698,
        mid_binarySearch_5718012a4f4b2631,
        mid_binarySearch_c1cf4f74dcee67c9,
        mid_binarySearch_39fbffbad076f685,
        mid_binarySearch_20b397c4f69acba0,
        mid_compare_e2b43ba6885637ad,
        mid_compare_bd249e779a40941c,
        mid_compare_3bcc8d13f0d41c68,
        mid_compare_22c935b20fc999bb,
        mid_compare_b444938e9c64511a,
        mid_compare_52cccf809ce95dd0,
        mid_compare_b66029ebb1df0d4d,
        mid_compare_2a13af95313e31fb,
        mid_compare_441bf402e3163e36,
        mid_compare_1c981d4d60034262,
        mid_compare_040e80419b131206,
        mid_compare_d2816b23bc3d7fb7,
        mid_compare_b802a207b48c5b56,
        mid_compare_3094b06c63a5265c,
        mid_compare_431377fd2ff78c4a,
        mid_compare_19b41a87a8ffac81,
        mid_compare_8af2b583da505146,
        mid_compare_53d8831c521a373f,
        mid_compare_a6d97b700ddb8cb7,
        mid_compare_485d4f399dfda3f3,
        mid_compareUnsigned_e2b43ba6885637ad,
        mid_compareUnsigned_b444938e9c64511a,
        mid_compareUnsigned_52cccf809ce95dd0,
        mid_compareUnsigned_2a13af95313e31fb,
        mid_compareUnsigned_040e80419b131206,
        mid_compareUnsigned_431377fd2ff78c4a,
        mid_compareUnsigned_19b41a87a8ffac81,
        mid_compareUnsigned_53d8831c521a373f,
        mid_copyOf_78d38a050501c17b,
        mid_copyOf_118077fbb1b51e14,
        mid_copyOf_25f286641019e8d7,
        mid_copyOf_5c5585b2080db6bb,
        mid_copyOf_52c3cc5dc5d9d7b0,
        mid_copyOf_a914e653d9d39f7a,
        mid_copyOf_2d5fe1c1682f00b8,
        mid_copyOf_d91ca074e7808ea0,
        mid_copyOf_408bdc1eae61356d,
        mid_copyOf_5964053b8067b2a2,
        mid_copyOfRange_0f0e374d153ef6b1,
        mid_copyOfRange_d97e26d937793687,
        mid_copyOfRange_8f6ddc643efefb02,
        mid_copyOfRange_dfb492ed53b4ebb6,
        mid_copyOfRange_50e2b2f516ae3aee,
        mid_copyOfRange_b5a7d8d533dd134b,
        mid_copyOfRange_c6e9b1846e385f51,
        mid_copyOfRange_8390753cf45bdf7b,
        mid_copyOfRange_89949fd8c309ef39,
        mid_copyOfRange_710c73a094222c9a,
        mid_deepEquals_7942e72a75b53921,
        mid_deepHashCode_9704dcff2884b80b,
        mid_deepToString_71cc527176eb14c4,
        mid_equals_7f0e96d531737149,
        mid_equals_d6cb7b4faa93511c,
        mid_equals_ae9ef40b81aa3737,
        mid_equals_a03930c526253e6a,
        mid_equals_f92b869f534c4ff0,
        mid_equals_f0a71ca3a8bba19c,
        mid_equals_7942e72a75b53921,
        mid_equals_ae43abd99d1296a0,
        mid_equals_91de72cf16c23b35,
        mid_equals_9dca917f4ecf3dac,
        mid_equals_478a0a9ca56d77d1,
        mid_equals_01ae3395de02023e,
        mid_equals_d6f5cb71f496d8bb,
        mid_equals_806bf53c13da87db,
        mid_equals_4086f425d97778c8,
        mid_equals_f8d7bcfb0e123252,
        mid_equals_858f3d5692852a1b,
        mid_equals_1f1b504789a7311c,
        mid_equals_0a286de01e9aff56,
        mid_equals_5f6d33be87ba3e1f,
        mid_fill_a79539b72e2c3c9b,
        mid_fill_ac2321aff018c47f,
        mid_fill_7175625f4c54d6f6,
        mid_fill_19a01fdb4baa56b0,
        mid_fill_eb615a4b551f10d9,
        mid_fill_416314b5edbdc63c,
        mid_fill_16b75c577a107ba8,
        mid_fill_3e61b124a94ad6fc,
        mid_fill_61884a4b3b6a91f5,
        mid_fill_6857340fc13492fb,
        mid_fill_ef9ab799e597fc7d,
        mid_fill_68b43331e8830fbe,
        mid_fill_dd3e2c084106d4a1,
        mid_fill_628cca4b23c73077,
        mid_fill_b6bf6e6e61056d9c,
        mid_fill_a2547a7b9031aa51,
        mid_fill_46ced5b5681b09c6,
        mid_fill_3f6bccba271ced6e,
        mid_hashCode_89e14f411787412a,
        mid_hashCode_8ff26d6b29141036,
        mid_hashCode_0bbaa89e7f8976bd,
        mid_hashCode_15385381e09b1d6b,
        mid_hashCode_4c6a473f00540fd2,
        mid_hashCode_095143a0bd47aeb1,
        mid_hashCode_9704dcff2884b80b,
        mid_hashCode_4f3642556613bb47,
        mid_hashCode_1ef93d7549096ece,
        mid_mismatch_e2b43ba6885637ad,
        mid_mismatch_bd249e779a40941c,
        mid_mismatch_3bcc8d13f0d41c68,
        mid_mismatch_22c935b20fc999bb,
        mid_mismatch_b444938e9c64511a,
        mid_mismatch_52cccf809ce95dd0,
        mid_mismatch_aaaad1f834437431,
        mid_mismatch_2a13af95313e31fb,
        mid_mismatch_441bf402e3163e36,
        mid_mismatch_1c981d4d60034262,
        mid_mismatch_040e80419b131206,
        mid_mismatch_d2816b23bc3d7fb7,
        mid_mismatch_b802a207b48c5b56,
        mid_mismatch_3094b06c63a5265c,
        mid_mismatch_431377fd2ff78c4a,
        mid_mismatch_19b41a87a8ffac81,
        mid_mismatch_535036ae3305f17d,
        mid_mismatch_53d8831c521a373f,
        mid_mismatch_a6d97b700ddb8cb7,
        mid_mismatch_485d4f399dfda3f3,
        mid_parallelSort_bba2a19638de22ff,
        mid_parallelSort_e22e96b35f4145e4,
        mid_parallelSort_a71c45509eaf92d1,
        mid_parallelSort_03eb90545fab7645,
        mid_parallelSort_d43202153dd284f7,
        mid_parallelSort_22b2c2bc86e56cb0,
        mid_parallelSort_3fafd6e61e36074b,
        mid_parallelSort_f8328e41c109dcc9,
        mid_parallelSort_6b02e78ec9b47ffa,
        mid_parallelSort_e4288ba5fbf20d28,
        mid_parallelSort_6f10578448832e2a,
        mid_parallelSort_40b495c766d36227,
        mid_parallelSort_a75f0ad7db148908,
        mid_parallelSort_9faac5a856899214,
        mid_parallelSort_5878dd4fd67d78f9,
        mid_parallelSort_d3f3c19497a85287,
        mid_parallelSort_298bfd39fb463626,
        mid_parallelSort_d7441a2de0bb4c1d,
        mid_sort_bba2a19638de22ff,
        mid_sort_e22e96b35f4145e4,
        mid_sort_a71c45509eaf92d1,
        mid_sort_03eb90545fab7645,
        mid_sort_d43202153dd284f7,
        mid_sort_22b2c2bc86e56cb0,
        mid_sort_fc48e5166ee82e6b,
        mid_sort_f8328e41c109dcc9,
        mid_sort_6b02e78ec9b47ffa,
        mid_sort_e4288ba5fbf20d28,
        mid_sort_6f10578448832e2a,
        mid_sort_40b495c766d36227,
        mid_sort_a75f0ad7db148908,
        mid_sort_9faac5a856899214,
        mid_sort_5878dd4fd67d78f9,
        mid_sort_0dbf9ee55f7adc62,
        mid_sort_298bfd39fb463626,
        mid_sort_d7441a2de0bb4c1d,
        mid_spliterator_91fff06cc2f92cef,
        mid_spliterator_71eacbf339774afe,
        mid_spliterator_535ff33f3b9123f3,
        mid_spliterator_3f2b28c41cc65962,
        mid_spliterator_1e0c49b0e7e81c72,
        mid_spliterator_2d7b874aef57ece6,
        mid_spliterator_818c76e75ad3b2bf,
        mid_spliterator_f0719418bba1e334,
        mid_stream_6c41db567343fc7b,
        mid_stream_ea5d6111543a5047,
        mid_stream_d46fe892de2300c1,
        mid_stream_30f47f2d950674cc,
        mid_toString_70208d02e8800d4c,
        mid_toString_8b7706fe569efa7c,
        mid_toString_fab3d5881f09253b,
        mid_toString_90aa1c4027ec27ae,
        mid_toString_c9e8e005aec406fb,
        mid_toString_b74eead037cffbde,
        mid_toString_71cc527176eb14c4,
        mid_toString_4472ecfaa1e833eb,
        mid_toString_adf9409972df88b1,
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
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
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
