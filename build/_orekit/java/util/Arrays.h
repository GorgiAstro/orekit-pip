#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace stream {
      class DoubleStream;
      class Stream;
    }
    class List;
    class Spliterator;
    class Spliterator$OfInt;
    class Spliterator$OfLong;
    class Spliterator$OfDouble;
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
        mid_asList_6f26a4abc68018f5,
        mid_binarySearch_39f26e914c3d5dab,
        mid_binarySearch_bc761538436b757c,
        mid_binarySearch_7e8bbd82bf9be274,
        mid_binarySearch_c882ad60a4eac0f6,
        mid_binarySearch_d3281055b1e668c7,
        mid_binarySearch_069401838fb6a9ce,
        mid_binarySearch_a81d93e79021413f,
        mid_binarySearch_5df2bb18473aeaf1,
        mid_binarySearch_f5ad0a63ed82769f,
        mid_binarySearch_caf1f81e126163d7,
        mid_binarySearch_9ec7fdc16b369dc0,
        mid_binarySearch_817093da2b75d61d,
        mid_binarySearch_8e6949396d7cd4dd,
        mid_binarySearch_fa468d0db37bf642,
        mid_binarySearch_842c2935c925701f,
        mid_binarySearch_4dd8a99b295c75f7,
        mid_binarySearch_a7f4f6d4c7a5fac9,
        mid_binarySearch_7d133d880b7e9428,
        mid_compare_5395429050e03726,
        mid_compare_14f51fb00958cc6f,
        mid_compare_a6a658d065ed87ff,
        mid_compare_99d04d4acac2a711,
        mid_compare_f60ba2e14f6d8c9c,
        mid_compare_96c2d5bde63e2a16,
        mid_compare_77be83a113883481,
        mid_compare_b3978eb7b2e97fc6,
        mid_compare_fa0c844baceead4e,
        mid_compare_985920f46db4e6f0,
        mid_compare_12796a8b6b3049a4,
        mid_compare_7174f3fb624a597b,
        mid_compare_a37071792ac9180b,
        mid_compare_532663f53321c6f8,
        mid_compare_825286fa7f4ccdd1,
        mid_compare_265c7fb46cb1cef5,
        mid_compare_946579fd8843ca85,
        mid_compare_c7ad6b4442b08223,
        mid_compare_be3d1f28bbb6068d,
        mid_compare_58e3ecea0a272d96,
        mid_compareUnsigned_5395429050e03726,
        mid_compareUnsigned_f60ba2e14f6d8c9c,
        mid_compareUnsigned_96c2d5bde63e2a16,
        mid_compareUnsigned_b3978eb7b2e97fc6,
        mid_compareUnsigned_12796a8b6b3049a4,
        mid_compareUnsigned_825286fa7f4ccdd1,
        mid_compareUnsigned_265c7fb46cb1cef5,
        mid_compareUnsigned_c7ad6b4442b08223,
        mid_copyOf_585310b34d0b1a01,
        mid_copyOf_6efbbd5a58f5927d,
        mid_copyOf_07b003307208ca7c,
        mid_copyOf_4832f35fb77dbbda,
        mid_copyOf_f25fd0424b83c940,
        mid_copyOf_8d817f9e03517967,
        mid_copyOf_c2cb044672c8cabd,
        mid_copyOf_0146aee3312d6036,
        mid_copyOf_47af8f880c2c83c7,
        mid_copyOf_1eee810b86838006,
        mid_copyOfRange_458501e7d279be81,
        mid_copyOfRange_8c4d4a2d0a5e6ce4,
        mid_copyOfRange_3a89ed5ea3adefb8,
        mid_copyOfRange_52f318cf4fe52aa5,
        mid_copyOfRange_1e6bb2087c76f37c,
        mid_copyOfRange_018af085437e562a,
        mid_copyOfRange_12cf54bf074966d8,
        mid_copyOfRange_8567cf27ed20e896,
        mid_copyOfRange_48934b4a5406ba35,
        mid_copyOfRange_fcf2cc9a8751ce95,
        mid_deepEquals_2b4434a50a063c8e,
        mid_deepHashCode_8ef1483ed2967e51,
        mid_deepToString_9af22e6fa8677423,
        mid_equals_d5b882f16e78e133,
        mid_equals_d11ba4afbe3a13bb,
        mid_equals_3c9cd66399ef44d7,
        mid_equals_3a3ed4baa87ab62d,
        mid_equals_3a89abee8ad1e7d2,
        mid_equals_9f3fe168122d3e43,
        mid_equals_2b4434a50a063c8e,
        mid_equals_b788c922a3ed1ff3,
        mid_equals_8d595e971516eedf,
        mid_equals_667d0f244b2ea050,
        mid_equals_9ab9031d5a9a17f0,
        mid_equals_e04a4ba7a4ab046c,
        mid_equals_1d5126a7928cfb46,
        mid_equals_331385f619c6dc27,
        mid_equals_393794aa2372a05b,
        mid_equals_7e44a148772cfa6d,
        mid_equals_bc8a297eac1bf7d6,
        mid_equals_8eb213ab6f133a10,
        mid_equals_b06870627438f123,
        mid_equals_1fccae8a1d1f4990,
        mid_fill_5992c95eaa26b2c6,
        mid_fill_9b6afda17eb9885f,
        mid_fill_3682f2e0c8382fe5,
        mid_fill_ee2d82685afab25e,
        mid_fill_1765849da892a4ee,
        mid_fill_fef16b99a212d8f0,
        mid_fill_8f83f7949db3dbca,
        mid_fill_6427525f82bfd666,
        mid_fill_476ca0e741263930,
        mid_fill_aba03154ef897e5e,
        mid_fill_7b1a2a6e244cb62a,
        mid_fill_8c06c6c10c3094d9,
        mid_fill_08bdc28574a6c9d4,
        mid_fill_ffa0d7e763910b1b,
        mid_fill_074053a80cef3642,
        mid_fill_17a20a07428a7ffd,
        mid_fill_7b0031fa295e6742,
        mid_fill_01e952d39fa31326,
        mid_hashCode_67c88f2bf4e7f8b2,
        mid_hashCode_25cfe021b074188a,
        mid_hashCode_02c575777cd113f8,
        mid_hashCode_93b8856bcdf4cb3f,
        mid_hashCode_a15ca216c6412600,
        mid_hashCode_feb4c351130b1677,
        mid_hashCode_8ef1483ed2967e51,
        mid_hashCode_36e413a99faba7bf,
        mid_hashCode_57bbe71ce4cd63fd,
        mid_mismatch_5395429050e03726,
        mid_mismatch_14f51fb00958cc6f,
        mid_mismatch_a6a658d065ed87ff,
        mid_mismatch_99d04d4acac2a711,
        mid_mismatch_f60ba2e14f6d8c9c,
        mid_mismatch_96c2d5bde63e2a16,
        mid_mismatch_5015c1fe12fae2a0,
        mid_mismatch_b3978eb7b2e97fc6,
        mid_mismatch_fa0c844baceead4e,
        mid_mismatch_985920f46db4e6f0,
        mid_mismatch_12796a8b6b3049a4,
        mid_mismatch_7174f3fb624a597b,
        mid_mismatch_a37071792ac9180b,
        mid_mismatch_532663f53321c6f8,
        mid_mismatch_825286fa7f4ccdd1,
        mid_mismatch_265c7fb46cb1cef5,
        mid_mismatch_4cd619146fdfdcb7,
        mid_mismatch_c7ad6b4442b08223,
        mid_mismatch_be3d1f28bbb6068d,
        mid_mismatch_58e3ecea0a272d96,
        mid_parallelSort_d759c70c6670fd89,
        mid_parallelSort_916bf6d42d285c69,
        mid_parallelSort_cc18240f4a737f14,
        mid_parallelSort_808c9c975518f667,
        mid_parallelSort_ec63cb8a58ef5a54,
        mid_parallelSort_b8d088127dcc34ef,
        mid_parallelSort_5ac22fc04c9cff68,
        mid_parallelSort_93148360e5afe527,
        mid_parallelSort_212810d7787267ce,
        mid_parallelSort_ac782c7077255dd3,
        mid_parallelSort_5421d1c1f03cf945,
        mid_parallelSort_91b51b3c05127ead,
        mid_parallelSort_bad5dc7773fa158f,
        mid_parallelSort_6e90031d211c9708,
        mid_parallelSort_aca87852c368b8c4,
        mid_parallelSort_cac9579f49628e08,
        mid_parallelSort_d73dd9ba9346351e,
        mid_parallelSort_7d161439c6cca118,
        mid_sort_d759c70c6670fd89,
        mid_sort_916bf6d42d285c69,
        mid_sort_cc18240f4a737f14,
        mid_sort_808c9c975518f667,
        mid_sort_ec63cb8a58ef5a54,
        mid_sort_b8d088127dcc34ef,
        mid_sort_e41887efdd059644,
        mid_sort_93148360e5afe527,
        mid_sort_212810d7787267ce,
        mid_sort_ac782c7077255dd3,
        mid_sort_5421d1c1f03cf945,
        mid_sort_91b51b3c05127ead,
        mid_sort_bad5dc7773fa158f,
        mid_sort_6e90031d211c9708,
        mid_sort_aca87852c368b8c4,
        mid_sort_d6fa3fef205f947c,
        mid_sort_d73dd9ba9346351e,
        mid_sort_7d161439c6cca118,
        mid_spliterator_c66c411433346d22,
        mid_spliterator_1509d965f3b5d516,
        mid_spliterator_fb1c7969f0cfc8ce,
        mid_spliterator_9cfaeddeb38bf34d,
        mid_spliterator_b5fea5677cd055da,
        mid_spliterator_0f6fa6545c4727de,
        mid_spliterator_da51a255fdb63334,
        mid_spliterator_bdde592e86708e9c,
        mid_stream_72362f5b4201ba22,
        mid_stream_13c199dd7611bbb8,
        mid_stream_1c2775ba4e5054de,
        mid_stream_417cf9b9d752d1e2,
        mid_toString_e138d30558f13b3a,
        mid_toString_019265aa2e3f6a5e,
        mid_toString_1d208720fe1d027f,
        mid_toString_d388cf6f460f5c59,
        mid_toString_ae74174caf679503,
        mid_toString_3ee62df12f7a084a,
        mid_toString_9af22e6fa8677423,
        mid_toString_b80788ec020ec68c,
        mid_toString_46f29c1051ee9985,
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
