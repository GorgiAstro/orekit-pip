#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Spliterator$OfInt;
    class Spliterator$OfDouble;
    class Comparator;
    class Spliterator;
    class List;
    class Spliterator$OfLong;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
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
        mid_asList_e800446ce338cd30,
        mid_binarySearch_8826a64d4f7933b4,
        mid_binarySearch_840aa18798d2d0fb,
        mid_binarySearch_da9b0125e67845c3,
        mid_binarySearch_193208c89a2f8e03,
        mid_binarySearch_9b6b5ac0e8dd7464,
        mid_binarySearch_dbabb6aec1d2c6dd,
        mid_binarySearch_8c1659d0698f20a3,
        mid_binarySearch_8c344941b0207b39,
        mid_binarySearch_cf86e8bd940f4db2,
        mid_binarySearch_38ea0387b2137beb,
        mid_binarySearch_165fcdb0c2a184ec,
        mid_binarySearch_fce481e087b3e63a,
        mid_binarySearch_2c41b6ad25965df2,
        mid_binarySearch_ddf1fbdff1b1abb3,
        mid_binarySearch_bb607a4f84848d13,
        mid_binarySearch_7c404dde48fe3115,
        mid_binarySearch_56e0aa2b1b849eb5,
        mid_binarySearch_28df2fd39db19266,
        mid_compare_72b6c023c4adef42,
        mid_compare_c005ee51dee835ea,
        mid_compare_7e69791ee61bcc76,
        mid_compare_d617f8f8922e84c1,
        mid_compare_f95aa64a2259804a,
        mid_compare_eeb06e42cd299736,
        mid_compare_2e19feab5f7140de,
        mid_compare_3e0ca18d533e0a4f,
        mid_compare_ea5ab179056ac266,
        mid_compare_2bb9774dc70eeed0,
        mid_compare_6f57a02e3de68ea8,
        mid_compare_745c5fa6920ca05b,
        mid_compare_69ff11ea2a25556f,
        mid_compare_0f67c874b33f924f,
        mid_compare_5076f667ad4c15c9,
        mid_compare_468df83a8d0baa97,
        mid_compare_ebeec0c6897c9d04,
        mid_compare_2ee56780dd674354,
        mid_compare_9aac3703cb360621,
        mid_compare_8c8020e98abdc1fe,
        mid_compareUnsigned_72b6c023c4adef42,
        mid_compareUnsigned_f95aa64a2259804a,
        mid_compareUnsigned_eeb06e42cd299736,
        mid_compareUnsigned_3e0ca18d533e0a4f,
        mid_compareUnsigned_6f57a02e3de68ea8,
        mid_compareUnsigned_5076f667ad4c15c9,
        mid_compareUnsigned_468df83a8d0baa97,
        mid_compareUnsigned_2ee56780dd674354,
        mid_copyOf_ea6851a0a3558ec4,
        mid_copyOf_c60846d6fe229592,
        mid_copyOf_fdbebc837979003b,
        mid_copyOf_fcda3eaf0024c89d,
        mid_copyOf_779b1b6dd44ceb08,
        mid_copyOf_9db791005dbe6856,
        mid_copyOf_850715a83f350d92,
        mid_copyOf_49f22624d460f6f6,
        mid_copyOf_2ea7b38db2e02f67,
        mid_copyOf_91b267a3846372ee,
        mid_copyOfRange_c0c20b37071f4261,
        mid_copyOfRange_2ba70fc252cf98b1,
        mid_copyOfRange_4ab5393b410e04fc,
        mid_copyOfRange_1b033e31d9b2e8c1,
        mid_copyOfRange_a7a078e5da9aeb97,
        mid_copyOfRange_4bc3281a78f20a53,
        mid_copyOfRange_bd35d76b7282fa0e,
        mid_copyOfRange_5440825cfb17dbb7,
        mid_copyOfRange_9f2d06efc7a5ff96,
        mid_copyOfRange_4898f5c002a886f7,
        mid_deepEquals_168b48c4c707ce32,
        mid_deepHashCode_0051854591608e5f,
        mid_deepToString_5d9b025c020bd4e2,
        mid_equals_647cf52483fdbbfb,
        mid_equals_f203c6163025f1a4,
        mid_equals_e686b66104c2bcdb,
        mid_equals_ae971d88c358a487,
        mid_equals_a3d1d51d22e4faac,
        mid_equals_00519a977ecc68a6,
        mid_equals_168b48c4c707ce32,
        mid_equals_264d1cfb985cead2,
        mid_equals_a4d0a8c0f2dd71a3,
        mid_equals_d3b8c63008199561,
        mid_equals_e4d55af07285c711,
        mid_equals_44cd765cf0743836,
        mid_equals_d97f40c6ed9dc5ef,
        mid_equals_ccda7378396bd1a0,
        mid_equals_b69aa21af786478b,
        mid_equals_7b15564b8663be44,
        mid_equals_a1d158b49a7a9588,
        mid_equals_9f805b88d0c1fe90,
        mid_equals_69ddd0a84afda0f3,
        mid_equals_831c29a9cbaf363d,
        mid_fill_4243676c5ff6b6bb,
        mid_fill_8f35067e8ea31e52,
        mid_fill_67067468446516fe,
        mid_fill_334f245ec9cee46b,
        mid_fill_b6aa2f48bc0976bb,
        mid_fill_bb84519dea62b6cb,
        mid_fill_f633c6efbb3d3386,
        mid_fill_d77b9656779c558d,
        mid_fill_f877a27fd99c2dc8,
        mid_fill_6c5a648604ee6c48,
        mid_fill_dfa0581930a374f0,
        mid_fill_e7f365a3da5f81d0,
        mid_fill_ce68cc77c7b35f1a,
        mid_fill_4ea37a49d8303ab9,
        mid_fill_5218ef3dd56e76c0,
        mid_fill_d4a9414876c6e104,
        mid_fill_6dba15581df9e961,
        mid_fill_81c122234befdd96,
        mid_hashCode_53324f422c2c7f64,
        mid_hashCode_cedc4c6898e22fb4,
        mid_hashCode_f4eedf29a683816e,
        mid_hashCode_3ad30757a4753630,
        mid_hashCode_d57a86117ebc55bd,
        mid_hashCode_8f818692fd2bf53f,
        mid_hashCode_0051854591608e5f,
        mid_hashCode_ffad442d43f3186b,
        mid_hashCode_6ed9df6bafe24c89,
        mid_mismatch_72b6c023c4adef42,
        mid_mismatch_c005ee51dee835ea,
        mid_mismatch_7e69791ee61bcc76,
        mid_mismatch_d617f8f8922e84c1,
        mid_mismatch_f95aa64a2259804a,
        mid_mismatch_eeb06e42cd299736,
        mid_mismatch_ff3dc61ebcc565b1,
        mid_mismatch_3e0ca18d533e0a4f,
        mid_mismatch_ea5ab179056ac266,
        mid_mismatch_2bb9774dc70eeed0,
        mid_mismatch_6f57a02e3de68ea8,
        mid_mismatch_745c5fa6920ca05b,
        mid_mismatch_69ff11ea2a25556f,
        mid_mismatch_0f67c874b33f924f,
        mid_mismatch_5076f667ad4c15c9,
        mid_mismatch_468df83a8d0baa97,
        mid_mismatch_d17e2bacabbfd032,
        mid_mismatch_2ee56780dd674354,
        mid_mismatch_9aac3703cb360621,
        mid_mismatch_8c8020e98abdc1fe,
        mid_parallelSort_459771b03534868e,
        mid_parallelSort_dd3f254991df5d48,
        mid_parallelSort_ab69da052b88f50c,
        mid_parallelSort_e6f9f198cf241cf1,
        mid_parallelSort_86a2769cb881d388,
        mid_parallelSort_17fd280b39a6ae4b,
        mid_parallelSort_68d8ddb3d76fd9fe,
        mid_parallelSort_7bcc20f47157c2e9,
        mid_parallelSort_d38aeeedac9eb92a,
        mid_parallelSort_a9fddc59b07ce512,
        mid_parallelSort_d23ba6c655e17478,
        mid_parallelSort_4484ad1f15b73c7a,
        mid_parallelSort_6a110138522415ed,
        mid_parallelSort_a811d6c26b223197,
        mid_parallelSort_2d042ca5a5866231,
        mid_parallelSort_d2110105a458b1d3,
        mid_parallelSort_274e52486ae08586,
        mid_parallelSort_d57c7b6662e4be38,
        mid_sort_459771b03534868e,
        mid_sort_dd3f254991df5d48,
        mid_sort_ab69da052b88f50c,
        mid_sort_e6f9f198cf241cf1,
        mid_sort_86a2769cb881d388,
        mid_sort_17fd280b39a6ae4b,
        mid_sort_55e8d43de8149236,
        mid_sort_7bcc20f47157c2e9,
        mid_sort_d38aeeedac9eb92a,
        mid_sort_a9fddc59b07ce512,
        mid_sort_d23ba6c655e17478,
        mid_sort_4484ad1f15b73c7a,
        mid_sort_6a110138522415ed,
        mid_sort_a811d6c26b223197,
        mid_sort_2d042ca5a5866231,
        mid_sort_ebe0a7cade3ee163,
        mid_sort_274e52486ae08586,
        mid_sort_d57c7b6662e4be38,
        mid_spliterator_c0da06547ed3e1b6,
        mid_spliterator_ef25bd37a5892aa9,
        mid_spliterator_72a6d1fb4aceda56,
        mid_spliterator_b620f6e2bc03dda6,
        mid_spliterator_e4549ed6bbbc8984,
        mid_spliterator_bd95d283c5fdd8d1,
        mid_spliterator_fa8dab4710ea0f01,
        mid_spliterator_ae44e314b15baf08,
        mid_stream_969b847f93a58e14,
        mid_stream_f33e55a5742a331d,
        mid_stream_b82eab6a9b6c7505,
        mid_stream_5aade0d2cc81a461,
        mid_toString_69e6a7d6acbf30b1,
        mid_toString_9a53c61542f295a1,
        mid_toString_183ce039f033866f,
        mid_toString_59ce57b0e0d1ffdc,
        mid_toString_e06025bc23ba70af,
        mid_toString_63dc073785b880ee,
        mid_toString_5d9b025c020bd4e2,
        mid_toString_dc71f0c11b947401,
        mid_toString_df599a3b7a997477,
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
